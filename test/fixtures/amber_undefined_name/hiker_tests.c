#include <cgreen/cgreen.h>
#include "hiker.h"

Describe(hiker);
BeforeEach(hiker) {}
AfterEach(hiker) {}

Ensure(hiker, answers_42) {
    assert_that(ansewr(), is_equal_to(42));
}
