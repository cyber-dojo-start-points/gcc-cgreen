#include <cgreen/cgreen.h>
#include "hiker.h"

Describe(hiker);
BeforeEach(hiker) {}
AfterEach(hiker) {}

/* Only answers_42 is false. The other two hold for 54 as well as for 42, so
   the run reports two passes beside the one failure. */

Ensure(hiker, answers_two_digits) {
    assert_that(answer() > 9 && answer() < 100, is_true);
}

Ensure(hiker, answers_42) {
    assert_that(answer(), is_equal_to(42));
}

Ensure(hiker, answers_more_than_40) {
    assert_that(answer() > 40, is_true);
}
