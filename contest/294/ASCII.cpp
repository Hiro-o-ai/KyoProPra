#include <bits/stdc++.h>
using namespace std;
//  計算量 O(N2)
int main(){
    int H, W;

    cin >> H >> W;
    vector<char> a {'.', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    for(int i = 0; i < H; ++i){
        for(int j = 0; j < W; ++j){
            int x;
            cin >> x;
            cout << a[x];
        }
        cout << endl;
    }
}