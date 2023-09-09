//Problem name: SPECIALITY
//https://www.codechef.com/problems/SPECIALITY

#include<iostream>
using namespace std;
int main(){

    int T,X,Y,Z;

    cin >> T;

    while(T--){

        cin >> X >> Y >> Z;

        if(X>Y && X>Z){
            cout << "Setter" << endl;
        }
        if(Y>X && Y>Z){
            cout << "Tester" << endl;
        }
        if(Z>X && Z>Y){
            cout << "Editorialist" << endl;
        }

    }
    
    return 0;
}