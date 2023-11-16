//Problem name: CPRIVAL 
//https://www.codechef.com/START108D/problems/CPRIVAL

#include<bits/stdc++.h>
using namespace std;
int main(){
    int R1,R2,D1,D2;
    cin >> R1 >> R2 >> D1 >> D2;

    int domin = R1+(D1);
    int eve = R2+(D2);

    if(domin>eve){
        cout << "Dominater" <<endl;
    }else if(eve>domin){
        cout << "Everule" << endl;
    }
    return 0;
}
