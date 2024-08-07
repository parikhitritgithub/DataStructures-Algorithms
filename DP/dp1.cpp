#include <bits/stdc++.h>
using namespace std;

// using tabulation (botttom up )

int main () {
    int n ; 
    cin >> n ; 
    int p2 = 0  ;
    int  p1 = 1 ; 
    for (int i =2 ; i<=n ;i++) {
        int cu = p1 + p2 ;
        p2 = p1 ; 
        p1 = cu ;
    } 
    cout << p1 ; 
    return 0 ; 
}