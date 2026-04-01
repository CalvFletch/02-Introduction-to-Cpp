#include <iostream>
using namespace std;

int main()
{
    // Create array
    int myArray[10] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };

    for (int i = 0; i < sizeof(myArray) / sizeof(myArray[0]); i++)
    {
        //ifelse method
        //std::cout << myArray[i];
        //if (i < (sizeof(myArray) / sizeof(myArray[0])) - 1)
        //    std::cout << ", ";
        //else
        //    std::cout << std::endl;

        //int = sizeof(myArray) / sizeof(myArray[0]);

        //ternary operator method
        cout << myArray[i] << (i < sizeof(myArray) / sizeof(myArray[0]) - 1 ? ", " : "\n");
    }

    system("pause");
    return 0;
}