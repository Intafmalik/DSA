#include <iostream>
#include <vector>
#include <algorithm>  // For max function
using namespace std;

// Helper function to check if it is possible to paint all sections
// with the given maximum allowed time.
bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime) {
    int painters = 1, time = 0;

    for (int i = 0; i < n; i++) {
        // If a single section takes more time than the allowed limit, it's not possible.
        if (arr[i] > maxAllowedTime) return false;

        if (time + arr[i] <= maxAllowedTime) {
            time += arr[i];  // Add this section to the current painter's workload.
        } else {
            painters++;      // Assign a new painter.
            time = arr[i];   // Start with the current section.

            // If the number of painters exceeds m, return false.
            if (painters > m) return false;
        }
    }
    return true;
}

// Function to find the minimum possible time to paint all sections.
int minTimeToPaint(vector<int> &arr, int n, int m) {
    if (m > n) return -1;  // If more painters than sections, it's not possible.

    int sum = 0, maxVal = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];              // Total time for all sections.
        maxVal = max(maxVal, arr[i]);  // Maximum time for any section.
    }

    int st = maxVal, end = sum, ans = -1;

    // Binary search to find the minimum possible maximum time.
    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isPossible(arr, n, m, mid)) {
            ans = mid;     // Valid allocation found, try for a smaller maximum time.
            end = mid - 1;
        } else {
            st = mid + 1;  // Increase mid to search for a valid allocation.
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << "Minimum time to paint all sections: " << minTimeToPaint(arr, n, m) << endl;
    return 0;
}
