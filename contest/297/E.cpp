#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    set<long long> s;
    vector<long long> a(N);
    for(int i = 0; i < N; i++) {
        cin >> a[i];
        s.insert(a[i]);
    }
    int cnt = 1;
    while(cnt < K){
        for(int i = 0; i < N; i++) {
            s.insert(*s.begin() + a[i]);
        }
        s.erase(s.begin());
        cnt++;
    }
    
    cout << *s.begin() << endl;
    
    return 0;
}