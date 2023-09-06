//Problem name: TOP10
//https://www.codechef.com/problems/TOP10

#include<iostream>
using namespace std;
int main(){
    int T,X,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X;
        if(X>=0 && X<=10){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}