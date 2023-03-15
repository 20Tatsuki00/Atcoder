#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {

    int n;
    cin>>n;
    
    vector<int>a(n+1);
    vector<bool>called(n+1);
    
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    
    for(int i=1; i<=n; i++){
        if(called[i]==0){
            //呼んだら1にするすでに呼ばれていたら分岐により次に行く
            //a[i]は呼んだ相手が格納されている
            called[a[i]]=true;
        }
    }
    int count=0;
    
    for(int i=1; i<=n; i++){
        if(called[i]==0){
            count++;
        }
    }
    cout<<count<<endl;
    
    for(int i=1; i<=n; i++){
        if(called[i]==0){
            cout<<i<<" ";
        }
    }
    return 0;
}
