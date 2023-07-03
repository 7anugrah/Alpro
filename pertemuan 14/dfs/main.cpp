#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void dfs(vector<vector<int>>& graph, int start, unordered_set<int>& visited) {
    visited.insert(start);
    cout << start << " ";

    for (int neighbor : graph[start]) {
        if (visited.count(neighbor) == 0) {
            dfs(graph, neighbor, visited);
        }
    }
}

int main() {
    vector<vector<int>> graph = {
        {1, 2},     // Node 0
        {0, 3, 4},  // Node 1
        {0, 5},     // Node 2
        {1},        // Node 3
        {1, 6},     // Node 4
        {2},        // Node 5
        {4, 7},     // Node 6
        {6}         // Node 7
    };

    unordered_set<int> visited;
    cout << "DFS traversal: ";
    dfs(graph, 0, visited);
    cout << endl;

    return 0;
}
