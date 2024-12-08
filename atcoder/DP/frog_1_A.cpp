#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define debug(x) cout << #x << " = " << x << endl
#define N 100000000
void solve() {
	int arr[INT_MAX] , dp[INT_MAX];
	for(int i = 0 ; i < n ; i++) cin>> arr[i];

	dp[0] = 0 ; dp[1] = abs(arr[1] -h[2]);
	for(int i = 2; i<= n ; i++){
		dp = min(dp[i - 1] + abs(arr[i] - h[i-1];) , dp[i - 2] + abs(arr[i] - arr[i-2]));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

