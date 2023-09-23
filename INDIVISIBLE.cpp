//Problem name: INDIVISIBLE
//https://www.codechef.com/problems/INDIVISIBLE

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,A,B,C;
    cin >> T;
    while(T--){
        int i;
        cin >> A >> B >> C;
        for(i=1; i<100; i++){
            if(A%i!=0 && B%i!=0 && C%i!=0){
                cout << i << endl;
                break;
            }    
        }
    }
    return 0;
}