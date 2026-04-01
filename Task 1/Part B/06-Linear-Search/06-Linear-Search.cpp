#include <iostream>
#include <cassert>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
        if (target == arr[i])
            return i;
    return -1;
}

int main()
{
    int myArray[] = { 67,13,3,89,43,2,19,71,5,61,97,7,37,31,17,11,83,53,23,29 };
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    cout << linearSearch(myArray, arraySize, 3) << endl;
    cout << linearSearch(myArray, arraySize, 7) << endl;
    cout << linearSearch(myArray, arraySize, 67) << endl;
    cout << linearSearch(myArray, arraySize, 88) << endl; //value not in the array
}