#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int A[210];

    cin >> N;
    for (int i = 0; i < N; ++i) cin >> A[i];

    int res = 0;

    while(true){
        bool exsistOdd = false;
        for(int i = 0; i < N; i++){
            if(A[i] % 2 != 0) exsistOdd = true;
        }

        if(exsistOdd) break;
        for(int i = 0; i < N; i++){
            A[i] /= 2;
        }
        ++res;
    }

    cout << res << endl; 
}