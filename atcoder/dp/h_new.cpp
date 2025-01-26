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

void solve() {
  
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int h , w;
    vector<vector<int>> dp(h + 1, vector<int>(w + 1 , 0));
    vector<string> grid(h);
    for(int i = 0 ; i < h ; i++){
      cin >> grid[i];
    }
    
    dp[1][1] = 1;
    for(int i = 0 ; i < h ; i++){
      for(int j = 0 ; j < w ; j++){
        if(dp[i][j] == '#'){
          dp[i][j] = 0;
        }
        else{
          if(i > 1) dp[i][j] = (dp[i - 1][j] + dp[i][j -1]) % MOD;
          if(j > 1) dp[i][j] = (dp[i - 1][j] + dp[i][j -1] ) % MOD;
        }
      }
    }


    cout<<dp[h - 1][w -1];
 return 0;
}

