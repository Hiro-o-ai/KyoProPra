#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    vector<int> seq(N);
    for(int &i: seq) cin >>i;
    if(X > 0){
        sort(seq.begin(), seq.end(), greater<int>());
    } else {
        sort(seq.begin(), seq.end());
    }

    string res = "No";
    map<int, int>mp;
    int sum = 0;
    for(int i = 0; i < N; i++){
        int diff = seq[i] - seq[i+1];
        sum += diff;
        mp[sum] = diff;
    }

    if(mp[X] != 0 || X == 0) res = "Yes";
    for(auto &i:mp){
        if(i.second == X) res = "Yes";
    }
    cout << res << endl;

    return 0;
}