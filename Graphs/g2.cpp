// adjacency  matrix 
// undirected weghted graph 
#include<iostream>
#include<vector>
using namespace std;

int main () {
    int vertex , edges ;
    cin >> vertex >> edges ; 

    vector<vector<int> > adj (vertex , vector<int>(vertex, 0 ))  ;  

    int u , v  , weight ; 
   
    for (int i = 0 ; i < edges ; i++ ) {
         cin >> u >> v >> weight; 
        adj[u][v] = weight ;
        adj[v][u] = weight ; 
    }

    for(int i =0 ; i<vertex ; i++ ) {
        for(int j = 0 ; j<vertex ; j++) {
            cout << adj[i][j] << " " ;
            cout << endl; 
        }
    }
}