#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //ifstream in("input.txt");
    //cin.rdbuf(in.rdbuf());
    
    int n;
    cin>>n;
    
    vector<int>a(n);
    
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    
    sort(a.begin(),a.end());
    
    int alice=0;
    int bob=0;
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            alice+=a[n-1-i];
        }else{
            bob+=a[n-1-i];
        }
    }
    
    cout<<alice-bob;
    return 0;
}
