// res: bridges
// v: current node
// from: parent node
int dfs(vector<vector<int>>& g, vector<pair<int, int>>& res, int v, int& count, int from, vector<int>& low, vector<int>& pre) {
  pre[v] = count++;
  low[v] = pre[v];
  for (vector<int>::iterator it = g[v].begin(); it != g[v].end(); it++) {
    int to = *it;
    if (pre[to] == -1) {
      // destination has not been visited
      // visit destination and update low[v]
      low[v] = min(low[v], dfs(g, res, to, count, v, low, pre));
      if (low[to] == pre[to]) {
        // edge is not contained in a closed path -> bridge
        res.push_back(make_pair(v, to));
      }
    } else {
      if (from == to) {
        // ignore a path to parent
        continue;
      }
      low[v] = min(low[v], low[to]);
    }
  }
  return low[v];
}

// Calculate bridges in a undirected graph.
// Assume graph is connected and has no parallel edges or self-loops.
// g: adjacency list
// V: number of nodes
vector<pair<int, int>> bridges(vector<vector<int>>& g, int V) {
  vector<pair<int, int>> res;
  if (V > 0) {
    // assume at least the first vertex exists
    vector<int> low(V, -1);  // lowest reacheable index
    vector<int> pre(V, -1);  // pre-order index
    int count = 0;  // pre-order index counter
    dfs(g, res, 0, count, -1, low, pre);  // start dfs from vertex 0
  }
  return res;
}
