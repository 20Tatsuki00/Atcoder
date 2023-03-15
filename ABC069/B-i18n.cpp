#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string s;
    cin>>s;
    
    int n=(int)s.size();
    
    cout<<s[0]<<n-2<<s[n-1];
    
    return 0;
}
