#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string s;
    string b;
    
    cin>>s;
    b=s;
    int n=(int)s.size();
    
    for(int i=0;i<=n;i=i+2){
        
        s[i]=b[i+1];
        s[i+1]=b[i];
    }
    
    cout<<s<<endl;
    return 0;
}
