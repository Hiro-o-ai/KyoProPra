#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int a_ind, z_ind, res;
    cin >> s;

    for(int i = 0; i < s.size(); ++i){
        // ""と''で意味が変わる  "A"では比較できなかった
        if(s[i] == 'A'){
            a_ind = i;
            break;
        }
    }

    for(int i = s.size() - 1; i > 0; --i){
        if(s[i] == 'Z'){
            z_ind = i;
            break;
        }
    }
    
    res = z_ind - a_ind + 1;

    cout << res << endl;
}