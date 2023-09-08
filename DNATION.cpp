//Problem name: DNATION
//https://www.codechef.com/problems/DNATION

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y;
        cout << Y-X << endl;
    }
    
    return 0;
}