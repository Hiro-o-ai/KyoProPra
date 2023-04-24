#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    vector<int> C(N), R(N);
    map<int,vector<int>> cm;

    for(int i = 0; i < N; i++) {
        cin >> C[i];
        cm[C[i]].push_back(i);
    }

    for(int i = 0; i < N; i++) cin >> R[i];

    int res, max = 0;
    if(cm[T].size() > 0){
        for(int i = 0; i < cm[T].size(); i++){
            if(R[cm[T][i]] > max) {
                max = R[cm[T][i]];
                res = cm[T][i];
            }
        }
    } else {
        for(int i = 0; i < cm[C[0]].size(); i++){
            if(R[cm[C[0]][i]] > max) {
                max = R[cm[C[0]][i]];
                res = cm[C[0]][i];
            }
        }
    }

    cout << res + 1 << endl;

    return 0;
}