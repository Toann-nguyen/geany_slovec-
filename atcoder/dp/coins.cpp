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

    int n ; 
    cin >> n;
    vector<double> dp(n +1);
    dp[0] = 1;
    
    for(int coin = 0 ; coin < n ; ++coin){
      double p_heads;
      cin >> p_heads;
      for(int i = coin +1 ; i >= 0 ; --i){
        dp[i] = (i == 0 ? 0 : dp[i -1] * p_heads) + dp[i] * (1 - p_heads);
      }
    }
   double answer = 0; 
    for(int heads = 0 ; heads <= n ; heads++){
     int tails = n - heads; 
      if(heads > tails)
      {
        answer += dp[heads];
      }
    }

    cout<< answer;



 return 0;
}

