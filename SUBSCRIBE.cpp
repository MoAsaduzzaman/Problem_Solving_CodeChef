//Problem name: SUBSCRIBE
//https://www.codechef.com/problems/SUBSCRIBE

#include<iostream>
using namespace std;
int main(){
    int T,X,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X;
        if(X>30){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}