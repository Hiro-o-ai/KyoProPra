#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, X, Y;
    
    cin >> A >> B >> C >> X >> Y;

    int res;
    int avg = (A + B) / 2; //AとBのピザの平均値

    if( A + B <= 2 * C ){ //ABピザとの値段の比較
        res = A * X + B * Y;
    } else {
        if(X > Y){
            res = min(2 * C * Y + A * ( X - Y ), 2 * C * X);
        } else {
            res = min (2 * C * X + B * ( Y - X ), 2 * C * Y);
        }
    }

    cout << res << endl;
}

//  if(A * diff < 2 * C * diff)の部分で 2 * Cにしていなかったためダメだった。注意が必要
// int main() {
//     int A, B, C, X, Y;
    
//     cin >> A >> B >> C >> X >> Y;

//     int res; // min price
//     int avg = (A + B) / 2; //AとBのピザの平均値
//     int diff = abs(X - Y); //AとBの必要枚数の差分

//     if( avg < C ){ //ABピザとの値段の比較
//         res = A * X + B * Y;
//     } else if (X > Y) {
//         if(A * diff < 2 * C * diff){
//             res = C * Y * 2 + A * diff;
//         } else {
//             res = C * X * 2;
//         }
//     } else {
//          if(B * diff < 2 * C * diff){
//             res = C * X * 2 + B * diff;
//         } else {
//             res = C * Y * 2;
//         }
//     }

//     cout << res << endl;
// }

// こちらはダメだった
// int main() {
//     int A, B, C, X, Y;
    
//     cin >> A >> B >> C >> X >> Y;

//     int res = numeric_limits<int>::max();
//     rep(ab, 200100){
//         int sm = C * ab;

//         int x = X - ab / 2;
//         int y = Y - ab / 2;

//         if(0 < x) sm += x * A;
//         if(0 < y) sm += y * B;

//         if(res > sm) res = sm;
//     }

//     cout << res << endl;
// }