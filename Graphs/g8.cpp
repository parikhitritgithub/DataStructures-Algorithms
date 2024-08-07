#include<iostream>
#include<vector>
using namespace std ;
int main () {

    int vertex , edges ;
    cin >> vertex >> edges ;
    vector<pair<int, int > > adj [vertex] ; 

    int u , v , weight ;
    for(int i = 0 ; i< edges ; i++ ) 
    {
        cin >> u >> v >> weight ;
        adj[u].push_back(make_pair(v,weight));
    }
    for(int i = 0 ; i<vertex ;i++) 
    {
        cout << i << "->" ;
        for(int j = 0 ; j < adj[i].size();j++){
            cout << adj[i][j].first <<" " << adj[i][j].second;
            cout << endl;

        }
    }
}