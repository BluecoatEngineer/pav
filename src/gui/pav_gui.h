/* File: gui.h
 *
 * Protocol Analyzer Viewer - GUI header
 *
 * Author: Jack Bradach <jack@bradach.net>
 *
 * Copyright (C) 2016 Jack Bradach <jack@bradach.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _PAV_GUI_H_
#define _PAV_GUI_H_

#ifdef __cplusplus
extern "C" {
#endif

// TODO - put these in a file to be included by pav main, like "pav_gui.h"
#include "pav.h"
typedef struct gui gui_t;

void pav_gui_start(struct pav_opts *opts);

#ifdef __cplusplus
}
#endif

#endif
