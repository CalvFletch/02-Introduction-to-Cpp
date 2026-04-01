#include <iostream>
#include <cassert>
using namespace std;

// Find the minimum value element in and array
int minimumElement(int arr[], int size)
{
    int minimum = arr[0];
    for (int i = 0; i < size; i++)
        if (minimum > arr[i])
            minimum = arr[i];
    return minimum;
}

// Create an array and run the find minimum function with that array
int main()
{    
    // Create array
    int myArray[] = { 67,13,3,89,43,2,19,71,5,61,97,7,37,31,17,11,83,53,23,29 };
    int arraySize;
    // Define array size for input
    arraySize = sizeof(myArray) / sizeof(myArray[0]);
    // Assert the correct output for the function
    assert(minimumElement(myArray, arraySize) == 2);
    // Print the minimum amount
    cout << minimumElement(myArray, arraySize);
}