#include <algorithm>
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

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int n ;
  cin >> n;
  vector<int>dp(3);
  for(int day = 0 ; day < n ; day++){
    vector<int>new_dp(3 , 0);
    vector<int>c(3);
    for(int i = 0 ; i < 3 ; i++){
      cin >>c[i];
    }
    for(int i = 0 ; i < 3 ; i++){
      for(int j = 0 ; j < 3; j++){
        if(i != j ){
          new_dp[j] = max(new_dp[j] , dp[i] + c[j]);
        }
      }
    }
    dp = new_dp;
  }
  cout<<max({ dp[0] , dp[1] , dp[2] });
   return 0;
}

