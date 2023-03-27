#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int res = 0;

    map<int, int>mp;
    for(int i = 0; i < N; ++i){
        int key;
        cin >> key;
        // ++mp[key];
        if(mp.count(key) == 0){
            mp[key] = 1;
        } else {
            mp[key] = mp[key] + 1;
        }
    }

    for (const auto& [k, v] : mp) {
        int tmp = v;
        // res += tmp / 2;
        int count = 0;
        if(tmp % 2 != 0) {
            tmp -=1;
        }
        while (tmp > 1){
            ++count;
            tmp -= 2;
        }
        res += count;
    }

    cout << res << endl;
}