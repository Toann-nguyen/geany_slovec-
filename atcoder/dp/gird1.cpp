#include <bits/stdc++.h>
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
     int H, W;
    cin >> H >> W;

    vector<vector<int>> dp(H + 1, vector<int>(W + 1, 0));
    vector<string> grid(H);

    for (int i = 0; i < H; i++) {
        cin >> grid[i];
    }

    // Khởi tạo điểm xuất phát

    dp[1][1] = 1;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (grid[i - 1][j - 1] == '#') {
                dp[i][j] = 0; // Ô bị chặn
            } else {
                if (i > 1) dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
                if (j > 1) dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
            }
        }
    }

    cout << dp[H][W] << endl;
 return 0;
}

