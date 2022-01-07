#include <bits/stdc++.h>
using namespace std;


int WhOWillGet(int Items,int Students,int Start){
        if(Items<=Students-Start+1)
            return Items+Start-1;
        Items=Items-(Students-Start+1);
    return (Items % Students == 0) ? Students : (Items % Students);
}
int main(){
    cout<<WhOWillGet(8,5,2);
}