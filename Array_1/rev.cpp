#include <iostream>
using namespace std;

int minOfarr(int nums[],int size){
   
    int smallest = INT8_MAX;
    for (int i = 0; i < size; i++){
        smallest = min(smallest, nums[i]);
    }
    return smallest;
}
int maxOfarr(int nums[], int size){
    int largest = INT8_MIN;
    for (int i = 0; i < size; i++){
        largest= max(largest, nums[i]);
    }
    return largest;
}
int main(){
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << minOfarr(nums, n) << endl;
    cout << maxOfarr(nums, n) << endl;
    return 0;
    
}
 