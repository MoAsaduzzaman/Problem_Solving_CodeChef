//Problem name: EQUALDIST
//https://www.codechef.com/problems/EQUALDIST

#include<iostream>
using namespace std;
int main(){
    int T,A,B,i,ans;

    cin >> T;

    for(i=0; i<T; i++){
        cin >> A >> B;
        ans = A+B;

        if(ans%2==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}