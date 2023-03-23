#include <bits/stdc++.h>
using namespace std;

int main () {
    int N, D;

    cin >> N >> D;
    int res = 0;

    vector<vector<int>> x(N, vector<int>(D));

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < D; ++j){
            cin >> x[i][j];
        }
    }

    for(int i = 0; i < N; ++ i){
        for(int j = i + 1; j < N;  ++j){
            int sum = 0;
            for(int k = 0; k < D; ++k){
                int diff = abs(x[i][k] - x[j][k]);
                sum += diff * diff;
            }
            double sq = sqrt(sum);
            if(ceil(sq) == floor(sq)) res += 1; 
        }
    }

    cout << res << endl;
}
