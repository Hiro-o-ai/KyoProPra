#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    int bx, by, rx, ry, k, bcount = 0, rcount = 0;
    cin >> S;
    string res = "No";
    for(int i = 0; i < S.size(); i++){
        if(S[i] == 'B'){
            if(bcount == 0){
                bx = i;
                ++bcount;
            } else {
                by = i;
            }
        }
        if(S[i] == 'R'){
            if(rcount == 0){
                rx = i;
                ++rcount;
            } else {
                ry = i;
            }
        }
        if(S[i] == 'K') {
            k = i;
        }
    }
    
    if((bx + by) % 2 != 0 && rx < k && k < ry) res = "Yes";

    cout << res << endl;

    return 0;
}