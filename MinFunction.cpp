//
// Created by Bryar Cole on 9/14/15.
//

#include <iostream>
#include "minFunction.h"
using namespace std;



int minFun(int size, int array[]) {
    int count,
            min;
    //Search through the list, assign the value being tested to a variable, then test that variable against
    //the previously assigned variable to see which is smaller, assign the smaller one to the variable.
    min = array[0];
    for (count = 0; count < size; count++) {
        if (array[count] < min)
            min = array[count];

    }

    //Return the variable
    return min;
}