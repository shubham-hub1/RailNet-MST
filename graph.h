#pragma once
#include <vector>
#include <string>

class Graph {
public:
    int V;  // number of vertices
    // adjacency list: adj[u] = list of {v, weight}
    std::vector<std::vector<std::pair<int,int>>> adj;

    Graph(int vertices);
    void addEdge(int u, int v, int weight);
    void printGraph(const std::vector<std::string>& cityNames) const;
    int edgeCount() const;
};
