/* The Makefile names hiker_tests.o and hiker.o and nothing else, so a second
   test file reaches the build by being #included from hiker_tests.c. */

Ensure(hiker, answers_three_digits) {
    assert_that(answer() > 99, is_true);
}
