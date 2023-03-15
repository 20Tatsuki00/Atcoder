#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumes(int n){
    int ans=0;
    
    while(n>0){
        ans+=n%10;
        n/=10;
    }
    return ans;
}

int main(int argc, const char * argv[]) {
  
    int n;
    cin>>n;
    
    int a,b;
    cin>>a>>b;
    //cout<<n<<a<<b<<endl;
    
    int total=0;
    
    for(int i=0; i<=n; i++){
        if(sumes(i)>=a && b>=sumes(i)){
            total+=i;
        }
    }
    
    cout<<total<<endl;
        return 0;
}
