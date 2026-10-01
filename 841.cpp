#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    bool canVisitAllRooms(std::vector<std::vector<int>>& rooms) {
        int n = rooms.size();
        std::vector<bool> visited(n, false);
        std::queue<int> q;

        visited[0] = true;
        q.push(0);
        int visitedCount = 1;

        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            for (int key : rooms[curr]) {
                if (!visited[key]) {
                    visited[key] = true;
                    visitedCount++;
                    q.push(key);
                }
            }
        }

        return visitedCount == n;
    }
};

int main() {
    
    return 0;
}