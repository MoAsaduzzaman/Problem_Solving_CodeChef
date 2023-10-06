//Problem name: AMR15A
//https://www.codechef.com/problems/AMR15A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector <int> man(N);

    int even=0;
    int odd=0;

    for(int i=0; i<N; i++){
        cin >> man[i];
        if(man[i]%2==0){
            even+=1;
        }else{
            odd+=1;
        }
    }

    if(even>odd){
        cout << "READY FOR BATTLE" << endl;
    }else{
        cout << "NOT READY" << endl;
    }

    return 0;
}