//Problem name: DOMINANT
//https://www.codechef.com/problems/DOMINANT

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,NA,NB,NC;
    cin >> T;
    while(T--){
        int max=0;
        cin >> NA >> NB >> NC;
        if(NA>(NB+NC)){
            cout << "YES" << endl;
        }else if(NB>(NA+NC)){
            cout << "YES" << endl;
        }else if(NC>(NA+NB)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }   
    }
    return 0;
}