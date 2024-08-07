#include<iostream>
using namespace std ; 
int cnt = 0 ;

bool checkprime (int n ) {
    for (int i = 1 ; i*i<=n ; i++ ) 
    {
        if(n%=0 ) {
            cnt++ ;
            if ((n/i) != i) {
                cnt++;
            }
        }
    }
    if (cnt == 2 ) return  true ;
    return false ; 
} 

int N = 10000000 ;  // contraint 
bool sieve[10000001] ;  

int sievel () {
    for(int i = 2  ; i<=N ; i++ ){
        sieve[i] = true ; // range 


    }
    for(int i = 2 ; i*i <= N ; i++ ) 
    {
        if(sieve[i] == true ) {
            for(int j = i*i ; j<=N ; j+= i) 
            {
                sieve[j] = false ; 
            }

        }
    }
}

int main () {
    sievel() ;
    int t ;
    cin >> t ;  
    while(t--) {
        int n ;
        cin >> n ;
        if (sieve[n] == true ) {
            cout << "Yes" ;
        }else {
            cout << "No";
        }
    }
}