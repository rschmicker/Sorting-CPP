/*
 * Created By:  Robert Schmicker
 * Date:        12/22/15
 * File:        sort_functions.hpp
 * Purpose:     Header and declarations for functions used in sort_functions.cpp
 */

#ifndef SORT_FUNCTIONS_HPP
#define SORT_FUNCTIONS_HPP

#include <iostream>
#include "main.hpp"

void insertion_sort();
void selection_sort();
void bubblesort();
void swap(int *xp, int *yp);//helper function for bubblesort()

#endif