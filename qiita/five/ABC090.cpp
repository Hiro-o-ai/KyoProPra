#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    int res = 0;
    for (int i = A; i <= B; ++ i){
        int a, b, c, d;
        a = i / 10000 % 10;
        b = i / 1000 % 10;
        c = i / 10 % 10;
        d = i % 10;
        if(a == d && b == c) res += 1;
    }
    
    cout << res << endl;
}