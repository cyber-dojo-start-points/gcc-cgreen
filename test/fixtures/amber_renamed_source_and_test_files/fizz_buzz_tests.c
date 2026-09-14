#include <cgreen/cgreen.h>
#include "fizz_buzz.h"

/* The tests themselves are sound. The Makefile sets KATA=hiker and names
   hiker_tests.o and hiker.o, so renaming both files leaves it asking for
   sources that are no longer there and the build stops before any test
   runs. Renaming here means editing the Makefile too. */

Describe(fizz_buzz);
BeforeEach(fizz_buzz) {}
AfterEach(fizz_buzz) {}

Ensure(fizz_buzz, answers_42) {
    assert_that(fizz_buzz(), is_equal_to(42));
}
