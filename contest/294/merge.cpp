#include <bits/stdc++.h>
using namespace std;

int main(){
    int N ,M;
    cin >> N >> M;

    vector<int> a(N);
    vector<int> b(M);
    vector<int> t;

    for(int i = 0; i < N; ++i){
        cin >> a[i];
        t.push_back(a[i]);
    }
    for(int j = 0; j < M; ++j){
        cin >> b[j];
        t.push_back(b[j]);
    }

    sort(t.begin(), t.end());

    for(int i = 0; i < a.size(); ++i){
        int x = a[i];
        for(int j = 0; j < t.size(); ++j){
            if(x == t[j]) cout << j + 1 << " ";
        }
    }
    cout << endl;
    for(int i = 0; i < b.size(); ++i){
        int x = b[i];
        for(int j = 0; j < t.size(); ++j){
            if(x == t[j]) cout << j + 1 << " ";
        }
    }
}