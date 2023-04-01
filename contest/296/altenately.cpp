#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    string res = "Yes";

    char fa = S[0];
    for(int i = 1; i < N; i++){
        if(fa == S[i]){
            res = "No";
            break;
        }
        fa = S[i];
    }

    cout << res << endl;

    return 0;
}