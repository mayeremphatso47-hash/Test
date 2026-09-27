#include <iosstream>
using namespace std;
// This program calculates the sum of an array of numbers
// ------- Array of numbers -------
// Step 1: Declare an array of numbers
// Array is a collection of variables of the same type that are stored in contiguous memory locations. In this program, we will declare an array of integers to store the numbers we want to sum.
int main(){

    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;

    for(int i =0; i < 5; i++)
     {
        sum += numbers[i];
     }

     cout << "sum of numbers = " << sum << endl;

     return 0;
}

// Step 2: Initialize the array with values
