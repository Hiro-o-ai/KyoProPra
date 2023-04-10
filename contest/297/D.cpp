#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;
    long long res = 0;
    if(A < B) swap(A, B);
    
    while(B > 0){
        res += A / B;
        A %= B;
        if(A < B) swap(A, B);
    }

    cout << res - 1 << endl;
    
    return 0;
}