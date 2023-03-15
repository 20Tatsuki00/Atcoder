#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
   
    string s;
    cin>>s;
    
    bool alf[26]={false};
    
    for(int i=0; i<(int)s.size();i++){
        int t=s[i]-'a';
        cout<<t<<(int)'a'<<endl;
        alf[t]=true;
    }
   
    for(int i=0;i<26;i++){
        if(alf[i]==false){
            char c='a'+i;
            cout<<c<<endl;
            return 0;
        }
    }
    
    cout<<"None";
    
    return 0;
}
