#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
  
    
    string s;
    cin>>s;
    int n=(int)s.size();
    
    cout<<"2018";
    
    for(int i=4;i<n;i++){
        cout<<s[i];
    }
    
    return 0;
}
