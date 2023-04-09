#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> s(H);
    for(int i = 0; i < H; i++) cin >> s[i];
    
    for(int i = 0; i < H; i++){
        bool b = false;
        for(int j = 0; j < W - 1; j++){
            if(b){
                b =false;
                continue;
            }

            if(s[i][j] == '.') continue;
            
            if(s[i][j] == 'T' && s[i][j + 1] == 'T'){
                s[i][j] = 'P';
                s[i][j + 1] = 'C';
                b = true;
            }
        }
    }

    for(int i = 0; i < H; i++) cout << s[i] << endl;

    return 0;
}