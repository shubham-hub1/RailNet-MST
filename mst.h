#pragma once
#include "graph.h"
#include <vector>
#include <string>

struct MSTEdge {
    int from, to, weight;
};

class MST {
public:
    std::vector<MSTEdge> edges;
    int totalCost;
    double executionTimeMs;

    MST();
    void compute(const Graph& g, int startVertex = 0);
    void printResult(const std::vector<std::string>& cityNames) const;
    void printSummary(const std::vector<std::string>& cityNames, int totalEdges) const;
};
