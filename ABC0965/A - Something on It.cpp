#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //ifstream in("input.txt");
    //cin.rdbuf(in.rdbuf());
    
    string s;
    cin>>s;
    int value=700;
    
    for(int i=0;i<3;i++){
        if(s[i]=='o'){
            value+=100;
        }
    }
    
    cout<<value;
    
    return 0;
}
