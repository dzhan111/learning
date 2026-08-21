#include <vector>
#include <unordered_set> 
#include <iostream>

using namespace std;
struct node {
    vector<node*> adjacent;
    int value;
};

class Solution {

    public:
        Solution() {};
        // Optimizations:
        // 1. Combine find+insert into one hash lookup:
        //    if (!visited.insert(curr->value).second) return;
        // 2. Keep only one visited check. The inner one is the useful one: it skips
        //    a recursive call for neighbors you have already seen.
        // 3. Remove cout; I/O is far more expensive than walking the graph.
        // 4. visited.reserve(n) if you know the node count, to avoid rehashing.
        // 5. Key visited by node* (or 0..n-1 index), not value — duplicate values
        //    collide, and an index into vector<char> is cheaper than unordered_set.
        // 6. If values are 1..n, use vector<char> visited(n+1) instead of a hash set.
        // 7. For large graphs, iterative DFS with an explicit stack avoids call
        //    overhead and recursion-depth limits.
        void dfs(node* curr, unordered_set<int>& visited) {
        
            visited.insert(curr->value);
            cout << "visited node " << curr->value << endl;
        
            for (auto & adj : curr->adjacent) {
                cout << "expl adj: " << adj->value << endl;
                if (visited.find(adj->value) == visited.end()) {
                    dfs(adj, visited);
                }
            }
            return;
        }

};



//explore a grid
int main()  {
    //create a graph to traverse:
    node one{{}, 1};
    node two{{}, 2};
    node three{{}, 3};
    one.adjacent.push_back(&two);
    one.adjacent.push_back(&three);
    two.adjacent.push_back(&three);

    Solution s;
    unordered_set<int> visited.reserve(3);
    s.dfs(&one, visited);

    return 0;
}