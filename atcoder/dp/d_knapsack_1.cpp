#include <bits/stdc++.h>
#include <vector>
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

void max_self(long long &a , long long b){
  a  = max(a,b);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int N , W;
  cin >> N >> W;
  vector<long long>dp(W + 1);

  for(int item = 0 ; item < N ; item++){
    int  weight , value;
    cin >> weight >> value;
    for(int weight_already = W - weight ; weight_already >= 0 ; --weight_already){
        max_self(dp[weight_already + weight]  , dp[weight_already] + value);
  
    }
  }

  int ans = 0 ;
  for(int i = 0 ; i <= W ; i++){
    max_self(ans , dp[i]);
  }
  cout << ans << endl;

  return 0;
}

