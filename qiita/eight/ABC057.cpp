#include <bits/stdc++.h>
using namespace std;

//long longを使用しないと桁が大きいのが入らないので floating point exception エラーが発生する 
// 各桁数を計算する関数
int findDigits(long long n) {
  int digit = 0;
  while (n > 0) { // n が 0 になるまで
    digit++;
    n /= 10;
  }
  return digit;
}

int main() {
    long long N;
    cin >> N;

    int res = findDigits(N); //10^10がNの上限のため、取りうる最大値は10だからそれよりも多い値を設定
    for(long long a = 1; a * a <= N; a++){
        if( N % a == 0) {
            long long b = N / a;
            int maxDigit = max(findDigits(a), findDigits(b));
            res = min(res, maxDigit);
        }
    }
    cout << res << endl;
}