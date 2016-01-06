/*
 * Created By:  Robert Schmicker
 * Date:        12/22/15
 * File:        main.cpp
 * Purpose:     Handles creation of random int vector, printing, and user interface controller
 */

#include "controller.hpp"

int main(int argc, const char * argv[]){
    vector<int> to_sort = rand_assign();
    menu(to_sort);
    controller(to_sort);
}