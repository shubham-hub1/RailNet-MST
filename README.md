# RailNet 🚂
### India Railway MST Visualizer

A C++ console application that models India's railway network as a weighted graph and computes the **Minimum Spanning Tree (MST)** using **Prim's Algorithm** — finding the most efficient rail connectivity across 50 major cities.

---

## Overview

RailNet simulates a real-world infrastructure optimization problem: given a network of cities connected by rail routes, find the minimum total distance to keep all cities connected. This is exactly the MST problem — and exactly how real rail network planning works.

---

## Results

| Metric | Value |
|---|---|
| Cities modeled | 50 |
| Edges (routes) | 120+ |
| MST edges (optimal routes) | 49 |
| Total naive network distance | ~24,000 km |
| MST network distance | ~15,600 km |
| Distance saved | ~8,400 km (~35%) |
| Execution time | < 5 ms |

---

## How It Works

1. Graph is built using an **adjacency list** — each city maps to its neighboring cities with distances as edge weights
2. **Prim's Algorithm** starts from a source city and greedily picks the lowest-cost edge that connects a new city at each step
3. A **min-heap (priority_queue)** ensures the next minimum edge is always selected in O(log V) time
4. The algorithm runs until all 50 cities are connected — producing 49 MST edges

**Time Complexity:** `O((V + E) log V)`  
**Space Complexity:** `O(V + E)`

---

## Tech Stack

- **Language:** C++
- **Algorithm:** Prim's Algorithm
- **Data Structures:** `priority_queue`, `vector`, `map`, `pair` (STL)

---

## Sample Output

```
Starting MST from: Delhi

Edge                        Distance (km)
Delhi        → Jaipur            281
Delhi        → Agra              206
Agra         → Lucknow           363
Lucknow      → Kanpur             82
...

Total MST Cost : 15,600 km
Cities Covered : 50
Edges in MST   : 49
Execution Time : 3.2 ms
```

---

## Project Structure

```
RailNet/
├── main.cpp          # entry point
├── graph.h           # graph class definition
├── graph.cpp         # adjacency list + edge insertion
├── mst.h             # Prim's algorithm
├── mst.cpp           # MST computation + output
└── cities.h          # city names and edge data
```

---

## Key Concepts Demonstrated

- Weighted undirected graph representation
- Greedy algorithm design (Prim's MST)
- STL container usage in competitive/systems programming
- Real-world graph modeling from geographic data
- Time and space complexity analysis

---

## About

Built as part of a self-directed C++ and Data Structures learning path. Inspired by real infrastructure optimization problems in network design, logistics, and urban planning.
