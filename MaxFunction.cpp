//
// Created by Bryar Cole on 9/14/15.
//
#include <iostream>
#include "MaxFunction.h"
using namespace std;


//create function to find the biggest value in the array
int maxFun(int size, int array[]) {
    int count,
            max;
    // search through the list, assign the value being tested to a vairbale, then test that variable against
    //the previously assigned variable to see which is bigger, assign the bigger one to the variable.
    max = array[0];
    for (count = 0; count < size; count++) {
        if (array[count] > max)
            max = array[count];

    }

    //Return the variable when the loop is finished.
    return max;
}


