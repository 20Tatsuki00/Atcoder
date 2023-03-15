#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
   
    int n;
    cin>>n;
    int num[101]={0};
    vector<int>a(n);
    
    for(int i=0; i<n;i++){
        cin>>a[i];
        num[a[i]]++;
    }
    
    int count=0;
    
    for(int i=0; i<=100; i++){
        if(num[i]!=0){
            count++;
        }
    }
    
    cout<<count;
    return 0;
}
