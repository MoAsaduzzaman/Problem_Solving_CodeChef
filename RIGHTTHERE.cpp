//Problem name: RIGHTTHERE
//https://www.codechef.com/problems/RIGHTTHERE

#include<iostream>
using namespace std;
int main(){
    int T,N,X,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> N >> X;
        if(N<=X){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}



