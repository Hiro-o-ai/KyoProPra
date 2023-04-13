#include <bits/stdc++.h>
using namespace std;

// 800ms
int main() {
    int N, Y;
    cin >> N >> Y;

    int s = -1, fs = -1, ts = -1;
    int sum = 0;
    for(int i = 0; i <= N; i++){ // 10000
        for(int j = 0; j <= N - i; j++){ // 5000
            for(int k = 0; k <= N - i - j; k++){ // 1000
                if((10000 * i + 5000 * j + 1000 * k) == Y && (i + j + k) == N){
                    s = k;
                    fs = j;
                    ts = i;
                    break;
                }
            }
        }
    }

    cout << ts << " " << fs << " " << s << endl;

    return 0;
}

// 回答例   8ms
// int main() {
//     int N, Y;
//     cin >> N >> Y;
//     int res10000 = -1, res5000 = -1, res1000 = -1;
//     for(int i = 0; i <= N; i++){
//         for(int j = 0; j + i <=N; j++){
//             int k = N - i -j;
//             int total = 10000 * i + 5000 * j + 1000 * k;
//             if(total == Y && i + j + k == N) {
//                 res10000 = i;
//                 res5000 = j;
//                 res1000 = k;
//                 break;
//             } 
//         }
//     }

//     cout << res10000 << " " << res5000 << " " << res1000 << endl;

//     return 0;
// }