//Problem name: JASSIGNMENTS
//https://www.codechef.com/problems/JASSIGNMENTS

#include<iostream>
using namespace std;
int main(){

    int T,X;

    cin >> T;

    while(T--){

        cin >> X;

        if(3*1<=(10-X)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}