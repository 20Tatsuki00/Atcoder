#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //ifstream in("input.txt");
    //cin.rdbuf(in.rdbuf());
    
    int n;
    cin>>n;
    long long int ans_sum=1e9;
    
    vector<int>a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    
    for(int i=1;i<101;i++){
        long long int sum=0;
        for(int j=0;j<n;j++){
            sum+=(a[j]-i)*(a[j]-i);
        }
        ans_sum=min(ans_sum,sum);
    }
    
    cout<<ans_sum;
    return 0;
}
