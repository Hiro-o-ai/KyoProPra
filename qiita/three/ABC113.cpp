#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, T, A, H, res;
    double diff, tmp;

    cin >> N >> T >> A;
    for (int i = 0; i < N; ++i) {
        cin >> H;
        tmp = abs((T - H * 0.006) - A);
        if(i == 0){
            diff = tmp;
            res = i + 1;
            continue;
        }
        if(diff > tmp){
            diff = tmp;
            res = i + 1;
        }
    }

    cout << res << endl;
}