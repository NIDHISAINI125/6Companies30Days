
#include <bits/stdc++.h>
using namespace std;






class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(k<=1) return 0;
        
        long long int count=0;
        int s=0;
        int e=0;
        long long int p=1;
        while(e<n){
            p=p*a[e];
            while(p>=k){
                p=p/(a[s]);
                s++;
            }
            
                count+=e-s+1;
                e++;
            
        }
        return count;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
