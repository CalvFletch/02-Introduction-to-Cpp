#include <iostream>
#include <cassert>
using namespace std;

/// <summary>
/// Linearly search through array until the target input is found then
/// returns it's index.
/// </summary>
/// <param name="arr"> Input array to be searched </param>
/// <param name="size"> length of the input array </param>
/// <param name="target"> Int target that is being searched for </param>
/// <returns> The index of the target being searched; else -1 </returns>
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

    // Assert test
    assert(linearSearch(myArray, arraySize, 3) == 2);
    assert(linearSearch(myArray, arraySize, 7) == 11);
    assert(linearSearch(myArray, arraySize, 67) == 0);
    assert(linearSearch(myArray, arraySize, 88) == -1); //value not in the array

    cout << linearSearch(myArray, arraySize, 3) << endl;

}