#ifndef _VIEWS_H_
#define _VIEWS_H_

#include <stdint.h>
#include <GL/glew.h>


#ifdef __cplusplus
extern "C" {
#endif

enum view_flags {
    VIEW_CLEAN = 0x0,
    VIEW_PLOT_DIRTY = 0x1,
    VIEW_TEXTURE_DIRTY = 0x2,
    VIEW_VBO_DIRTY = 0x4,
    VIEW_DIRTY = 0x8
};

typedef struct view view_t;
typedef struct views views_t;

#include "cap.h"
#include "plot.h"
#include "gui.h"
#include "queue.h"
#include "shaders.h"


void views_populate_from_bundle(cap_bundle_t *b, views_t **vl);
void views_create_list(views_t **l);
void views_add_ch(views_t *v, cap_t *c);
void views_refresh(view_t *v);
unsigned long views_get_begin(view_t *v);
unsigned long views_get_end(view_t *v);
unsigned long views_get_width(view_t *v);
unsigned views_get_count(views_t *vl);

int64_t views_get_target(view_t *v);
void views_set_target(view_t *v, int64_t n);
void views_set_range(view_t *v, int64_t begin, int64_t end);

char *views_get_glyph(view_t *v);
SDL_Texture *views_get_texture(view_t *v);
GLuint views_get_vbo_idx(view_t *v);
GLuint views_get_vbo_vertices(view_t *v);
float views_get_zoom(view_t *v);

view_t *views_first(views_t *vl);
view_t *views_next(view_t *v);
view_t *views_prev(view_t *v);
view_t *views_last(views_t *vl);
cap_t *views_get_cap(view_t *v);

void views_to_vertices(view_t *v, float **vertices);

void views_zoom_in(struct view *v);
void views_zoom_out(struct view *v);
void views_pan_left(struct view *v);
void views_pan_right(struct view *v);

float views_get_line_width(view_t *v);
float views_get_red(view_t *v);
float views_get_green(view_t *v);
float views_get_blue(view_t *v);

#ifdef __cplusplus
}
#endif

#endif
