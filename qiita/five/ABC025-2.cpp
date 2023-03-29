#include <bits/stdc++.h>
using namespace std;

// この問題はある整数Nを作ることができる正の整数A,Bの桁の和で最小のものを見つけるというものである。
// そして10のべき乗は桁の和の最小値が10（ex:100は50と50）となるが、それ以外のものはNの桁の和が最小(足算で桁上がりが発生するたびにNの桁の和はA、Bの桁の和より9小さくなる。
// そのためA、Bの桁の和はNの桁の和以上となるので、A、Bの桁の和の最小値はNの桁の和となる)となる
int main() {
    int N;
    cin >> N;

    int sum = 0;
    while(N > 0){
        sum += N % 10;
        N /= 10;
    }

    int res;
    if(sum == 1) {
        res = 10;
    } else {
        res = sum;
    }

    cout << res << endl;

    return 0;
}