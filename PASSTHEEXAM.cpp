//Problem name: PASSTHEEXAM
//https://www.codechef.com/problems/PASSTHEEXAM

#include<bits/stdc++.h>
using namespace std;
int main(){

    int T,A,B,C;
    cin >> T;

    while(T--){
        cin >> A >> B >> C;
        if((A+B+C)>=100 && A>=10 && B>=10 && C>=10){
            cout << "PASS" << endl;
        }else{
            cout << "FAIL" << endl;
        }
    }

    return 0;
}