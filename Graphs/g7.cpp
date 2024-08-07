#include<iostream>
#include<vector>
using namespace std ;
int main () {

    int vertex , edges ;
    cin >> vertex >> edges ;
    vector<int> adj [vertex] ; 

    int u , v ;
    for(int i = 0 ; i< edges ; i++ ) 
    {
        cin >> u >> v ;
        adj[u].push_back(v);
    }
    for(int i = 0 ; i<vertex ;i++) 
    {
        cout << i << "->" ;
        for(int j = 0 ; j < adj[i].size();j++){
            cout << adj[i][j] <<" ";
            cout <<

        }
    }
}