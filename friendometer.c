#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  float friendValue;
  unsigned friendMax;
  float friendPerc;
  unsigned friendDecay;
  char lastChar;

  if (argv[1] == NULL) {
    fprintf(stderr, "No text passed; pass it in as an argument!\n");
    return 3;
  }

  for (int i = 0; argv[1][i]; i++) {
    argv[1][i] = tolower(argv[1][i]);
  }

  char data[strlen(argv[1]) + 1];
  strcpy(data, argv[1]);

  for (int i = 0; i < strlen(data); i++) {
    int friendAddition;

    if (data[i] == lastChar) {
      friendDecay *= 2;
    } else
      friendDecay = 1;

    switch (data[i]) {
    case 'a':
      friendAddition = 1;
      break;
    case 'd':
      friendAddition = 9;
      break;
    case 'e':
      friendAddition = 5;
      break;
    case 'f':
      friendAddition = 10;
      break;
    case 'g':
      friendAddition = 3;
      break;
    case 'h':
      friendAddition = -1;
      break;
    case 'i':
      friendAddition = 8;
      break;
    case 'm':
      friendAddition = 6;
      break;
    case 'n':
      friendAddition = 7;
      break;
    case 'o':
      friendAddition = 4;
      break;
    case 'r':
      friendAddition = 8;
      break;
    case 's':
      friendAddition = 7;
      break;
    case 'w':
      friendAddition = 6;
      break;
    case 'x':
      friendAddition = 2;
      break;
    case 'y':
      friendAddition = 6;
      break;
    case 'z':
      friendAddition = 1;
      break;
    case ' ':
      friendAddition = 8;
      break;
    }

    friendValue += (float)friendAddition / friendDecay;

    lastChar = data[i];
  }

  friendMax = strlen(data) * 10;

  friendPerc = (float)friendValue / (float)friendMax * 100;

  if (friendPerc >= 95.0)
    printf(":) %0.1f%%\n", friendPerc);
  else if (friendPerc >= 90.0)
    printf("We've got friends on the inside, waiting for you!\n");
  else if (friendPerc >= 80.0)
    printf("FOR [[BIG SHOT!!!]]S LIKE YOU [[%0.1f%%]] IS [[On The House!!]]\n",
           friendPerc);
  else if (friendPerc >= 75.0)
    printf("\033[1;34mAMAZING\033[1;0m %0.1f%%!! You truly outdid yourself "
           "there!\n",
           friendPerc);
  else if (friendPerc >= 70.0)
    printf("Ooh, %0.1f%%! That's a nice number!!\n", friendPerc);
  else if (friendPerc > 65.9 && friendPerc < 67)
    printf("OUR BEAUTIFUL\nCONNECTION, SHARES\n%0.1f%%.\ndeltarune.com\n",
           friendPerc);
  else if (friendPerc >= 60.0)
    printf("%0.1f%% My Dear\n", friendPerc);
  else if (friendPerc >= 55.0)
    printf("Mike, the %0.1f%%, please!\n", friendPerc);
  else if (friendPerc >= 50.0)
    printf("%0.1f%% IS WORTH THE CHAOS!\n", friendPerc);
  else if (friendPerc >= 40.0)
    printf("This \033[1;33m%0.1f%%\033[1;0m is \033[1;33mPissing\033[1;0m me "
           "off...\n",
           friendPerc);
  else if (friendPerc >= 20.0)
    printf(
        "It says here...%0.1f%%! Great job! Looks like we're safe for now.\n",
        friendPerc);
  else if (friendPerc >= 10.0)
    printf("%0.1f%%? Neat.\n", friendPerc);
  else if (friendPerc >= 5.0)
    printf("* You feel the storm calm down.\n");
  else
    printf("Thou shall - what. What is that number. I don't like it.\n");

  return 0;
}
