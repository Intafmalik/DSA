#include <iostream>
#include <vector>
using namespace std;

// Helper function to check if the current mid value is a valid allocation.
bool isValid(vector<int> &arr, int n, int m, int maxAllowedPage) {
    int students = 1, pages = 0;
    for (int i = 0; i < n; i++) {
        // If a single book has more pages than maxAllowedPage, it's invalid.
        if (arr[i] > maxAllowedPage) return false;

        if (pages + arr[i] <= maxAllowedPage) {
            pages += arr[i];  // Add current book to the student's allocation.
        } else {
            students++;       // Assign new student.
            pages = arr[i];   // Start with the current book.

            // If the number of students exceeds m, return false.
            if (students > m) return false;
        }
    }
    return true;
}

// Function to find the minimum possible maximum page allocation.
int allocationBook(vector<int> &arr, int n, int m) {
    if (m > n) return -1;  // If students are more than books, allocation is not possible.

    int sum = 0, maxPages = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];       // Total sum of all pages.
        maxPages = max(maxPages, arr[i]);  // Maximum pages in a single book.
    }

    int ans = -1;
    int st = maxPages, end = sum;  // Binary search between maxPages and sum.

    while (st <= end) {
        int mid = st + (end - st) / 2;

        if (isValid(arr, n, m, mid)) {
            ans = mid;       // Found a valid allocation, try for a smaller value.
            end = mid - 1;
        } else {
            st = mid + 1;    // Increase mid to find a valid allocation.
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocationBook(arr, n, m) << endl;
    return 0;
}
