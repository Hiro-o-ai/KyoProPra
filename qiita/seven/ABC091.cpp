#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    map<string, int> m;
    string tmp;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        m[tmp]++;
    }
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> tmp;
        m[tmp]--;
    }
    set<int> s;
    for(auto &a: m){
        s.insert(a.second);
    }
    
    auto itr = s.end();
    itr--;
    if(*itr > 0)cout << *itr <<endl;
    else cout << 0 << endl;

    return 0;
}