//
// Created by Bryar Cole on 9/15/15.
//

#include "Grade.h"
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void grade(int array[]) {
    int count = 0;

    for(int count;count < 15; count++)
        cout << "test";
        if(array[count] >= 90)
                cout << "A" << endl;
            else if(array[count] >= 80)
                cout << "B" << endl;
            else if(array[count] >= 70)
                cout << "C" << endl;
            else if(array[count] >= 60)
                cout << "D" << endl;
            else
                cout << "F" << endl;


}