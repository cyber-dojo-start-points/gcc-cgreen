/* Given a .h name instead of a .c one, and nothing #includes it. The
   Makefile names hiker_tests.o and hiker.o and nothing else, so gcc never
   opens this file and the missing bracket never stops the build. */

Ensure(hiker, answers_two_digits) {
    assert_that(answer(), is_equal_to(42);
}
