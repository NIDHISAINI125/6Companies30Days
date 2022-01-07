

#include <bits/stdc++.h>
using namespace std;



class Solution{
public:
    string decodedString(string s){
        stack <int> counts;
        stack <string> result;
        int i=0;
        string res="";
        while(i<s.length()){
            if(isdigit(s[i])){
                int num=0;
                while(isdigit(s[i])){
                    num=10*num +s[i]-'0';
                    i++;
                }
                counts.push(num);
            }
            else if(s[i]=='[')
            {
                result.push(res);
                res="";
                i++;
            }
            else if(s[i]==']'){
                string temp=result.top();
                result.pop();
                int c=counts.top();
                counts.pop();
                for(int j=0;j<c;j++ )
                {
                    temp+=res;
                }
                res=temp;
                i++;
            }
            else{
                res+=s[i];
                i++;
            }
            
        }
        
        return res;
    }
};



int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  