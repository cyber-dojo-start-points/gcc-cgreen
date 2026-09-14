#include <cgreen/cgreen.h>
#include "hiker.h"

Describe(hiker);
BeforeEach(hiker) {}
AfterEach(hiker) {}

Ensure(hiker, answers_42) {
    assert_that(answer(), is_equal_to(42));
}

Ensure(hiker, does_not_answer_the_question) {
    assert_that(answer(), is_not_equal_to(6 * 9));
}

#include "answer_size_tests.c"
