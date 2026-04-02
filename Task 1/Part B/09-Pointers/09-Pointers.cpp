#include <iostream>
#include <cassert>
using namespace std;

/// <summary>
/// Using pointers to swap the values of input A with input B
/// </summary>
/// <param name="a"> Input A </param>
/// <param name="b"> Input B </param>
void swapValues(int* a, int* b) 
{
    //Print memory add for clarity
    cout << a << endl;
    cout << b << endl;

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

    cout << "Swapping Values" << endl;
    swapValues(&inputA, &inputB);
    
    // Assert tests and print result
    assert(inputA == 67);
    assert(inputB == 69);
    cout << "Input A: " << inputA << endl;
    cout << "Input B: " << inputB << endl;
}
