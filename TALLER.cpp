//Problem name; TALLER
//https://www.codechef.com/problems/TALLER

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y;
        if(X>Y){
            cout << "A" << endl;
        }else{
            cout << "B" << endl;
        }
    }

    return 0;
}