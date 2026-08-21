#include <vector>           // adjacency lists, grids
#include <unordered_set>    // visited (hash)
#include <unordered_map>    // graph as id -> neighbors, or parent map
#include <set>              // visited if you need sorted, or std::set
#include <stack>            // iterative DFS
#include <queue>            // BFS (queue) and Dijkstra (priority_queue)
#include <array>            // fixed neighbor offsets, e.g. {{1,0},{-1,0},{0,1},{0,-1}}