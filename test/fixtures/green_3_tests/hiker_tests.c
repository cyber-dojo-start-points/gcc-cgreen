#include <cgreen/cgreen.h>
#include "hiker.h"

Describe(hiker);
BeforeEach(hiker) {}
AfterEach(hiker) {}

/* cgreen-runner finds every Ensure in the shared library by itself, so a
   second and third test join the run without being named anywhere. */

Ensure(hiker, answers_42) {
    assert_that(answer(), is_equal_to(42));
}

Ensure(hiker, answers_two_digits) {
    assert_that(answer() > 9 && answer() < 100, is_true);
}

Ensure(hiker, does_not_answer_the_question) {
    assert_that(answer(), is_not_equal_to(6 * 9));
}
