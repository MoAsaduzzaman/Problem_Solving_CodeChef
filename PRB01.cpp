//Problem name: PRB01 Primality Test
//https://www.codechef.com/problems/PRB01

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N;
    cin >> T;
    while(T--){
        int i,cnt=0;
        cin >> N;
        if(N==1){
            cnt+=1;
        }
        for(i=2; i<N/2; i++){
            if(N%i==0){
                cnt++;
            }
        }   
        if(cnt!=0){
            cout << "no" << endl;
        }else{
            cout << "yes" << endl;
        }  
    }
    return 0;
}