
#include<bits/stdc++.h> 
using namespace std; 


class Solution{   
public:
    string printMinNumberForPattern(string S){
        int n=1;
        int ans=0;
        stack<int> st;
        for(int i=0;i<S.length();i++){
            if(S[i]=='D'){
                st.push(n);
                n++;
            }else{
               st.push(n);
               n++;
               while(!st.empty()){
                   int num=st.top();
                   st.pop();
                   ans=ans*10+num;
               }
            }
        }
        st.push(n);
        while(!st.empty()){
                   int num=st.top();
                   st.pop();
                   ans=ans*10+num;
               }
        return to_string(ans);       
    }
};



int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  