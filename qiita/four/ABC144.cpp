#include <bits/stdc++.h>
using namespace std;

int main () {
    int N;

    cin >> N;
    string res = "No";

    for(int i = 1; i <10; ++i){
        for(int j = 1; j < 10; ++j){
            int total = i * j;
            if(total == N) res = "Yes";
        }
    }

    cout << res << endl;
}