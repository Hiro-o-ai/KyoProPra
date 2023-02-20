#include <bits/stdc++.h>
using namespace std;

int main() {
    string r, g, b;

    cin >> r >> g >> b;
    string sum = r + g + b;
    int num = stoi(sum);
    if(num % 4 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;    
}