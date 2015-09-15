//
// Created by Bryar Cole on 9/14/15.
//

#include "MinFunction.h"
#include <iostream>
using namespace std;

int minFun(int size, int array[]) {
    int count,
            min;

    min = array[0];
    for (count = 0; count < size; count++) {
        if (array[count] > min)
            min = array[count];

    }

    cout << min;

}