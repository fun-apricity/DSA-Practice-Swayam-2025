#include <iostream>
using namespace std;

// Recursive function to reverse the array
void reverseArray(int arr[], int start, int end) {
    // Base case: stop when start >= end
    if (start >= end)
        return;

    // Swap the current elements
    swap(arr[start], arr[end]);

    // Recursive call for the remaining array
    reverseArray(arr, start + 1, end - 1);
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Call recursive reverse function
    reverseArray(arr, 0, n - 1);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
