#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //ifstream in("input.txt");
    //cin.rdbuf(in.rdbuf());
    
    int n,k;
    cin>>n>>k;
    int count=1;
    
    while(n/k>0){
        n/=k;
        count++;
    }
    
    cout<<count;
    return 0;
}
