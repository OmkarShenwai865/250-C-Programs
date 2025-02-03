#include <iostream>
#include <vector>
using namespace std;

// Utility function to find the minimum of two elements
int min(int x, int y) {
    return (x <= y) ? x : y;
}

// Returns the index of x if present in arr[], else returns -1
int fibonacciSearch(const vector<int>& arr, int x, int n) {
    // Initialize Fibonacci numbers
    int fibMMm2 = 0; // (m-2)'th Fibonacci No.
    int fibMMm1 = 1; // (m-1)'th Fibonacci No.
    int fibM = fibMMm2 + fibMMm1; // m'th Fibonacci

    // fibM is going to store the smallest Fibonacci Number greater than or equal to n
    while (fibM < n) {
        fibMMm2 = fibMMm1;
        fibMMm1 = fibM;
        fibM = fibMMm2 + fibMMm1;
    }

    // Marks the eliminated range from front
    int offset = -1;

    // While there are elements to be inspected
    while (fibM > 1) {
        // Check if fibMm2 is a valid location
        int i = min(offset + fibMMm2, n - 1);

        // If x is greater than the value at index i, cut the subarray from offset to i
        if (arr[i] < x) {
            fibM = fibMMm1;
            fibMMm1 = fibMMm2;
            fibMMm2 = fibM - fibMMm1;
            offset = i;
        }
        // If x is less than the value at index i, cut the subarray after i+1
        else if (arr[i] > x) {
            fibM = fibMMm2;
            fibMMm1 = fibMMm1 - fibMMm2;
            fibMMm2 = fibM - fibMMm1;
        }
        // Element found
        else {
            return i;
        }
    }

    // Compare the last element with x
    if (fibMMm1 && arr[offset + 1] == x) {
        return offset + 1;
    }

    // Element not found
    return -1;
}

int main() {
    vector<int> arr = {10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100};
    int n = arr.size();
    int x = 85;

    int result = fibonacciSearch(arr, x, n);
    if (result == -1) {
        cout << "Element not found in the array." << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}