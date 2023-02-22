#include <bits/stdc++.h>
using namespace std;

using std::sort;

int main() {
    string s,t;

    cin >> s >> t;
    
    // 最終出力
    string answer = "No";
    // ソート
    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<int>());
    array<string, 2> arr;
    arr = {s,t};
    sort(arr.begin(), arr.end());

    if(s != t && s == arr[0]) answer = "Yes";

    cout << answer << endl;
}