//Problem name: MINCARS 
//https://www.codechef.com/problems/MINCARS

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N;
    cin >> T;
    while(T--){
        cin >> N;
        if(N%4==0){
            cout << N/4 << endl;
        }else{
            cout << (N/4)+1 << endl;
        }
    }
    
    return 0;
}