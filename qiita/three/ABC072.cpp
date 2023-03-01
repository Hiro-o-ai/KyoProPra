#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    cin >> s;
    string res;

    for (int i = 0; i < s.length(); ++i) {
        if((i + 1) % 2 == 1 ) res += s[i];
    }

    cout << res << endl;
}

// int main(){
//   string S; cin >> S;
//   for(int i=0;i<S.size(); i=i+2) cout << S[i];
//   return 0;
// }