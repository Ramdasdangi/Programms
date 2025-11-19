#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[105];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ope = 0;

        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {
                
               

                if (arr[i] + arr[j] == 4) {
                    // delete arr[j]
                
                    for (int k = j; k < n - 1; k++)
                        arr[k] = arr[k + 1];

                    n--;       // reduce size
                    ope++;     // delete count
                    j--;      // re-check new element at j
                    
                    
                
                }
            
            }
        }

        cout << ope << endl;
    }

    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        int c1 = 0, c2 = 0, c3 = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] == 1) c1++;
            else if (A[i] == 2) c2++;
            else if (A[i] == 3) c3++;
        }

        // Handle forbidden pairs
        int deletions = 0;

        // For 2s: only one can remain
        if (c2 > 1) deletions += (c2 - 1);

        // For 1s and 3s: cannot coexist
        deletions += min(c1, c3);

        cout << deletions << "\n";
    }
    return 0;
}
*/