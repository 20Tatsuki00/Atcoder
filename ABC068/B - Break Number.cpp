#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
  
    int n;
      cin>>n;
      int i=0;
      int ans=1;
      while(n>=pow(2,i)){
          
          ans=(int)pow(2,i);
          i++;
      }
      
      cout<<ans<<endl;
    return 0;
}
