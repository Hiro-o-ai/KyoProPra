#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, a, b;
    cin >> N >> M;
    map<int, int> mp;
    for(int i = 0; i < M; ++i) {
        cin >> a >> b;
        mp[a]++;
        mp[b]++;
    }

    for(int i = 1; i <= N; i++){
        cout << mp[i] << endl;
    }

    return 0;
}