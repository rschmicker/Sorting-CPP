/*
 * Created By:  Robert Schmicker
 * Date:        12/22/15
 * File:        sort_functions.hpp
 * Purpose:     Header and declarations for functions used in sort_functions.cpp
 */

#ifndef SORT_FUNCTIONS_HPP
#define SORT_FUNCTIONS_HPP

#include <iostream>
#include <algorithm>
#include "controller.hpp"


std::vector<int> insertion_sort(std::vector<int> to_sort);
std::vector<int> selection_sort(std::vector<int> to_sort);
std::vector<int> bubblesort(std::vector<int> to_sort);

#endif