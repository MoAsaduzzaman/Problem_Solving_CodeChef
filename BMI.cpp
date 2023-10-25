//Problem name: BMI
//https://www.codechef.com/problems/BMI

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin >> T;
    while(T--){
        int M,H;
        cin >> M >> H;
        int div = M/(pow(H,2));

        if(div<=18){
            cout << 1 << endl;
        }else if(div>=19 && div<=24){
            cout << 2 << endl;
        }else if(div>=25 && div<=29){
            cout << 3 << endl;
        }else{
            cout << 4 << endl;
        }
    }
    return 0;
}