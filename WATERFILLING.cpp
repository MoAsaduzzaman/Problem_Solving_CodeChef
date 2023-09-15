//Problem name: WATERFILLING
//https://www.codechef.com/problems/WATERFILLING

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,B1,B2,B3;
    cin >> T;
    while(T--){
        cin >> B1 >> B2 >> B3;
        if(B1==1 && B2==1 && B3==1){
            cout << "Not now" << endl;
        }else if(B1==1 && B2==1 && B3==0){
            cout << "Not now" << endl;
        }else if(B1==1 && B2==0 && B3==1){
            cout << "Not now" << endl;
        }else if(B1==0 && B2==1 && B3==1){
            cout << "Not now" << endl;
        }else{
            cout << "Water filling time" << endl;
        }
    }

    return 0;
}