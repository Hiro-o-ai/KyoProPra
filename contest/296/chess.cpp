#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> b(8);
    for(string &s: b)cin >> s;

    vector<char> c = {'a', 'b', 'c', 'd', 'e', 'f', 'g' ,'h'};

    int ro; // 行
    char co;  // 列
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 8; ++j){
            char m = b[i][j];
            if(m == '*'){
                ro = 8 -i;
                co = c[j];
                break;
            }
        }
    }
    
    cout << co << ro << endl;

    return 0;
}