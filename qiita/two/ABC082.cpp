#include <bits/stdc++.h>
using namespace std;

using std::sort;

int main() {
    string s,t;

    cin >> s >> t;
    
    // 最終出力
    string answer = "No";
    // ソート
    // 入力値を降順
    sort(s.begin(), s.end());
    // 入力値を昇順
    sort(t.begin(), t.end(), greater<int>());

    if(s < t ) answer = "Yes";

    cout << answer << endl;
}