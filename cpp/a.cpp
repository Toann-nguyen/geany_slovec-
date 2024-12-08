#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define debug(x) cout << #x << " = " << x << endl

void solve() {

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    

    int n , k;
	cout<< " nhap n , k";
	cin>>n >> k;
	vector<int> h(n);
	for(int i = 0; i<= n ; i++){
		cin>> h[i];
		}
	vector<int> dp(n , 0);
	dp[0] = 0;
	for(int i = 1 ; i< n ; i++){
		for(int j = 0 ; j <=i ;j++){
			dp[i] = min(dp[i] , dp[j] +abs(h[i] -h[j]));
				}
	}
	cout<< dp[n-1];
    return 0;
}

