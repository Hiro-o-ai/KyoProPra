#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cin >> r >>c;
    
    vector<string> b(r);
    for(int i = 0; i < r; ++i) cin >> b[i];
    // for (string &s: b) cin >> s; 上と同じ

    vector br(r + 10, vector<bool>(c + 10));
    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            if(!isdigit(b[i][j])) continue;
            int power = b[i][j] - '0';

            for(int ni = 0; ni <= power; ++ni){
                for(int nj = 0; nj <= power; ++nj){
                    if(ni + nj <= power){
                        if(i - ni >= 0){
                            br[i - ni][j + nj] = true;
                            if(j - nj >= 0) br[i - ni][j - nj] = true;
                        }
                        if(j - nj >= 0){
                            br[i + ni][j - nj] = true;
                        } 
                        br[i + ni][j + nj] = true;                        
                    }
                }
            }
        }
    }

    for(int i = 0; i < r; ++i){
        for(int j = 0; j < c; ++j){
            if(br[i][j]) b[i][j] = '.';
        }
    }

    for (int i = 0; i < r; ++i) cout << b[i] << '\n';

    return 0;
}