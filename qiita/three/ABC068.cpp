#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;

    cin >> N;
    int res = 1;
    int counter = 0;
    for(int i = N; i > 0; i--){
        int num = i;
        int count = 0;
        while(true) {
            if( num % 2 != 0) break;
            num /= 2;
            count += 1;
        }
        if(counter < count) {
            counter = count;
            res = i;
        }
    }
    
    cout << res << endl;
}