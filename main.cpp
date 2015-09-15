//Created by Bryar Cole
//Date: Monday, September 14th 2015
//Purpose: Parse through the list of grades given, assign a letter grade to each score,
// and give the highest and lowest grade from out of the list

#include <iostream>
using namespace std;


int minFun(int size, int array[]);
int maxFun(int size, int array[]);
void grade(int grades[], int num);
int grades[15] = { 55, 87, 93, 77, 92, 88, 67, 81, 84, 73, 81, 92, 89, 100, 62 };
const int size = sizeof(grades)/sizeof(grades[0]);


int main() {


    cout << "The highest score in the class was " << maxFun(size, grades) << endl;
    cout << "The highest score in the class was " << minFun(size, grades) << endl;
    grade(grades, size);


    return 0;
}




