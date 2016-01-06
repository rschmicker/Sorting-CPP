/*
 * Created By:  Robert Schmicker
 * Date:        12/22/15
 * File:        controller.hpp
 * Purpose:     Header and declarations for functions used in controller.cpp
 */

#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include <iostream>
#include <random>
#include "sort_functions.hpp"

#define SIZE 10//size of vector

using namespace std;

vector<int> rand_assign();//fills an vector of digits then randomizes the vector
void print_vector(vector<int> to_sort);//prints vector
void controller(vector<int> to_sort);//user input for selection of sorting method
void menu(vector<int> to_sort);//prints array random status and lists menu options 

#endif