// directed unweghted graph
#include<iostream>
#include<vector>
using namespace std;
int main () {
    int vertex , edges ;
    cin >> vertex >> edges; 
    
    vector< vector <bool> > adj (vertex , vector<bool>(vertex , 0)) ;

    int u  , v ;
    for(int i = 0 ; i< edges ; i++) 
    {
        cin >> u >> v ; 
        adj[u][v] = 1 ;
    }


    for(int i = 0 ; i< vertex ; i++) {
        for(int j = 0 ; j<vertex ; j++) {
            cout << adj[i][j] << " " ;
            cout << endl ; 
        }
    }
} 