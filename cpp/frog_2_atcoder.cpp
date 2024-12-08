#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
#include <vector>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define debug(x) cout << #x << " = " << x << endl
const int INF = 1e9+ 9;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   int n , k;
   cin >> n >> k;
   vector<int>h(n) ;
   vector<int> dp(n , INF);
   for(auto& x : h){
     cin>>x;
   }
   dp[0] = 0;
 
  for(int i = 0 ; i< n ; i++){
      for(int j = i+1; j <= i+k; ++j){
        if(j<n){
          dp[j] = min(dp[j] , dp[i] +abs(h[i] - h[j]));
        }
      }
  }

  cout<<dp[n-1];

  
}

