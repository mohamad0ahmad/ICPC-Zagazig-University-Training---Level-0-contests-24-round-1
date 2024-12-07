#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string c;
    int sum = 0, current = 0;


    getline(cin, c);

    current = abs('a' - c[0]);
    if (current > 13) {
        current = 26 - current;
    }
    sum += current;

    for (size_t i = 0; i < c.length() - 1; i++) {
        current = abs(c[i] - c[i + 1]);
        if (current > 13) {
            current = 26 - current;
        }
        sum += current;
    }


    cout << sum << endl;

    return 0;
}
