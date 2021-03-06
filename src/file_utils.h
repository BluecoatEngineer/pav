/* File: file_utils.h
 *
 * Utility functions for file manipulation
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
#ifndef _FILE_UTILS_H_
#define _FILE_UTILS_H_

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include "queue.h"
#include "refcnt.h"


#ifdef __cplusplus
extern "C" {
#endif

int file_load_path(const char *path, void **buf, size_t *len);
int file_load(FILE *fp, void **buf, size_t *len);

#ifdef __cplusplus
}
#endif

#endif
