//Problem name: CHEFGAMES
//https://www.codechef.com/problems/CHEFGAMES

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,R1,R2,R3,R4;
    cin >> T;
    while(T--){
        cin >> R1 >> R2 >> R3 >> R4;
        if(R1==0 && R2==0 && R3==0 && R4==0){
            cout << "IN" << endl;
        }else{
            cout << "OUT" << endl;
        }
    }

    return 0;
}