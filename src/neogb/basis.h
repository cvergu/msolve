/* This file is part of msolve.
 *
 * msolve is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * msolve is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with msolve.  If not, see <https://www.gnu.org/licenses/>
 *
 * Authors:
 * Jérémy Berthomieu
 * Christian Eder
 * Mohab Safey El Din */

#ifndef GB_BASIS_H
#define GB_BASIS_H

#include "data.h"

void free_basis(
        bs_t **bsp
        );

void remove_content_of_initial_basis(
        bs_t *bs
        );

bs_t *initialize_basis(
        const stat_t *st
        );

void check_enlarge_basis(
        bs_t *bs,
        const len_t added,
        const stat_t *st
        );
#endif
