#include<bits/stdc++.h>
using namespace std ;
// ABC175の別回答

#define MAXN 107

int n ;
int a[ MAXN ] ;

void input ( ) {
    cin >> n ;
    for ( int i = 1 ; i <= n ; ++ i ) {
        cin >> a[ i ] ;
    }
    for (const auto& t : a)
	{
		std::cout << t << '\n';
	}
    // aは{ 0, 1, 1, 1, 1, 0, ..... , 0}みたいになっている。
    // この状態でbegin(a)はインデックス0のポインタ  end(a)はインデックス106のポインタとなるので、最初から最後までの全てを並び替える
    // それに対し下のコードは  a が インデックス0のポインタ を表し、 a + 1 は インデックス1のポインタ を表しているので、インデックスが1のものから n + 1 までの要素をのみをsortしている
    sort ( a + 1 , a + n + 1) ;
    // ただし vectorでは a + 1 といったことができないので注意
    // sort ( begin(a) , end(a) ) ;
    // またvectorは v.begin()などが使用できるが、int a[]には使用できないのでbegin(a)とする必要がある。
    for (const auto& t : a)
	{
		std::cout << t << '\n';
	}
}

void solve ( ) {
    int ans = 0 ;
    for ( int i = 1 ; i <= n ; ++ i ) {
        for ( int j = i + 1 ; j <= n ; ++ j ) {
            for ( int t = j + 1 ; t <= n ; ++ t ) {
                // ソート してあるからa[i]とa[t]が等しくなるにはa[i]とa[j]が等しいという条件が生じるため、この2つだけで良い
                if ( a[ i ] == a[ j ] ) { continue ; }
                if ( a[ j ] == a[ t ] ) { continue ; }
                // 三角形となるために条件は |a - b| < c < a + bを満たす必要があるが、ここでは事前にsortしているため常に|a - b| < cが満たされているためc < a + bのみで良い
                if ( a[ i ] + a[ j ] > a[ t ] ) { ++ ans ; }
            }
        }
    }
    cout << ans << "\n" ;
}


int main ( ) {
    ios_base :: sync_with_stdio ( false ) ;
    cin.tie ( NULL ) ;
    input ( ) ;
    solve ( ) ;
    return 0 ;
}
