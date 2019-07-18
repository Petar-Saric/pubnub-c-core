/* -*- c-file-style:"stroustrup"; indent-tabs-mode: nil -*- */
#include "lib/pn_strnlen_s.h"

size_t pn_strnlen_s(const char *str, size_t strsz)
{
    unsigned i;

    if (NULL == str) {
        return 0;
    }
    for(i = 0; i < strsz; i++, str++) {
        if ('\0' == *str) {
            break;
        }
    }
    
    return i;
}
