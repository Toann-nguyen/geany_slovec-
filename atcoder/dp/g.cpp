#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define MOD 1000000007
#define MAX 1e6
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

void dfs(int a , vector<vector<int>>& edges , vector<int>& dist , vector<int>& in_dergree , vector<bool>& visited){

  visited[a] = true;
  for(auto b : edges[a]){
    dist[b] = max(dist[b] , dist[a] + 1);
    --in_dergree[b];
    if(in_dergree[b] == 0){
      dfs(b, edges , dist , in_dergree , visited);
    }
  }
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n , m;
  cin >> n >> m;
  // luu cac dinh
  vector<vector<int>> edges(n + 1);
  // luu so canh tai moi dinh 
  vector<int>in_dergree(m + 1 , 0);
  // luu duong di dai nhat
  vector<int> dist(n+1 , 0);
  // danh dau xem dinh da duoc duyet qua hay chua
  vector<bool> visited(n + 1 , false);
  while(m--){
   int a , b;
   cin >> a >> b;
   edges[a].push_back(b);
   in_dergree[b]++;
  }

  for(int i = 1; i <= n ; i++){
    if(!visited[i] && in_dergree[i] ==0){
      dfs(i, edges, dist,in_dergree, visited);
    }
  }
  int ans = 0;
  for(int i = 1; i <= n ; i++){
    ans = max(ans , dist[i]);
}

cout<< ans;
    
 return 0;
}

