#include <bits/stdc++.h>
using namespace std;

int main() {
    int W, H, N, x, y, a;
    cin >> W >> H >> N;
    vector<int> xa = {0, W}, ya = {0, H};
    for(int i = 0; i < N; i++){
        cin >> x >> y >> a;
        if(a == 1){
            xa[0] = max(xa[0], x);
        } else if(a == 2){
            xa[1] = min(xa[1], x);
        } else if(a == 3){
            ya[0] = max(ya[0], y);
        } else {
            ya[1] = min(ya[1], y);
        }
    }

    if(xa[1] - xa[0] > 0 && ya[1] - ya[0] > 0){
        cout << (xa[1] - xa[0]) * (ya[1] - ya[0]) << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}