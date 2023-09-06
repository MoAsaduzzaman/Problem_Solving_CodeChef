//Problem name: WATERCONS
//https://www.codechef.com/problems/WATERCONS

#include<iostream>
using namespace std;
int main(){
    int T,X,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X;
        if(X>=2000){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}