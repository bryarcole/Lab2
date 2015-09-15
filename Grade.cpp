//
// Created by Bryar Cole on 9/15/15.
//

//Get the letter grades for each student
#include <iostream>
using namespace std;

//Function is 'void' becuase it only returns strings and no digits.
void grade(int grades[], int num) {


    //begin for loop
    for (int count = 0; count < num; count++)
        if (grades[count] >= 90)
            cout << "This student recieved an A with a score of " << grades[count] << endl;
        else if (grades[count] >= 80)
            cout << "This student recieved an B with a score of " << grades[count] << endl;
        else if (grades[count] >= 70)
            cout << "This student recieved an C with a score of " << grades[count] << endl;
        else if (grades[count] >= 60)
            cout << "This student recieved an D with a score of " << grades[count] << endl;
        else
            cout << "This student recieved an F with a score of " << grades[count] << endl;

}

