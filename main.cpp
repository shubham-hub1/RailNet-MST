#include <iostream>
#include <map>
#include "graph.h"
#include "mst.h"
#include "cities.h"

int main() {
    int V = CITIES.size();  // 50 cities

    // Build graph
    Graph g(V);
    for(auto& [u, v, w] : EDGES)
        g.addEdge(u, v, w);

    std::cout << "\n";
    std::cout << "  ██████╗  █████╗ ██╗██╗     ███╗   ██╗███████╗████████╗\n";
    std::cout << "  ██╔══██╗██╔══██╗██║██║     ████╗  ██║██╔════╝╚══██╔══╝\n";
    std::cout << "  ██████╔╝███████║██║██║     ██╔██╗ ██║█████╗     ██║   \n";
    std::cout << "  ██╔══██╗██╔══██║██║██║     ██║╚██╗██║██╔══╝     ██║   \n";
    std::cout << "  ██║  ██║██║  ██║██║███████╗██║ ╚████║███████╗   ██║   \n";
    std::cout << "  ╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚══════╝╚═╝  ╚═══╝╚══════╝   ╚═╝   \n";
    std::cout << "\n       India Railway MST Visualizer — Prim's Algorithm\n";
    std::cout << "\n";

    std::cout << "  Graph loaded:\n";
    std::cout << "    Cities : " << V << "\n";
    std::cout << "    Edges  : " << g.edgeCount() << "\n";
    std::cout << "    Source : " << CITIES[0] << " (index 0)\n";

    // Compute MST
    MST mst;
    mst.compute(g, 0);

    // Print results
    mst.printResult(CITIES);
    mst.printSummary(CITIES, g.edgeCount());

    return 0;
}
