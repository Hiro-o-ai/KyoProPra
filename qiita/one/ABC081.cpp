#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  
  cin >> A >> B;
  int sum = A * B; 
  if(sum % 2 == 0) cout << "EVEN" << endl;
  else cout << "ODD" << endl;
}
