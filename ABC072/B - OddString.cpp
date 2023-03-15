#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
  
    string s;
    cin>>s;
    int n=(int)s.size();
    
    for(int i=0; i<n;i=i+2){
        cout<<s[i];
    }
    return 0;
}
