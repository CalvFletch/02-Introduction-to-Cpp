#include <iostream>
using namespace std;

int minimumElement(int arr[], int size)
{
    int minimum = arr[0];
    for (int i = 0; i < size; i++)
        if (minimum > arr[i])
            minimum = arr[i];
    return minimum;
}

int main()
{    
    // Create array
    int myArray[5] = { 34, 2, 342, 30, 60 };
    int arraySize;
    arraySize = sizeof(myArray) / sizeof(myArray[0]);
    cout << minimumElement(myArray, arraySize);
}