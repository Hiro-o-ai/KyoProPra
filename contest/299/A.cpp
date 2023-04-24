#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, s, e, t;
    string S;
    cin >> N >> S;

    s = S.find("|");
    e = S.rfind("|");
    t = S.find("*"); 

    if(s < t && t < e) cout << "in " << endl;
    else cout << "out" << endl;

    return 0;
}