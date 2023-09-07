//Problem name: JERRYCHASE
//https://www.codechef.com/problems/JERRYCHASE

#include<iostream>
using namespace std;
int main(){
    int T,X,Y,i;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> X >> Y;
        if(X>=Y){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}