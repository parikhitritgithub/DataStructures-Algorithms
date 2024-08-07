#include<iostream>
#include<vector>
using namespace std; 


// adjacency  matrix 
// undirected unweghted graph 


int main () {
    int vertex , edges ;
    cin >> vertex >> edges ;

    vector<vector<bool> >Adj (vertex,vector<bool>(vertex,0)) ;



    int u , v ;
    for(int i = 0 ; i < edges ; i++){
        cin >> u >> v ;
        Adj[u][v] = 1 ;  
        Adj[v][u] = 1 ;

    }

    for(int i = 0 ; i< vertex ; i++ ) {
        for(int j = 0 ; j< vertex ; j++ ) {
            cout <<Adj[i][j] << " " ;
            cout <<endl ;
        }
    }


}
