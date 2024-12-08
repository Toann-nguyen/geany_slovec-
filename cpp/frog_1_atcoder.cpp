#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define debug(x) cout << #x << " = " << x << endl

const ll N = 2e5 + 5;
void solve() {
	
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int dp[N] , h[N], n;
  
    cin>>n;
 
    for (int i = 1; i <= n; i ++)
        cin >> h[i];

    dp[1] = 0; dp[2] = abs(h[1] - h[2]);

    for (int i = 3; i <= n; i ++)
        dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));

    cout << dp[n];

    return 0;
}

