#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges,vector<bool>& hasApple) {
    vector<vector<int>> adj(n);

    for(const auto& edge:edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }

    return dfs(0,-1,adj,hasApple);
}

int dfs(int node, int parent,const vector<vector<int>>& adj,const vector<bool>& hasApple){
    int totalTime = 0;

    for(int neighbor : adj[node]){
        if(neighbor ==  parent) continue;

        int childTime = dfs(neighbor,node,adj, hasApple);

        if(childTime > 0 || hasApple[neighbor]) {
            totalTime += childTime + 2;
        }
    }

    return totalTime;
}
};

int main() {
    
    return 0;
}