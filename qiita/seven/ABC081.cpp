#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K, A, k, diff;
    cin >> N >> K;
    map<int, int> mp;
    
    for(int i = 0; i < N; ++i){
        cin >> A;
        mp[A]++;
    }

    k = mp.size();
    diff = k - K;
   
   int res = 0;
   if(diff <= 0) {
        cout << res << endl;
        return 0;
    }

    vector<int> v;
    for(auto &m: mp) v.push_back(m.second);
    sort(v.begin(), v.end());
    for(int i = 0; i < diff; i++){
        res += v[i];
    }

    cout << res << endl;

    return 0;
}