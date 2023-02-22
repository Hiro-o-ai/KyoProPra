#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;

  cin >> S;
  char start = S[0];
  char end = S[S.length()-1];
  int count = S.length() - 2;
  cout << start << to_string(count) << end << endl;
}