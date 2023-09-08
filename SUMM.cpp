//Problem no: SUMM
//https://www.codechef.com/problems/SUMM

#include<iostream>
using namespace std;
int main(){
    int T,A,B,C,i,sum;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> A >> B >> C;
        sum = (A+B);
        if(sum==C){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}