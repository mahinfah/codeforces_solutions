#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    // Calculate the count of odd numbers up to a
    long long oddCount = (a + 1) / 2;

    if (b <= oddCount) {
        // If b is within the range of odd numbers
        cout << (2 * b - 1);
    } else {
        // If b is within the range of even numbers
        cout << (2 * (b - oddCount));
    }

    return 0;
}
