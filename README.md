# Friendometer

The "Friend Inside Me" detector.

Ever had the worry of being caught in a "Friend Inside Me" attack in the
wilds of the western jungle? Well, worry not, because the Friendometer
will help you calculate how much you can take before being caught in one
by calculating the Friend energy!

## Installation

Simply head over to the **Releases** section on the GitHub repository
and find the version you are looking for.

## Compiling

For compiling, simply get your favorite C compiler (GCC and Clang should work)
and compile the [`friendometer.c`](friendometer.c) file.

GCC:

```sh
gcc friendometer.c -std=c99 -o friendometer
```

Clang:

```sh
clang friendometer.c --std=c99 -o friendometer
```

## Usage

Simply add any text as an argument to the executable:

```sh
./friendometer friend
```

Then, watch the percentage and comment you are given!
