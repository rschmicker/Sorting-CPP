/*
 * Created By:  Robert Schmicker
 * Date:        12/22/15
 * File:        controller.cpp
 * Purpose:     functions for initializing and controlling the application
 */

#include "controller.hpp"

vector<int> rand_assign(){
    vector<int> to_sort(SIZE);
    iota(to_sort.begin(), to_sort.end(), 0);
    random_shuffle (to_sort.begin(), to_sort.end());
    return to_sort;
}

void print_vector(vector<int> to_sort){
    for(int i = 0; i < SIZE; i++){
        cout << to_sort[i] << " ";
    }
    cout << "\n";
}

void menu(vector<int> to_sort){
    cout << "Random Array Status: "; print_vector(to_sort);
    cout << "\n********************************\n" <<
    "*Please select a sorting method*\n" <<
    "********************************\n";
    cout << "\nExit: \t\t\t\t\t0\n" <<
    "Insertion Sort: \t\t1\n" <<
    "Selection Sort: \t\t2\n" <<
    "Bubble Sort: \t\t\t3\n";
    cout << "Input: ";
}

void controller(vector<int> to_sort){
    int input;
    cin >> input;
    switch (input) {
        case 0:
            break;
        case 1:
            print_vector(insertion_sort(to_sort));
            break;
        case 2:
            print_vector(selection_sort(to_sort));
            break;
        case 3:
            print_vector(bubblesort(to_sort));
            break;
        default:
            break;
    }
}