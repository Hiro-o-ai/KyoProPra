#include <bits/stdc++.h>
using namespace std;

bool isprime(int N) {
    if(N < 2) return false; 
    // https://algo-method.com/descriptions/93
    // ↑は i*i <= Nでいい理由
    for(int i = 2; i*i <= N; i++){
        if(N % i == 0) return false;
    }
    return true;
}

int main() {
    vector<int> primeSum(100000, 0);
    int sum = 0;
    for(int i = 2; i < 100000; i++){
        if(isprime(i) && isprime((i+1)/2)) sum+=1;
        primeSum[i] = sum;
    }

    int Q;
    cin >> Q;

    for(int q = 0; q < Q; ++q){
        int l, r;
        cin >> l >> r;
        --l;
        
        cout <<  primeSum[r] - primeSum[l] << endl;
    }
    
    return 0;
}

// int main() {
//     vector<int> primeArray(100000, 0);
//     vector<int> sum2017(100000, 0);
//     vector<int> primeSum(100000, 0);
//     for(int i = 2; i < 100000; i++){
//         if(isprime(i)) primeArray[i] = 1;
//     }

//     for(int i = 2; i < 100000; i++){
//         if (primeArray[i] and primeArray[(i + 1) / 2]) sum2017[i] = 1;
//     }

//     for(int i = 2; i < 100000; i++){
//         primeSum[i] = primeSum[i-1] + sum2017[i];
//     }

//     int Q;
//     cin >> Q;

//     for(int q = 0; q < Q; ++q){
//         int l, r;
//         cin >> l >> r;
//         --l;

//         cout <<  primeSum[r] - primeSum[l] << endl;
//     }
    
//     return 0;
// }