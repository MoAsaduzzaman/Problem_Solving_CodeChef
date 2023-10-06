//Problem name: CHN15A
//https://www.codechef.com/problems/CHN15A

#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,K;
    cin >> T;
    while(T--){
        int count = 0;
        cin >> N >> K;

        vector <int> num(N);

        for(int i=0; i<N; i++){
            cin >> num[i];
            num[i]+=K;
            if(num[i]%7==0){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}