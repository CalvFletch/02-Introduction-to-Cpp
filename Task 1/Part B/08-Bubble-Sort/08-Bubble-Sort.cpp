#include <iostream>
#include <cassert>
using namespace std;


void bubbleSort(int arr[], int size)
{
    bool swapped = true;
    while (swapped == true) {
        swapped = false;
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            };
        };
    };
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        //ternary operator method
        cout << arr[i] << (i < size - 1 ? ", " : "\n");
    };
}

int main()
{
    // Create array
    int myArray[] = { 67,13,3,89,43,2,19,71,5,61,97,7,37,31,17,11,83,53,23,29 };
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Print before -> sort -> print after
    cout << "Array before: ";
    printArray(myArray, arraySize);
    cout << "Running sort\n";
    bubbleSort(myArray, arraySize);
    cout << "Array after: ";
    printArray(myArray, arraySize);
}