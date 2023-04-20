// #include <bits/stdc++.h>
// using namespace std;

// string join(deque<string> S) {
//     ostringstream os;
//     copy(S.begin(), S.end(), ostream_iterator<string>(os));
//     string s = os.str();
    
//     return s;
// }

// int main() {
//     deque<string> S(1,"1");

//     int Q, tcin, tmpI;
//     string tmpS;
//     long long tmpL;
//     cin >> Q;

//     for(int i = 0; i < Q; i++){
//         cin >> tcin;
//         if(tcin == 1){
//             cin >> tmpI;
//             tmpS = to_string(tmpI);
//             S.push_back(tmpS);
//         } else if(tcin == 2){
//             S.erase(S.begin());
//         } else {
//             tmpS = join(S);
//             tmpL = stoll(tmpS);
//             cout << tmpL % 998244353 << endl;
//         }
//     }

//     return 0;
// }

// int main() {
//     int Q;
//     cin >> Q;
//     // S(10,1)とは要素数10全てに1を入れるという意味
//     deque<int> S(1,1);
// }

#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace atcoder;
using mint = modint998244353;
using namespace std;

int main() {
	int Q;
	cin>>Q;
    int MOD = 998244353;
	deque<int> S(1,1);
	mint ans = 1;
	
	for(int i=0;i<Q;i++){
		int t;
		cin>>t;
		if(t==1){
			int x;
			cin>>x;
			S.push_back(x);
			ans = ans*10 + x;
			// ans = (ans * 10 + x) % MOD;
		}
		if(t==2){
			// これではうまくいかない。なぜならansの値がlong long の数値すら超えてしまうため
			// だから、ansにはmodを入れる必要がある。
			// ただし、その場合にはans -= pow(10,S.size()-1) * S.front();をすると998244353よりも大きい値だった時にズレが生じる
			// ex: 2111111111 から 111111111 となる場合 ansには114,622,405が入っており、それをans -= powでやると答えがズレるということ
			// ans -= pow(10,S.size()-1) * S.front();
			ans -= mint(10).pow(S.size()-1) * S.front();
			S.pop_front();
		}
		if(t==3){
			cout<<ans.val()<<endl;
		}
	}
	
	return 0;
}
// modとpowをくみあわせるにはこんなのが必要
// long long qp(long long a,long long b){
//     long long ans = 1;
//     while(b){
//         if(b&1) ans = ans*a%mod;
//         a = a*a%mod;
//         b >>= 1;
//     }
//     return ans;
// }