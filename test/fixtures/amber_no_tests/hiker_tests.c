#include <cgreen/cgreen.h>
#include "hiker.h"

/* The context is set up but the learner has not written an Ensure yet, so
   the shared library builds and cgreen-runner finds nothing to run. */

Describe(hiker);
BeforeEach(hiker) {}
AfterEach(hiker) {}
