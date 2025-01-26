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

const int MAXCHAR = 1005;
char sl[MAXCHAR][MAXCHAR];

void add_self(int& a , int b){
  a+=b;
  if(a >= MOD){
    a-=MOD;
  }

}


int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
    int h , w;
    cin >> h >> w;
    vector<vector<int>> dp(h + 1 , vector<int>(w+1 , 0));
    for(int row = 0 ; row < h ; row++){
      cin >> sl[row];
    }
    dp[0][0] = 1;
    for(int row = 0 ; row < h ; row++){
      for(int col = 0 ; col < w; col++){
        for(int r2 : {row , row + 1}){
          int cl2 = col;
          if(r2 == row){
            cl2 = col + 1;
          }
          if(r2 < h && cl2 < w && sl[r2][cl2] == '.'){
            add_self(dp[r2][cl2], dp[row][col]);
          }
        }
      }
    }
cout<<dp[h -1][w-1];

  return 0;
}

