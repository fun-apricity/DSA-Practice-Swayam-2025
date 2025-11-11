// finding minimum and maximum element
#include <iostream>
#include <climits>
using namespace std;

// Recursive function to find the minimum element
int findMin(int arr[], int n, int index = 0) {
    // Base case: last element
    if (index == n - 1)
        return arr[index];

    // Recursive call
    int minRest = findMin(arr, n, index + 1);

    // Compare current element with minimum of rest
    return min(arr[index], minRest);
}

// Recursive function to find the maximum element
int findMax(int arr[], int n, int index = 0) {
    // Base case
    if (index == n - 1)
        return arr[index];

    // Recursive call
    int maxRest = findMax(arr, n, index + 1);

    // Compare current element with maximum of rest
    return max(arr[index], maxRest);
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Minimum element: " << findMin(arr, n) << endl;
    cout << "Maximum element: " << findMax(arr, n) << endl;

    return 0;
}

