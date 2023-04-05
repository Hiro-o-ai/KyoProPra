#include <bits/stdc++.h>
using namespace std;

int main () {
    int N , K;
    cin >> N >> K;
    int l[N];
    for(int &i:l) cin >> i;
    sort(l, l + N, greater<int>());

    int res =0;
    for(int i = 0; i < K; ++i){
        res += l[i];
    }

    cout << res << endl;
    return 0;
}