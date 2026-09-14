/* A test file in a sub-directory joins the run the same way as one beside
   hiker_tests.c: the Makefile names its two object files and nothing else,
   so this file is #included by path from hiker_tests.c. */

Ensure(hiker, answers_two_digits) {
    assert_that(answer() > 9 && answer() < 100, is_true);
}
