#include <bits/stdc++.h>
using namespace std;

using std::sort;

int main() {
    string s,t;

    cin >> s >> t;
    
    // ソート
    // 入力値を降順
    sort(s.begin(), s.end());
    // 入力値を昇順
    sort(t.begin(), t.end());
    reverse(t.begin(), t.end());

    if(s < t ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }     
}