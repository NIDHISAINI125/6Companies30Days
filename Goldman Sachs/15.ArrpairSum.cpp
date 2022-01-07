
#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        unordered_map<int,int> m;
        
        for(auto i:nums){
            int rem=i%k;
            m[rem]++;
        }
        for(auto i:nums){
            int rem=i%k;
            if(rem==0){
                if(m[rem]%2!=0)
                    return false;
            }
            else if(rem*2==k){
                if(m[rem]%2!=0)
                    return false;
            }
            else if(m[rem]!=m[k-rem])
                return false;
        }
        
        return true;
    }
};


int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  