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

void max_self(long long &a , long long b){
  a  = max(a,b);
}

void min_self(long long& a , long long b){
  a = min(a, b);
}

const long long INF  = 1e18L + 5; 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int N , W;
  cin >> N >> W;
  vector<long long>weight(N) , value(N);
  for(int  i = 0 ; i < N ; i++){
    cin >> weight[i] >> value[i];
  }

  int sum_value =0;
  for(int x : value){
    sum_value +=x;
  }

  vector<long long>dp(sum_value + 1, INF);
  dp[0] = 0;

  for(int item = 0 ; item < N ; item++){
    for(int value_already = sum_value - value[item] ; value_already >= 0 ; --value_already){
      // tinh tinh dp[i] - total weight of items with total valude exactly i
        min_self(dp[value_already + value[item]]  , dp[value_already] + weight[item]);
  
    }
  }

  long long ans = 0 ;
  for(int i = 0 ; i <= sum_value ; i++){
    if(dp[i] <= W)
      ans = max(ans , (long long) i);
  }
  cout << ans << endl;

  return 0;
}
