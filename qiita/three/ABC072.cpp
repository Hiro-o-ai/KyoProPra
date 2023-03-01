#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin >> s;
    string res;

    for (int i = 0; i < s.length(); ++i) {
        if((i + 1) % 2 == 1 ) res += s[i];
    }

    cout << res << endl;
}