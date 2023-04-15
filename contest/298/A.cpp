#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    string res = "Yes";
    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(S[i] == 'x') res = "No";
        if(S[i] == 'o') cnt++;
    }

    if(cnt == 0) res = "No";
    
    cout << res << endl;

    return 0;
}