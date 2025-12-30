#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n][2];

        // input
        for (int i = 0; i < n; i++) {
            cin >> arr[i][0] >> arr[i][1];
        }

        int index = 1;
        double maxValue = (double)arr[0][0] / arr[0][1];

        for (int i = 1; i < n; i++) {
            double ratio = (double)arr[i][0] / arr[i][1];

            if (ratio > maxValue) {
                maxValue = ratio;
                index = i + 1;
            }
        }

        cout << index << endl;
    }

    return 0;
}
