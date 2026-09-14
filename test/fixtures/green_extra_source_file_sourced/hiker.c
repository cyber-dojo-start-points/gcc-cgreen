#include "hiker.h"

/* The Makefile compiles hiker.c and hiker_tests.c and nothing else, so an
   extra source file reaches the build by being #included here. */
#include "checksum.c"

int answer(void) {
    return 6 * checksum();
}
