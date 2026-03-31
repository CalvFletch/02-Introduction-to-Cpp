#include <iostream>
#include <string>

std::string fizzbuzz(int input)
{
    if (input % 3 == 0 && input % 5 == 0)
        return "FizzBuzz";
    if (input % 3 == 0)
        return "Fizz";
    if (input % 5 == 0)
        return "Buzz";
    return std::to_string(input);
}

int main()
{
    std::cout << fizzbuzz(15) << "\n";
    std::cout << fizzbuzz(7) << "\n";
    std::cout << fizzbuzz(25) << "\n";
    std::cout << fizzbuzz(99) << "\n";
}