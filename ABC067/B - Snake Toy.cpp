#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //ifstream in("input.txt");
    //cin.rdbuf(in.rdbuf());
    
    int n,k;
    cin>>n>>k;
    
    vector<int>a(n);
    
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    
    int ans=0;
    for(int i=0;i<k;i++){
        ans+=a[n-1-i];
    }
    
    cout<<ans;
    
    return 0;
}
