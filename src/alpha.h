/*
 * get_alpha : Compute Krippendorff's Alpha
 * Copyright (C) 2017  Alexander Staudt
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, a copy is available at
 * https://www.r-project.org/Licenses/GPL-2
 */

#ifndef ALPHA_H
#define ALPHA_H

#include <vector>
#include <string>

class resultsAlpha {
    public:
        double alpha;
        std::vector<double> coincidence_matrix;
        std::vector<double> delta_matrix;
        double D_e;
        double D_o;
        std::vector<double> coding_values;
        std::vector<double> contributions;
        int n_coders;
        int n_units;
        int metric;
};

extern int get_alpha(
    const std::vector<double> &reliability_data,
    const int n_coders,
    const int n_units,
    const std::string &metric,
    resultsAlpha &results);

extern double get_deltasquared(
    const double c,
    const double k,
    const std::vector<double> &coding_values,
    const std::vector<double> &contributions,
    const int metric);

#endif

/* M_PI not always defined */
#ifndef M_PI
#define M_PI (3.14159265358979323846264338327950288)
#endif