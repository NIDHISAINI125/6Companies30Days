
#include<bits/stdc++.h>
using namespace std;


class Solution {
	public:
		int CountWays(string str){
		    if(str[0]=='0')
		        return 0;
		    int n=str.length()+1;
		    int dp[n];
		    dp[0]=1;
		    const unsigned int M = 1000000007;
		    for(int i=1;i<str.length();i++){
		        
		        if(str[i-1]=='0' and str[i]=='0'){
		            dp[i]=0;
		        }
		        
		        
		        else if(str[i-1]=='0' and str[i]!='0'){
		            dp[i]=dp[i-1];
		        }
		        
		        else if(str[i-1]!='0' and str[i]=='0'){
		            if(str[i-1]=='1' || str[i-1]== '2'){
		                dp[i]=(i>=2?dp[i-2]:1);
		            }
		            else{

		                dp[i]= 0;
		            }
		        }
		        
		        else if(str[i-1]!='0' and str[i]!='0'){
		            
		            if(str[i-1]=='1'|| str[i-1]=='2' && str[i]<'7'){
		                dp[i]=(dp[i-1]+(i>=2?dp[i-2]:1))%M;
		                
		            }
		            else{
		                
		                
		                dp[i]=dp[i-1];
		                
		            }
		        }
		    }
		    
		    return dp[str.length()-1];
		}

};


int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.CountWays(str);
		cout << ans << "\n";
	}
	return 0;
}  