#include <iostream>
#include <cassert>
using namespace std;

// Compares hits to fired shots and returns percentage
int calculateAccuracy(int hits, int fired)
{
    assert(hits <= fired && fired >= 0);
    if (fired == 0) // handle 0 fired gracefully
        return 0;
    return 100 * hits / fired;
}

// Run Calc Accuracy with 3 hits for 4 shots
int main()
{
    // Test calculate validity with given table data 
    // and then print the same data
    assert(calculateAccuracy(3, 4) == 75);
    cout << calculateAccuracy(3, 4) << "%" << endl;
    assert(calculateAccuracy(1, 2) == 50);
    cout << calculateAccuracy(1, 2) << "%" << endl;
    assert(calculateAccuracy(13, 13) == 100);
    cout << calculateAccuracy(13, 13) << "%" << endl;
    assert(calculateAccuracy(21, 173) == 12);
    cout << calculateAccuracy(21, 173) << "%" << endl;
    assert(calculateAccuracy(0, 0) == 0);
    cout << calculateAccuracy(0, 0) << "%" << endl;
}