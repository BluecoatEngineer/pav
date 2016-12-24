#ifndef _PAV_H_
#define _PAV_H_

#include <stdbool.h>
#include <limits.h>

#ifdef __cplusplus
extern "C" {
#endif

enum pav_op {
    PAV_OP_INVALID = 0,
    PAV_OP_DECODE,
    PAV_OP_PLOTPNG,
    PAV_OP_GUI,
    PAV_OP_VERSION
};

struct pav_opts {
    FILE *fin;
    FILE *fout;
    char fin_name[512];
    char fout_name[512];
    enum pav_op op;
    unsigned loops;
    uint64_t range_begin;
    uint64_t range_end;
    bool verbose;
};


#ifdef __cplusplus
}
#endif

#endif
