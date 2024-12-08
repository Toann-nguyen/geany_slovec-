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
// make prefix sum counting elememnt
	int countRangeSum(vector<int>& nums , int lower , int upper){
		int n = nums.size();
		vector<ll> prefix(n+ 1 , 0);
	for(int i = 0 ; i< n ; i++)
			prefix[i+ 1] = prefix[i] + nums[i];

	set<ll> sortSum;
	sortSum.insert(0);

	int ans = 0;
// for prefix sum and lower_bound , upper_bound count sum 
	ll sum = 0;
	for(int i = 0; i < n ; i++){
		sum+= nums[i]
		auto it_lower = sortSum.lower_bound(sum - upper);
		auto it_upper = sortSum.upper_bound(sum - lower);
		
		ans += distance(it_lower, it_upper);
		sortSum.insert(sum);
		}
		return ans;
	}
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

