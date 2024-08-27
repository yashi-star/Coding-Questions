// //suppose you are given two integer array A and B whose length is same n 
// //you have to choose the optimal path to reach from a[0] to b[n] and return maximum value of optimal path

#include<iostream>
#include<climits>
using namespace std;

int solve(int A[], int B[], int n) {
    int mini = INT_MAX;

    for (int i = 1; i < n; i++) {
        A[i] = max(A[i - 1], A[i]);
    }
    for(int i = n - 2; i >= 0; i--) {
        B[i] = max(B[i + 1], B[i]);
    }
    for(int i = 0; i < n; i++) {
        mini = min(mini, max(A[i], B[i]));
    }
    return mini;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n], b[n];
    cout << "Enter elements of array A: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i]; 
    }
    cout << "Enter elements of array B: ";
    for (int i = 0; i < n; ++i) {
        cin >> b[i]; 
    }
    int ans = solve(a, b, n);
    cout << "Max value of optimal path is " << ans;
}
