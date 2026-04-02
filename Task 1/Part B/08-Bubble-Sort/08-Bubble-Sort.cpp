#include <iostream>
#include <cassert>
using namespace std;


void bubbleSort(int arr[], int size)
{
    bool swapped = true;
    while (swapped = true) {
        for (int i = 0; i < size - 1; i++) {
            bool swapped = false;
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i] = temp;
                swapped = true;
            };
        };
    };
}

int main()
{
    int myArray[] = { 67,13,3,89,43,2,19,71,5,61,97,7,37,31,17,11,83,53,23,29 };
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    bubbleSort(myArray, arraySize);

}