#include<iostream> 
#include<vector>
using namespace std ;

int main() {
    int  vertex , edges ; 
    vector<vector<int> > adj (vertex , vector<int>(vertex, 0) ) ; 

    cin >> vertex >> edges ; 

    int u , v , weight  ;  
    for(int i = 0 ; i<edges ; i++ ) {
        adj[u][v] = weight ;
    }


    for(int i = 0 ; i<vertex ; i++ ) {
        for(int j =0 ; j< vertex ; j++ ) {
            cout<< adj[i][j] << " " ; 
            cout  << endl ; 
        }
    }
}