#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        long long total = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }
        
        if (total % x != 0) {
            cout << n << endl;
            continue;
        }
        
        int left = 0;
        while (left < n && a[left] % x == 0) {
            left++;
        }
        
        int right = n - 1;
        while (right >= 0 && a[right] % x == 0) {
            right--;
        }
        
        if (left == n) {
            cout << -1 << endl;
        } else {
            int len1 = n - left - 1;
            int len2 = right;
            cout << max(len1, len2) << endl;
        }
    }
    
    return 0;
}
