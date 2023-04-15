// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N;
//     vector<vector<int>> A1(N, vector<int>(N));
//     vector<vector<int>> A2(N, vector<int>(N));
//     vector<vector<int>> A3(N, vector<int>(N));
//     vector<vector<int>> A4(N, vector<int>(N));
//     vector<vector<int>> B(N, vector<int>(N));
//     cin >> N;

//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < N; j++){
//             cin >> A1[i][j];
//         }
//     }
    
//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < N; j++){
//             cin >> B[i][j];
//         }
//     }

//     bool check = true;

//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < N; j++){
//             if(A1[i][j] != B[i][j]){
//                 check = false;
//             }
//             A2[N + 1 -j][i] = A1[i][j];
//         }
//     }

//     if(check){
//         cout << "Yes" << endl;
//         return 0;
//     }

//     check = true;

//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < N; j++){
//             if(A2[i][j] != B[i][j]){
//                 check = false;
//             }
//             A3[N + 1 -j][i] = A2[i][j];
//         }
//     }

//     if(check){
//         cout << "Yes" << endl;
//         return 0;
//     }

//     check = true;

//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < N; j++){
//             if(A3[i][j] != B[i][j]){
//                 check = false;
//             }
//             A4[N + 1 -j][i] = A3[i][j];
//         }
//     }

//     if(check){
//         cout << "Yes" << endl;
//         return 0;
//     }

//     check = true;

//     for(int i = 0; i < N; i++){
//         for(int j = 0; j < N; j++){
//             if(A4[i][j] != B[i][j]){
//                 check = false;
//                 break;
//             }
//         }
//     }

//     if(check){
//         cout << "Yes" << endl;
//         return 0;
//     }else {
//         cout << "No" << endl;
//         return 0;
//     }
// }