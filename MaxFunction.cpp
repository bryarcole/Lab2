//
// Created by Bryar Cole on 9/14/15.
//
#include <iostream>
#include "MaxFunction.h"
using namespace std;

int maxFun(int size, int array[]) {
    int count,
            max;

    max = array[0];
    for (count = 0; count < size; count++) {
        if (array[count] > max)
            max = array[count];

    }

    cout << max;

}


