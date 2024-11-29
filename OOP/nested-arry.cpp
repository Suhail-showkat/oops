#include <iostream>
using namespace std;

void findSubsets(int arr[], int n, int target, int subset[], int subsetSize, int index) {
    int sum = 0;
    
 
    for (int i = 0; i < subsetSize; ++i) {
        sum += subset[i];
    }

 
    if (sum == target) {
        cout << "[ ";
        for (int i = 0; i < subsetSize; ++i) {
            cout << subset[i] << " ";
        }
        cout << "]" << endl;
    }

   
    if (sum >= target || index == n) return;

    subset[subsetSize] = arr[index];
    findSubsets(arr, n, target, subset, subsetSize + 1, index + 1); 

  
    findSubsets(arr, n, target, subset, subsetSize, index + 1);
}

int main() {
    int arr[] = {2, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the target sum: ";
    cin >> target;

    cout << "Subsets with a sum equal to " << target << " are:\n";
    int subset[100];
    findSubsets(arr, n, target, subset, 0, 0);

    return 0;
}