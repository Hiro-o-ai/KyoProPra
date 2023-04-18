#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> a) {
    int n = a.size();
    vector<vector<int>> res(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            // もともとは n + 1 - j だが、vectorは 0 〜 N - 1 なので、a.size() ==  N となるため n + 1 == Nとなる。
            // また、0 〜 N - 1 なので、 N - 1 をしないと初期に設定したvectorのインデックス数を超えるため n - 1 としなければいけない。
            res[n - 1 - j][i] = a[i][j];
        }
    }

    return res;
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));
    for(int i = 0; i < N; i++)for(int j = 0; j < N; j++) cin >> A[i][j];
    vector<vector<int>> B(N, vector<int>(N));
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) cin >> B[i][j];    

    int cnt = 4;
    while(cnt > 0){
        bool b = true;
        for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) if (A[i][j] == 1 && B[i][j] == 0) b = false;
        if(b){
            cout << "Yes" << endl;
            return 0;
        }

        A = rotate(A);

        --cnt;
    }

    cout << "No" << endl;
}