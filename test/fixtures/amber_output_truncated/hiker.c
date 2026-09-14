#include "hiker.h"
#include <stdio.h>

int answer(void) {
    /* The learner put a print inside a loop to see what was happening. It
       prints far more than the 50K the runner keeps, so the line naming the
       verdict is cut off the end and no colour can be read from the run. */
    int total = 0;
    for (int i = 0; i != 5000; i++) {
        printf("debug: i is %d, total is %d\n", i, total);
        total += 6;
    }
    return 6 * 7;
}
