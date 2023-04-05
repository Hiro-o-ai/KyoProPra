#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, x;
    cin >> N >> x;
    int c[N];
    for(int &i:c) cin >> i;
    sort(c, c + N);

    int i = 0, res = 0;
    while(i < N && x > 0){
        if(x >= c[i])res++;
        x -= c[i];
        i++;
    }

    if(x > 0)res--;
    // for(int i = 0; i < N; ++i){
    //     if(x == 0 || x < c[i] || i == N - 1 && x != c[i]) break;
    //     ++res;
    //     x -= c[i];
    // }

    cout << res << endl;;

    return 0;
}