#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define debug(x) cout << #x << " = " << x << endl
#define N 10000000000000
void solve() {
	int arr[N] , max1 , max2;
	for(int i = 0 ; i< n; i++){
		if(max[i] > max1){
     			max2= max1;
     			max1 = arr[i];}
	else if (arr[i] > max2 && arr[i] !=max1)
			max2=arr[i];
	}
	cout<< max2 <<endl;
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

