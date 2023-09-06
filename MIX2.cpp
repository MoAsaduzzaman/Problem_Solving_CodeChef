//Problem name: MIX2
//https://www.codechef.com/SEP23D/problems/MIX2
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        long long sum = 0;

        for (int i = 0; i < N; i++) {
            for (int j = i + 1; j < N; j++) {
                long long mix = (long long)A[i] * A[j];
                sum += mix;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
