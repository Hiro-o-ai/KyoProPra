#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;

    cin >> N;
    int cakeMax = N / 4;
    int donutsMax = N / 7;
    string res = "No";

    for(int c = 0; c <= cakeMax; ++c){
        for(int d = 0; d <= donutsMax; ++d){
            int total = c * 4 + d * 7;
            if(total == N) res = "Yes";
        }
    }

    cout << res << endl;
}