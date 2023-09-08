//Problem name: READPAGES
//https://www.codechef.com/problems/READPAGES

#include<iostream>
using namespace std;
int main(){
    int T,N,X,Y,i,mul;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> N >> X >> Y;
        mul = X*Y;
        if(mul>=N){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}