#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    
    int i,j;
    int count=0;
    
    for(i=0;i<=100;i+=4){
        for(j=0;j<=100;j+=7){
            if(n==i+j) count++;
        }
    }
    if(count!=0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}
