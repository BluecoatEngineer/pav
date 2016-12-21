#ifndef _PROTO_H_
#define _PROTO_H_

#include "queue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct proto proto_t;
typedef struct proto_dframe proto_dframe_t;


/* Accessors for the sample index and frame */
uint8_t proto_dframe_data(proto_dframe_t *df);
uint64_t proto_dframe_idx(proto_dframe_t *df);
proto_dframe_t *proto_dframe_first(proto_t *pr);
proto_dframe_t *proto_dframe_next(proto_dframe_t *df);
proto_dframe_t *proto_dframe_last(proto_t *pr);




proto_t *proto_create(void);
proto_t *proto_addref(proto_t *pr);
unsigned proto_getref(proto_t *pr);
void proto_dropref(proto_t *pr);

void proto_set_note(proto_t *pr, char *s);
const char *proto_get_note(proto_t *pr);
void proto_set_period(proto_t *pr, float *t);
uint64_t proto_get_nframes(proto_t *pr);

void proto_add_dframe(proto_t *pr, uint64_t idx, uint8_t data);

typedef void (*proto_sink_t)(proto_dframe_t *df, void *udata);
void proto_foreach(proto_t *pr, proto_sink_t *sink);



#ifdef __cplusplus
}
#endif

#endif
