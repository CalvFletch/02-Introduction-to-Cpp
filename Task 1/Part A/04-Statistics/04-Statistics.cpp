#include <iostream>
#include <cassert>
using namespace std;

int calculateAccuracy(int hits, int fired)
{
    return 100 * hits / fired;
}
int main()
{
    assert(calculateAccuracy(3, 4) == 75);
    cout << calculateAccuracy(3, 4) << "%" << endl;
}