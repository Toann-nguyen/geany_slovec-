#include <bits/stdc++.h>
#include <cstring>
#include <iterator>
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
 
void solve(){}

int maxCoins(vector<int>& nums){
  int n = nums.size();
  static int a[300];
  static int dp[300][300];
  memset(a , 0 , size(a));
  memset(dp, 0 , size(dp));
  a[0] = a[n - 1] = 1;

  for(int i = 1 ; i <=n ; i++){
    a[i] = nums[i];
  }
  n+=2;
  for(int len = 2 ; len <= n; len ++){
     for(int left = 0 ; left <= n ; left++){
        int right = len + left -1;
        int max_val = 0;
        for(int k = left + 1 ; k <= right ; k ++){
          int val = a[k] * a[left] * a[right] + dp[left][k] + dp[k][right];
          if(val > max_val){
            max_val = val;
          }
        }
     }
  }
  return dp[0][n-1];

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t = 1;
   cin >> t;
   while (t--) {
     solve();
   }
  return 0;
}

