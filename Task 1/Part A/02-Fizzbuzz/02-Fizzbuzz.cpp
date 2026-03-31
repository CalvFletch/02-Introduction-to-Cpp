#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// Checks if input int is divisable by 3 and or 5 or 
// else returns the number as a string.
string fizzbuzz(int input)
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
    assert(fizzbuzz(3) == "Fizz");     
    assert(fizzbuzz(5) == "Buzz");     
    assert(fizzbuzz(15) == "FizzBuzz");
    assert(fizzbuzz(7) == "7");

    // Test numbers 1-20
    for (int i = 1; i <= 20; i++)
        cout << fizzbuzz(i) << endl;
}