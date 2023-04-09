#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;
    vector<int> t(N);
    for(int i = 0; i < N; ++i) cin >> t[i];

    int res = -1;
    for(int i = 1; i < N; ++i){
        if(D >= (t[i] - t[i-1])){
            res = t[i];
            break;
        }
    }

    cout << res << endl;

    return 0;
}