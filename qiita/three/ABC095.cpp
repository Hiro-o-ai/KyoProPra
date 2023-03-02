#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X, m[110];

    cin >> N >> X;
    int sum = 0;
    int min = 1000;
    for(int i = 0; i < N; ++i) {
        cin >> m[i];
        sum += m[i];
        if(min > m[i]) min = m[i];
        }
    int rest = X - sum;
    cout << N + (rest / min) << endl;
}