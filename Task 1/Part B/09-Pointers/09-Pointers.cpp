#include <iostream>
#include <cassert>
using namespace std;

/// <summary>
/// Swap pointers of input A with input B
/// </summary>
/// <param name="a"> Input A </param>
/// <param name="b"> Input B </param>
void swapPointer(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    //Create input and print
    int inputA = 69;
    int inputB = 67;
    cout << "Input A: " << inputA << endl;
    cout << "Input B: " << inputB << endl;

    cout << "Swapping Pointers" << endl;
    swapPointer(&inputA, &inputB);
    
    // Assert tests and print result
    assert(inputA == 67);
    assert(inputB == 69);
    cout << "Input A: " << inputA << endl;
    cout << "Input B: " << inputB << endl;
}
