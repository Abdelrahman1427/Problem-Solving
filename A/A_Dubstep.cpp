// Abdelrahman Mohamed Abdalla
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    bool firstSpace = true;  // Flag variable to track the first space

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B') {
            i += 2;
            if (!firstSpace) {
                cout << ' ';
            }
        } else {
            cout << str[i];
            firstSpace = false;
        }
    }

    return 0;
}
