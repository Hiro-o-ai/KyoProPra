#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;

    cin >> N;
    for(int i = 0; i < N; ++i){
        int x;
        cin >> x;
        if(x % 2 == 0) cout << x << " ";
    }
}