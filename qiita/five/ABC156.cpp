#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >>K;

    // string num;
    // int res;
    int res = 0;
    while( N > 0){
        // int rem = N % K;
        N /= K;
        res++;
        // num += to_string(rem);
    }

    // int res = num.length();

    cout << res << endl;

    return 0;
}