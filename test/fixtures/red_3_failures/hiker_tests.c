#include <cgreen/cgreen.h>
#include "hiker.h"

Describe(hiker);
BeforeEach(hiker) {}
AfterEach(hiker) {}

/* cgreen runs each test in its own process, so a false assertion ends only
   the test it is in and all three are reported. */

Ensure(hiker, answers_42) {
    assert_that(answer(), is_equal_to(42));
}

Ensure(hiker, answers_three_digits) {
    assert_that(answer() > 99, is_true);
}

Ensure(hiker, answers_the_question) {
    assert_that(answer(), is_equal_to(6 * 9 * 2));
}
