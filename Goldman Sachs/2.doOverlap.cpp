

#include <bits/stdc++.h>
using namespace std;

 

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
   
        int x=0,y=1;
        if(L1[x]>R2[x]||L2[x]>R1[x])
            return 0;
        if(L1[y]<R2[y] || L2[y]<R1[y])
            return 0;
        
        return 1;    
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}