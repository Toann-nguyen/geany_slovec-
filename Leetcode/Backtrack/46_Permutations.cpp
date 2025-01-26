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

class Solve{
vector<vector<int>>permute(vector<int>nums){
  vector<vector<int>>ans;
  vector<int>temp;
  vector<bool>visited(nums.size() , false);
  backtrack(nums , temp , ans , visited);
  return ans;
}

void backtrack(vector<int>& nums , vector<int>& temp, vector<vector<int>>& ans , vector<bool>& visited){
    //kiem tra nums , temp
    if(nums.size() == temp.size()){
      ans.push_back(temp);
    }
    
    for(int i = 0 ; i <=nums.size() ; i++){
      //dung mang danh dau xem visited xem la true hay false sau do
      //push_back(nums[i]) vao bang temp  sau do backtrack() 

}
};

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
  return 0;
}

