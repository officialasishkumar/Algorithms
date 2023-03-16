bool isBipartite(vector<vector<int>> adj[], int n) {
    vector<int> color(n+1, -1);
    for(int i = 1; i<=n; i++) {
        if(color[i] == -1) {
            queue<int> q;
            q.push(i);
            color[i] = 0;
            while(!q.empty()) {
                int u = q.front();
                q.pop();
                for(auto v : adj[u]) {
                    if(color[v[0]] == -1) {
                        color[v[0]] = 1 - color[u];
                        q.push(v[0]);
                    } else if(color[v[0]] == color[u]) {
                        return false;
                    }
                }
            }
        }
    }
    return true;
}
