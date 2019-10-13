/* -*- c-file-style:"stroustrup"; indent-tabs-mode: nil -*- */
#include "posix/monotonic_clock_get_time.h"


int pbmc_elapsed_ms(struct timespec prev_timspec, struct timespec timspec)
{
    int s_diff   = timspec.tv_sec - prev_timspec.tv_sec;
    int m_s_diff = (timspec.tv_nsec - prev_timspec.tv_nsec) / MILLI_IN_NANO;
    return (s_diff * UNIT_IN_MILLI) + m_s_diff;
}
