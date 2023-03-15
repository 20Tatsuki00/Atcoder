#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string s;
    cin>>s;
    int count=0;
    
    for(int i=0;i<3;i++){
        if(s[i]=='1'){
            count++;
        }
    }
    
    cout<<count;
    return 0;
}
