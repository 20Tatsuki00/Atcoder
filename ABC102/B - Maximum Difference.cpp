#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    
    vector<int> a(n);
    
    cin>>a[0];
    
    int max=a[0],min=a[0];
    
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]>=max) max=a[i];
        if(a[i]<=min) min=a[i];
    }
    
    cout<<max-min<<endl;
}
