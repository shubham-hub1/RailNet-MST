#include "graph.h"
#include <iostream>
#include <iomanip>

Graph::Graph(int vertices) : V(vertices), adj(vertices) {}

void Graph::addEdge(int u, int v, int weight) {
    adj[u].push_back({v, weight});
    adj[v].push_back({u, weight});  // undirected
}

void Graph::printGraph(const std::vector<std::string>& cityNames) const {
    std::cout << "\n--- Adjacency List ---\n";
    for(int i = 0; i < V; i++) {
        std::cout << std::left << std::setw(20) << cityNames[i] << ": ";
        for(auto& [neighbor, dist] : adj[i])
            std::cout << cityNames[neighbor] << "(" << dist << "km) ";
        std::cout << "\n";
    }
}

int Graph::edgeCount() const {
    int count = 0;
    for(int i = 0; i < V; i++)
        count += adj[i].size();
    return count / 2;  // undirected: each edge counted twice
}
