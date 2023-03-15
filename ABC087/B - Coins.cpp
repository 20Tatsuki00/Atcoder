#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int A,B,C,x;
    cin>>A>>B>>C>>x;
    int i,j,k;
    int count=0;
    
    for(i=0;i<=A;i++){
        for(j=0;j<=B;j++){
            for(k=0;k<=C;k++){
                int sum=500*i+100*j+50*k;
                if(x==sum){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
}
