//Problem name: TSORT
//https://www.codechef.com/problems/TSORT

#include<iostream>
#include<algorithm>
using namespace std;
int main(){

    int N,arr[1000001];

    cin >> N;

        for(int i=0; i<N; i++){
        cin >> arr[i];
        }

        sort(arr,arr+N);

        for(int i=0; i<N; i++){
            cout << arr[i] << endl;
        }

    return 0;
}
