#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,  A;

    cin >> N >> A;
    int rest = N % 500;
    if(rest <= A) cout << "Yes" << endl;
    else cout << "No" << endl;
}