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

string solve(int n , int k) {
  //using factorial number system grouping 
  vector<int>v={0};
  int temp = 1;
  for(int i = 1; i <= n ; i++){
    v.push_back(i);
    temp *=i;
  }

  string s;
  cout<<temp<<" ";
  for(int i = n ; i>=2 ; i--){
    temp /=i;
    int idxGroup = (k + temp -1)/temp;
    s.push_back(v[idxGroup] + '0');
    // cap nhat lai k  k -=(chi so nhom -1) * (n-1)!
    k-=(idxGroup -1) * temp;
    for(int j = idxGroup ; j < v.size() ; j++)
    {
      v[j] = v[j+1];
    }
  }
  s.push_back(v[1] + '0');
  return s;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n  , k;
    cin>> n >> k;
    solve(n , k);

    return 0;
}

