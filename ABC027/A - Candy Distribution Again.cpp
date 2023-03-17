#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //ifstream in("input.txt");
    //cin.rdbuf(in.rdbuf());
    
    int n,x;
    cin>>n>>x;
    
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    
    //a[i]の和がxを超えた時
    //elseはあまりがある時
    for(int i=0; i<n;i++){
        
        x-=a[i];
        
        if(x<0){
            cout<<i;
            return 0;
        }
    }
    //a[i]の和がxと一致した時
    if(x==0){
        cout<<n;
    }else cout<<n-1;
    
    return 0;
}
