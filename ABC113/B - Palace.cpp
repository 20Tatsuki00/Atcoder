#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {

    int n,t,a;
    cin>>n>>t>>a;
    
    vector<int>h(n);
    
    int ans=1;
    
    cin>>h[0];
    double tem=t-h[0]*0.006;
    
    for(int i=1;i<n; i++){
        cin>>h[i];
        if(abs(tem-a)>abs(a-(t-h[i]*0.006))){
            tem=t-h[i]*0.006;
            ans=i+1;
        }
    }
    cout<<ans;
   
    return 0;
}
