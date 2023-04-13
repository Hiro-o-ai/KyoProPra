#include <bits/stdc++.h>
using namespace std;

int main () {
    // vector<int> a(3), b(3);
    vector<vector<int>> c(3, vector<int>(3));
    string res = "Yes";

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> c[i][j];
        }
    }

    vector<int> a = { 0, c[1][0] - c[0][0], c[2][0] - c[0][0] };
    vector<int> b = { c[0][0], c[0][1], c[0][2]};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(c[i][j] != a[i] + b[j] ) {
                res = "No";
                break;
            }
        }
    }

    cout << res << endl;

    return 0;
}