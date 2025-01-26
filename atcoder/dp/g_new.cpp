#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007
#define MAX 1e6
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void dfs(int a, vector<vector<int>>& edges, vector<int>& dist, vector<bool>& visited, vector<int>& in_degree) {
    visited[a] = true;
    for (auto b : edges[a]) {
        dist[b] = max(dist[b], dist[a] + 1);
        --in_degree[b];
        if (in_degree[b] == 0) {
            dfs(b, edges, dist, visited, in_degree);
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> edges(n + 1);
    vector<int> in_degree(n + 1, 0);
    vector<int> dist(n + 1, 0);
    vector<bool> visited(n + 1, false);

    while (m--) {
        int a, b;
        cin >> a >> b;
        edges[a].push_back(b);
        ++in_degree[b];
    }

    for (int i = 1; i <= n; i++) {
        if (!visited[i] && in_degree[i] == 0) {
            dfs(i, edges, dist, visited, in_degree);
        }
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dist[i]);
    }

    cout << ans;
    return 0;
}
