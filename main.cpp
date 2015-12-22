/*
 * Created By:  Robert Schmicker
 * Date:        12/22/15
 * File:        main.cpp
 * Purpose:     Handles creation of random int vector, printing, and user interface controller
 */
#include "sort_functions.hpp"
#include "main.hpp"

vector<int> to_sort(SIZE);

int main(int argc, const char * argv[]) {
    rand_assign();
    controller();
}

void rand_assign(){
    iota(to_sort.begin(), to_sort.end(), 0);
    random_shuffle (to_sort.begin(), to_sort.end());
}

void print_array(){
    for(int i = 0; i < SIZE; i++){
        cout << to_sort[i] << " ";
    }
    cout << "\n";
}

void controller(){
    cout << "Random Array Status: "; print_array();
    cout << "\n********************************\n" <<
            "*Please select a sorting method*\n" <<
            "********************************\n";
    int input;
    cout << "\nExit: \t\t\t\t\t0\n" <<
            "Insertion Sort: \t\t1\n" <<
            "Selection Sort: \t\t2\n" <<
            "Bubble Sort: \t\t\t3\n";
    cout << "Input: ";
    cin >> input;
    switch (input) {
        case 0:
            break;
        case 1:
            insertion_sort();
            break;
        case 2:
            selection_sort();
            break;
        case 3:
            bubblesort();
            break;
        default:
            break;
    }
}