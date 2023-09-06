//Problem name: DATESCORE
//https://www.codechef.com/problems/DETSCORE

#include<iostream>
using namespace std;
int main(){
    int T,X,N,i,a,b;

    cin >> T;
    
    for(i=0; i<T; i++){
        cin >> X >> N;
        a=X/10;
        b=a*N;
        cout << b << endl;
    }

    return 0;
}
