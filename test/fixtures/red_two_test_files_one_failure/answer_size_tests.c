/* The Makefile names hiker_tests.o and hiker.o and nothing else, so a second
   test file reaches the build by being #included from hiker_tests.c. Of the
   two tests here only answers_three_digits is false. */

Ensure(hiker, answers_two_digits) {
    assert_that(answer() > 9 && answer() < 100, is_true);
}

Ensure(hiker, answers_three_digits) {
    assert_that(answer() > 99, is_true);
}
