#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<vector<int>> B(N);
    map<int,set<int>> I;
    
    int o, oi, oj;
    for(int i = 0; i < Q; i++){
        cin >> o >> oi;
        if(o == 1){
            cin >> oj;
            B[oj-1].push_back(oi);
            I[oi].insert(oj);
        } else if(o == 2) {
            sort(B[oi -1].begin(), B[oi -1].end());
            for(auto &i:B[oi -1]) cout << i << " ";
            cout << endl; 
        } else {
            for(auto &i:I[oi]) cout << i << " ";
            cout << endl; 
        }
    }

    return 0;
}
