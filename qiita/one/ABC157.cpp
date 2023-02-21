#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;

    cin >> N;
    if(N % 2 == 1) N = N + 1;
    int needPaper = N / 2;
    cout << needPaper << endl;   
}