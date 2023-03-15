#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
   
    long long int n;
    cin>>n;
    
    vector<int> a(3*n);
    
    for(int i=0; i<3*n; i++){
        cin>>a[i];
    }
    
    sort(a.begin(), a.end());
    
    long long int sum=0;
    
    for(int i=n;i<3*n;i+=2){
        sum+=a[i];
    }
    
    cout<<sum;
    return 0;
}
