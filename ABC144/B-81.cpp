#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int find=0;
    
    for(int i=1;i<=9;i++){
        for(int j=i;j<=9;j++){
            if(n==i*j){
                find++;
                break;
            }
            
        }
        if(find!=0) break;
    }
    if(find!=0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
