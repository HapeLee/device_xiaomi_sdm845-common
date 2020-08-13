#include <stdint.h>

namespace android {
    extern "C" void perf_get_feedback() {}
    extern "C" void perf_hint() {}
    extern "C" int perf_lock_acq(int handle, int duration, int list[], int numArgs) { return (handle > 0) ? handle : 1; }
    extern "C" void perf_lock_cmd() {}
    extern "C" int perf_lock_rel(int handle) { return 0; }
    extern "C" void perf_lock_use_profile() {}
}
