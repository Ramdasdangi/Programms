#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        int xetat=m - n;
        if (m >= n && xetat % 2 == 0 &&  m <= 3*n) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        int xetat=m - n;
        if (m >= n && xetat % 2 == 0 &&  m <= 3*n) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
*/