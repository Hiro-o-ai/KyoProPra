#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;
    long long res = 0;
    
    while(A - B != 0 ){
        if(A - B > 0){
            res += (A + B - 1) / B;
            A %= B;
        } else {
            res += (B + A - 1) / A;
            B %= A;
        }
        cout << "tes  ";
    }

    cout << res << endl;
    
    return 0;
}