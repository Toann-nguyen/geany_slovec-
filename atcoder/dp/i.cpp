#include <bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long
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
    int n;
    cin >> n;
    vector<double> coin(n +1);
    vector<vector<double>> dp(n + 1 , vector<double>(n +1 , 0));

    for(int i = 1; i <= n ;i++){
      cin >> coin[i];
    }
    dp[0][0] =1;
    for(int i = 1 ; i <= n ; i++){
     for(int j = 0;  j <= i ; j++){
       // tinh mat sap
       dp[i][j] = dp[i -1][j] * (1 - coin[i]);

       if(j > 0){
         // tinh mat ngua 
         dp[i][j] += dp[i -1][j - 1] * coin[i];
       }
     }
    }
  double ans = 0;
  for(int i =(n/2) + 1; i <= n ; i++){
    ans += dp[n][i];
  }

cout << fixed << setprecision(10) << ans << endl;
  return 0;
}

