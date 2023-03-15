//
//  main.cpp
//  A-RGB card
//
//  Created by kawauchi tatsuki on 2023/03/07.
//

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a*100+b*10+c%4==0){
        cout<<"Yes"<<endl;
    }else cout<<"No"<<endl;
    return 0;
}
