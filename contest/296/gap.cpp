#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int N, X;
//     cin >> N >> X;
//     vector<int> seq(N);
//     for(int &i: seq) cin >>i;
//     if(X > 0){
//         sort(seq.begin(), seq.end(), greater<int>());
//     } else {
//         sort(seq.begin(), seq.end());
//     }

//     string res = "No";
//     map<int, int>mp;
//     int sum = 0;
//     for(int i = 0; i < N; i++){
//         int diff = seq[i] - seq[i+1];
//         sum += diff;
//         mp[sum] = diff;
//     }

//     if(mp[X] != 0 || X == 0) res = "Yes";
//     for(auto &i:mp){
//         if(i.second == X) res = "Yes";
//     }
//     cout << res << endl;

//     return 0;
// }

// int main(){
// 	int n,x;
// 	cin >> n >> x;
// 	vector<int>a(n);
// 	for(int i=0;i<n;i++)cin >> a[i];
// 	sort(a.begin(),a.end());
// 	int i=0;
// 	for(int j=0;j<n;j++){
//         // ここで一番値の低いa[j]に対して、目的となるx未満の値をなくす。
//         // なぜなら、一番低い値を引いた時にx未満であれば、a[i]を変えない限り、jを変更させてもx未満のままだから
//         // 逆にxがマイナスの場合はa[i]一番小さい値の時にxより大きい場合にはjを変更させないとiを変更させてもxより大きいままのため
// 		cout << i << " " << j << endl;
// 		while(i<n&&a[i]-a[j]<x)i++;
//         cout << i << " " << j << endl;
// 		if(i<n&&a[i]-a[j]==x){
// 			cout << "Yes" << endl;
// 			return 0;
// 		}
// 	}
// 	cout << "No" << endl;
// }

int main(){
	int n,x;
	cin >> n >> x;
    // setは重複を禁止しながら、sort（昇順）してくれるもの
    // ex set{3,6,1,6,9,4}は{1,2,4,6,9}となる
	set<int>s;
	for(int i=0;i<n;i++){
		int t;
		cin >> t;
		s.insert(t);
	}
	for(auto a:s){
        // find()は見つからない場合はendを返すので、下記の条件を用いている。
		if(s.find(a+x)!=s.end()){
            // この方法であれば、最大でもN回の計算量で済む
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}