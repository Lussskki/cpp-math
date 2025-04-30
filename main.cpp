
#include <iostream>

using namespace std;

int main () {
    int number, min, max, sum = 0;

    cin >> min >> max;

    for (number = min; number <= max; number++) {
        sum += number;
    }
    cout << sum <<endl;
}