#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //ifstream in("input.txt");
    //cin.rdbuf(in.rdbuf());
    
    vector<vector<int>> c(3,vector<int>(3));
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>c[i][j];
        }
    }
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(c[i][j]-c[i][j+1]==c[i+1][j]-c[i+1][j+1]){
                continue;
            }else{
                cout<<"No";
                return 0;
            }
        }
    }
    cout<<"Yes";
    return 0;
}
