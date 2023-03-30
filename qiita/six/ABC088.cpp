#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> cards(N);
    for(auto &i: cards) cin >> i;
    
    sort(cards.begin(), cards.end(), greater<int>());
    // reverse(cards.begin(), cards.end())もあり

    int res = 0;
    for(int i = 0; i < N; i += 2){
        res += cards[i] - cards[i+1];
    }

    cout << res << endl;

    return 0;
}

// int a[110];
// sort(a, a + N, greater<int>());