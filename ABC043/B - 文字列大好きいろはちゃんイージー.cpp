#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
   // ifstream in("input.txt");
   // cin.rdbuf(in.rdbuf());
    
    int n,l;
    cin>>n>>l;
    
    vector<string> s(n);
    
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    
    sort(s.begin(),s.end());
    
    string ans;
    
    for(int i=0; i<n; i++){
        ans+=s[i];
    }
    
    cout<<ans;
    return 0;
}
