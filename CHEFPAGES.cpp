//Problem name: CHEFPAGES
//https://www.codechef.com/problems/CHEFPAGES

#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    
    if(A==0){
        cout << "https://www.codechef.com/practice" << endl;
    }else if(A==1 && B==0){
        cout << "https://www.codechef.com/contests" << endl;
    }else{
        cout << "https://discuss.codechef.com" << endl;
    }
    return 0;
}