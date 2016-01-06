/*
 * Created By:  Robert Schmicker
 * Date:        12/22/15
 * File:        sort_functions.cpp
 * Purpose:     Implementation of all sorting functions and helper functions
 */

#include "sort_functions.hpp"

vector<int> insertion_sort(vector<int> to_sort){
    int temp = 0, j = 0;
    for(int i = 0; i < SIZE; i++){
        j = i;
        while(j>0 && to_sort[j-1]<to_sort[j]){
            temp = to_sort[j];
            to_sort[j] = to_sort[j-1];
            to_sort[j-1] = temp;
            j--;
        }
    }
    return to_sort;
}

vector<int> selection_sort(vector<int> to_sort){
    int min, temp;
    for(int i = 0; i < SIZE-1; i++){
        min = i;
        for(int j = i+1; j < SIZE; j++){
            if(to_sort[j] < to_sort[min]){
                min = j;
            }
        }
        if(min != i){
            temp = to_sort[i];
            to_sort[i] = to_sort[min];
            to_sort[min] = temp;
        }
    }
    return to_sort;
}

vector<int> bubblesort(vector<int> to_sort){
    for(int i = 0; i < SIZE - 1; i++){
        for(int j = 0; j < SIZE-i-1; j++){
            if( to_sort[j] > to_sort[j+1]){
                swap(to_sort[j], to_sort[j+1]);
            }
        }
    }
    return to_sort;
}