#include <iostream>
#include <cassert>
using namespace std;

/// <summary>
/// Sort selected array with bubble sort method
/// </summary>
/// <param name="arr"> Input array to be sorted </param>
/// <param name="size"> Input arrays length </param>
void bubbleSort(int arr[], int size)
{
    bool swapped = true;
    while (swapped == true) {
        swapped = false; // exit early when this doesn't get set in the loop
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
        //ternary operator method from part A
        cout << arr[i] << (i < size - 1 ? ", " : "\n");
    };
}

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int middle = (left + right) / 2;
        if (arr[middle] == target)
            return middle;
        if (arr[middle] < target)
            left = middle + 1;
        else
            right = middle - 1;
    }
    return -1;
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
     
    // Check everything is sorted
    for (int i = 0; i < arraySize - 1; i++) {
        assert(myArray[i] < myArray[i + 1]);
    }

    assert(binarySearch(myArray, arraySize, 11) == 4);
    assert(binarySearch(myArray, arraySize, 23) == 8);
    assert(binarySearch(myArray, arraySize, 97) == 19);
    assert(binarySearch(myArray, arraySize, 88) == -1);

}