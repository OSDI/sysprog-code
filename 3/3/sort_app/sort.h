/*
 * File:    sort.h
 * Author:  Li XianJing <xianjimli@hotmail.com>
 * Brief:   prototype of sort functions.
 *
 * Copyright (c) Li XianJing
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 * History:
 * ================================================================
 * 2009-02-07 Li XianJing <xianjimli@hotmail.com> created.
 *
 */

#ifndef SORT_H
#define SORT_H

#include "typedef.h"

DECLS_BEGIN

Ret bubble_sort(void** array, size_t nr, DataCompareFunc cmp);
Ret quick_sort(void** array, size_t nr, DataCompareFunc cmp);
Ret merge_sort(void** array, size_t nr, DataCompareFunc cmp);

DECLS_END

#endif/*SORT_H*/

