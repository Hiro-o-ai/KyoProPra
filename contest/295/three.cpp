#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;
  map<vector<int>,long long> mp;
  vector<int> cnt(10,0);
  mp[cnt]++;
//   for(auto e: cnt){
//     cout << e << " ";
//   }
//   cout << endl << mp[cnt];

  for(auto &nx : s){
    cnt[nx-'0']++;
    cnt[nx-'0']%=2;
    mp[cnt]++;
  }
  for(auto &nx : mp){
    long long x=nx.second;
    vector<int> y=nx.first;
    cout << x << endl;
    for(auto e: y){
        cout << e << " ";
    }
    cout << endl;
    // res+=(x*(x-1))/2;
  }
//   for(auto &nx : s){
//     cnt[nx-'0']++;
//     cnt[nx-'0']%=2;
//     mp[cnt]++;
//   }
//   long long res=0;
//   for(auto &nx : mp){
//     long long x=nx.second;
//     res+=(x*(x-1))/2;
//   }
//   cout << res << "\n";
  return 0;
}
