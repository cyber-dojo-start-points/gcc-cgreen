#include "hiker.h"
#include <stddef.h>

int answer(void) {
    return 6 * 9;
}

int checksum(void) {
    /* The learner has not filled the table in yet, so it is still NULL and
       reading from it crashes. The crash and the false assertion are in
       separate test processes, so the run reports both. */
    int *checksums = NULL;
    return checksums[0];
}
