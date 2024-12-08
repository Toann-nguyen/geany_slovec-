#include <algorithm>
#include <bits/stdc++.h>
#include <cassert>
#include <utility>
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

void solve() {
  
}

using ll = long long;
const int INF = 1e5 +5;

template <typename T> void max_self(T& a, T b) {
    a = max(a, b);
}

bool first_row_or_column(pair<int,int> p) {
    return p.first == 0 || p.second == 0;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string a , b;
    cin >> a >> b;
  // make vector(luu so luong trung nhau cua cac chu , pair<int , int> luu lay vi tri tu (i->j) de truy vector
    
    vector<vector<pair<int , pair<int , int>>>>dp(a.length() +1 , 
          vector<pair<int , pair<int , int>>>(b.length() + 1 , {-INF ,{0 , 0}}));
    dp[0][0] = {0 , {0 , 0}};

    // the max total so far
    for(int i = 0 ; i <(int) a.length() ; i++){
      for(int j = 0 ; j <(int) b.length() ; j++){
        //check index i of a == index j of b tang gia tri len 1 , tao make_pair(i , j) de truy vet 
        if(a[i] == b[j]){
          max_self(dp[i+1][j+1],make_pair(dp[i][j].first + 1,make_pair(i, j)));
        }
        
          max_self(dp[i+1][j],make_pair(dp[i][j].first,make_pair(i, j)));
          max_self(dp[i][j+1],make_pair(dp[i][j].first,make_pair(i, j)));
      }
    }
  // truy vet LCS
  pair<int , pair<int , int>>ans= {0 , {0 , 0}};
    for(int i = 0 ; i <(int) a.length() ; i++){
      for(int j = 0 ; j <(int) b.length() ; j++){
        max_self(ans,make_pair(dp[i][j].first , make_pair(i,j)));
      }
    }
    //save ans = string s and return s;
    string s; 
      pair<int , int> cur = ans.second;
      while (!first_row_or_column(cur)) {
        int i = cur.first;
        int j = cur.second;
        pair<int,int> pre = dp[i][j].second;
        //if pre == pair<i- 1 , j-1>
        // push_back(i , j)
        
        if(pre == make_pair(i-1,j-1)){
        assert(a[i-1] == b[j-1]);
         s+=a[i-1];
      }
      
      cur = pre;
      }
      reverse(s.begin() , s.end());
      cout << s <<endl;

       
    return 0;
}

