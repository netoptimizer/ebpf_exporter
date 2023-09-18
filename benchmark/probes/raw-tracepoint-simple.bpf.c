#define BENCHMARK_SIMPLE_MAP
#include "benchmark.bpf.h"

BENCHMARK_PROBE(RAW_TRACEPOINT_SEC, simple_probe);
