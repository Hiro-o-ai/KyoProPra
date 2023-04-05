#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long a[3 * N];
    for(long long &i:a) cin >> i;
    sort(a, a + 3 * N, greater<int>());

    long long res = 0;
    for(int i = 1; i < 2 * N; i += 2){
        res += a[i];
    }

    cout << res << endl;

    return 0;
}