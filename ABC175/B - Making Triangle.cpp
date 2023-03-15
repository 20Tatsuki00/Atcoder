#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int count=0;
    
    vector<int>l(n);
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    sort(l.begin(),l.end());
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
             
                if(l[i]!=l[j] && l[j]!=l[k] && l[i]+l[j]>l[k]){
                    count++;
                    
                }
            }
        }
    }
    cout<<count<<endl;
}
