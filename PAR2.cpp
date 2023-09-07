//Problem name: PAR2
//https://www.codechef.com/problems/PAR2

#include<iostream>
using namespace std;
int main(){
    int T,N,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> N;
        if(N%2==0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}