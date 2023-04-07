#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    set<char> s;

    for(int i = 0; i < S.size(); i++){
        s.insert(S[i]); 
    }

    vector<char> a(26);
    int i = 0;
    for(char moji='a'; moji <= 'z'; ++moji){
        a[i] = moji;
        i++;
    }

    if(s.size() == 26) cout << "None" << endl;

    for(int i = 0; i < 26; i++){
        if(s.find(a[i]) == s.end()){
            cout << a[i] << endl;
            break;
        }
    }

    return 0;
}