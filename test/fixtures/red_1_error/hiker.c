#include "hiker.h"
#include <stddef.h>

int answer(void) {
    /* The learner has not filled the table in yet, so it is still NULL and
       reading from it crashes. cgreen runs each test in its own process,
       catches the signal, and reports the crash as an exception. */
    int *answers = NULL;
    return answers[0];
}
