//
// Created by Jisoo on 2020/08/10.
//

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Graph{
public:
    int n;
    map<int, vector<int>> v;
    vector<int> BFS(int start);
    void sorting();
};

int main(){
    int n, m, v;
    cin>>n>>m>>v;
    Graph g;
    g.n = n;
    for(int i=0;i<m;i++){
        int a, b;
        cin>>a>>b;
        g.v[a].push_back(b);
        g.v[b].push_back(a);
    }
    g.sorting();
    vector<int> res = g.BFS(v);
    for(int i=0;i<res.size() - 1;i++){
        cout<<res[i]<<" ";
    }
    cout<<res[res.size() - 1]<<endl;
}

vector<int> Graph::BFS(int start){
    vector<int> q;
    vector<int> req;
    int u;
    vector<bool> visited(n, false);
    q.push_back(start);
    req.push_back(start);
    visited[start] = true;
    while(!q.empty()){
        u = q.front();
        q.erase(q.begin());
        for(auto iter = v[u].begin();iter != v[u].end(); iter++){
            if(!visited[*iter]){
                visited[*iter] = true;
                q.push_back(*iter);
                req.push_back(*iter);
            }
        }
    }
    return req;
};

void Graph::sorting(){
    for(int i=0;i<n;i++){
        sort(v[i].begin(), v[i].end());
    }
}