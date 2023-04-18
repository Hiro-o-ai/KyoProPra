#include <bits/stdc++.h>
using namespace std;

string join(vector<string> S) {
    ostringstream os;
    copy(S.begin(), S.end(), ostream_iterator<string>(os));
    string s = os.str();
    
    return s;
}

int main() {
    vector<string> S;
    S.push_back("1");

    int Q, tcin, tmpI;
    string tmpS;
    long long tmpL;
    cin >> Q;

    for(int i = 0; i < Q; i++){
        cin >> tcin;
        if(tcin == 1){
            cin >> tmpI;
            tmpS = to_string(tmpI);
            S.push_back(tmpS);
        } else if(tcin == 2){
            S.erase(S.begin());
        } else {
            tmpS = join(S);
            tmpL = stoll(tmpS);
            cout << tmpL % 998244353 << endl;
        }
    }

    return 0;
}