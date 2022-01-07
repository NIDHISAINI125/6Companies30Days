
#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    ull arr[n];
	    arr[0]=1;
	    ull n2,n3,n5;
	    n2=n3=n5=0;
	    for(ull i=1;i<n;i++){
	        ull m2=2*arr[n2];
	        ull m3=3*arr[n3];
	        ull m5=5*arr[n5];
	        ull a=min(m2,min(m3,m5));
	        arr[i]=a;
	        if(a==m2)
	            n2++;
	        if(a==m3)
	            n3++;
	       if(a==m5)
	            n5++;
	        
	    }
	    
	    return arr[n-1];
	}
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  