#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, tmp, min, max;

    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        if(i == 0){
            min = tmp;
            max = tmp;
            continue;
        }
        if(tmp > max) max = tmp;
        if(tmp < min) min = tmp;
    }

    int res = max - min;

    cout << res << endl;
}