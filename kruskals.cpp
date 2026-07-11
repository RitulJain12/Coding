#include <bits/stdc++.h>
using namespace std;
class DSU {

public:
    vector<int> parent, size;

    DSU(int n) {
        parent.resize(n);
        size.resize(n, 1);

        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int findParent(int node) {
        if (parent[node] == node)
            return node;

        return parent[node] = findParent(parent[node]);
    }

    bool unionBySize(int u, int v) {
        u = findParent(u);
        v = findParent(v);

        if (u == v)
            return false;

        if (size[u] < size[v])
            swap(u, v);

        parent[v] = u;
        size[u] += size[v];

        return true;
    }
};
class Solution {
public:

    struct Edge {
        int u, v, wt;
    };

    static bool cmp(Edge &a, Edge &b) {
        return a.wt < b.wt;
    }

    int kruskal(int V, vector<Edge>& edges) {

        sort(edges.begin(), edges.end(), cmp);

        DSU dsu(V);

        int mstWeight = 0;
        int edgesUsed = 0;

        for (auto &e : edges) {

            if (dsu.unionBySize(e.u, e.v)) {

                mstWeight += e.wt;
                edgesUsed++;

                if (edgesUsed == V - 1)
                    break;
            }
        }

        return mstWeight;
    }
};