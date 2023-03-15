#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,x;
    cin>>n>>x;
    
    vector<int>a(n);
    
    int sum=0;
    int min=1e9;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(min>a[i]){
            min=a[i];
        }
    }
    
    cout<<n+(x-sum)/min<<endl;
    
}
