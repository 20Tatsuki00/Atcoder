#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {

    string s;
    cin>>s;
    
    int n=(int)s.size();
    int a=0;
    int z=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            a=i-1;
            break;
        }
    }
    
    for(int i=n-1; 0<i; i--){
        if(s[i]=='Z'){
            z=i;
            break;
        }
    }
    
    cout<<z-a;
    return 0;
}
