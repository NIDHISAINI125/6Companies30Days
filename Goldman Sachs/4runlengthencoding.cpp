
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}

string encode(string src)
{  char temp=src[0];
    int count=1;
    string ans="";
  for(int i=1;i<src.length();i++){
      if(src[i]==temp){
         
          count++;
          temp=src[i];
          
      }
      else{
          ans+=temp+to_string(count);
          temp=src[i];
          
          count=1;
      }
      
  }
  
  ans+=temp+to_string(count);
  
  return ans;
}     
 
