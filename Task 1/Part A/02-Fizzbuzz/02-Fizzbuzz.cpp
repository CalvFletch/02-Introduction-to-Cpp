#include <iostream>
#include <string>
#include <cassert>

using namespace std;

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

int main()
{
    assert(fizzbuzz(3) == "Fizz");     
    assert(fizzbuzz(5) == "Buzz");     
    assert(fizzbuzz(15) == "FizzBuzz");
    assert(fizzbuzz(7) == "7");
    cout << fizzbuzz(3) << endl;
    cout << fizzbuzz(5) << endl;
    cout << fizzbuzz(15) << endl;
    cout << fizzbuzz(7) << endl;
}