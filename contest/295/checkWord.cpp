#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    string res = "No";
    for(int i = 0; i < N; ++i){
        string word;
        cin >> word;
        if(word == "and" || word == "not" || word == "that" || word == "the" || word =="you") res = "Yes";
    }

    cout << res << endl;

    return 0;
}