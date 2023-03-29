#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int res = 100000;
    for(int i = 1; i < N; ++i){
        int A = i;
        int B = N - i;
        // int sum; とすると計算がうまくいかなくなるので注意 おそらく代入ではなく加算などをする場合は数字を先に決める必要があると思われる。
        int sum = 0;

        while(A > 0){
            int num = A % 10;
            A /= 10;
            sum += num;
        }

        while(B > 0){
            int num = B % 10;
            B /= 10;
            sum += num;
        }
        if(res > sum) res = sum;
    }

    cout << res << endl;
    return 0;
}