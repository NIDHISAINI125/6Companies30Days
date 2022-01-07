#include <bits/stdc++.h>
using namespace std;

    int minSubArrayLen(int target, vector<int>& nums) {
        int res=INT_MAX;
        int left=0;
        int sumTillHere=0;
        int n =nums.size();
        for(int i =0;i<n;i++){
            sumTillHere+=nums[i];
            while(left<=i && sumTillHere-nums[left]>=target) {sumTillHere-=nums[left++];}
            if(target<=sumTillHere) 
                res=min(res,i-left+1);
        }
        
        return res==INT_MAX?0:res;
    }

int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str1,str2;
		cin>>str1>>str2;
		
		cout<<gcdOfStrings(str1,str2)<<endl;
	}
	return 0;
}