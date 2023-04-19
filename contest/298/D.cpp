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
		}
		if(t==2){
			cout << ans.val() << endl;
			ans -= mint(10).pow(S.size()-1) * S.front();
			cout << ans.val() << endl;
			S.pop_front();
		}
		if(t==3){
			cout<<ans.val()<<endl;
		}
	}
	
	return 0;
}