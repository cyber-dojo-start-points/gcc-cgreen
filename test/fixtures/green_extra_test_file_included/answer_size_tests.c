/* The Makefile names hiker_tests.o and hiker.o and nothing else, so a second
   test file reaches the build by being #included from hiker_tests.c. Once it
   is in the shared library cgreen-runner finds this test by itself. */

Ensure(hiker, answers_two_digits) {
    assert_that(answer() > 9 && answer() < 100, is_true);
}
