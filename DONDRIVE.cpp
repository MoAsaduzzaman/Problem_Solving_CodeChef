//Problem name: DONDRIVE
//https://www.codechef.com/problems/DONDRIVE

#include<iostream>
using namespace std;
int main(){
    int T,X,N,i,a;
    
    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> N;
        a=X-N;
        cout << a << endl;
    }

    return 0;
}