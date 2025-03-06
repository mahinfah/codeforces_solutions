#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore newline from previous input
    string a;
    getline(cin, a); // Read the full line

    set<char> s;
    for (char c : a) {
        if (isalpha(c)) { // Only consider letters
            s.insert(tolower(c));
        }
    }

    if (s.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

  .//  cout << s.size() << endl; // Debugging output

    return 0;
}
//
