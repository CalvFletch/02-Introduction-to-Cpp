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
    cout << fizzbuzz(15) << endl;
    cout << fizzbuzz(7) << endl;
    cout << fizzbuzz(99) << endl;
    cout << fizzbuzz(25) << endl;
}