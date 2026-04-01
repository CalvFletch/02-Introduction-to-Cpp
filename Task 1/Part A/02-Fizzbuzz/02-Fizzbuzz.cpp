#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// Checks if input int is divisable by 3 and or 5 or 
// else returns the number as a string.
string fizzBuzz(int input)
{
    if (input % 3 == 0 && input % 5 == 0)
        return "FizzBuzz";
    if (input % 3 == 0)
        return "Fizz";
    if (input % 5 == 0)
        return "Buzz";
    return to_string(input);
}

// Runs tests on FizzBuzz function
int main()
{
    // Use assertions to check the validity of the fizzbuzz function
    assert(fizzBuzz(3) == "Fizz");     
    assert(fizzBuzz(5) == "Buzz");     
    assert(fizzBuzz(15) == "FizzBuzz");
    assert(fizzBuzz(7) == "7");

    // Test numbers 1-20
    for (int i = 1; i <= 20; i++)
        cout << fizzBuzz(i) << endl;
}