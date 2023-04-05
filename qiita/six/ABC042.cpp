#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, L;
    cin >> N >> L;
    string s[N];
    for(string &st:s) cin >> st;
    sort(s, s+N);

    string res = "";
    for(string &st:s) res += st;
    
    cout << res << endl;
    
    return 0;
}