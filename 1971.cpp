#include <iostream>
#include <string>
using namespace std;

class Solution {
    int find(int i, std::vector<int>& parent) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i], parent);
    }

    void unite(int i, int j, std::vector<int>& parent, std::vector<int>& rank) {
        int root_i = find(i, parent);
        int root_j = find(j, parent);
        if (root_i != root_j) {
            if (rank[root_i] < rank[root_j])
                std::swap(root_i, root_j);
            parent[root_j] = root_i;
            if (rank[root_i] == rank[root_j])
                rank[root_i]++;
        }
    }

public:
    bool validPath(int n, std::vector<std::vector<int>>& edges, int source, int destination) {
        std::vector<int> parent(n);
        std::iota(parent.begin(), parent.end(), 0);
        std::vector<int> rank(n, 0);

        for (const auto& edge : edges) {
            unite(edge[0], edge[1], parent, rank);
        }

        return find(source, parent) == find(destination, parent);
    }
};

int main() {
    
    return 0;
}