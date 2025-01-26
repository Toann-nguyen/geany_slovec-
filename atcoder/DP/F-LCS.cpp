#include <bits/stdc++.h>
#include <utility>
using namespace std;

#define MOD 1000000007
#define MAX 1e6
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

const int INF = 1e9 +5;
void solve() {
  
}

template <typename  T> void max_self(T & a, T & b ){
  a = max(a, b);
}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    string a,b; 
    cin >> a >> b;
    vector<vector<pair<int,pair<int,int>>>>dp(a.length() + 1,
    vector<pair<int,pair<int,int>>>(b.length() + 1, {-INF ,{0,0}}));
    dp[0][0] = {0, {0,0}};

    for(int i = 0 ; i < a.length() ; i++){
      for(int j = 0 ; j < b.length(); j++){
        if(a[i] == b[j]){
          max_self(dp[i+1][j+1] , make_pair(dp[i][j].first, make_pair(i, j)));
          }
        
          max_self(dp[i+1][j] , make_pair(dp[i][j].first, make_pair(i, j)));
          max_self(dp[i][j+1] , make_pair(dp[i][j].first, make_pair(i, j)));
      }
    }
    int ans = 0 ; 
    for(auto row: dp){
      for(auto value: row){
        max_self(ans , value);
      }
    }
    cout << ans;

 return 0;
}

