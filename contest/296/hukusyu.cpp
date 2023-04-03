#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int N, X;
//     cin >> N >> X;

//     set<int> s;
//     for(int i = 0; i < N; ++i){
//         int t;
//         cin >> t;
//         s.insert(t);
//     }

//     for(auto i = s.begin(); i != s.end(); ++i){
//         if(s.find(*i + X) != s.end()){
//             cout << "Yes" <<endl;
//             return 0;
//         }
//     }
//     cout << "No" <<endl;
// }

int main(){
    int N, X;
    cin >> N >> X;
    vector<int> a(N);
    // for(int i=0;i<N;i++)cin >> a[i];
    // &は必須
    for(auto &i:a) cin >> i;
    sort(a.begin(),a.end());
    for(int i = 0; i < N; i++)cout << a[i] << " ";
    
    int i = 0;
    for(int j = 0; j < N; j++){
        while(i < N && a[i] - a[j] < X) i++;
        if(i < N && a[i] - a[j] == X){
            cout << "Yes" <<endl;
            return 0;
        }
    }
    cout << "No" <<endl;
}


