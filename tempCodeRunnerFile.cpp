#include <iostream>
using namespace std;


void findSubsets(int arr[], int n) {
    int totalSubsets = 1 << n; 

   
    for (int i = 0; i < totalSubsets; i++) {
        cout << "{ ";
        
        for (int j = 0; j < n; j++) {
            
            if (i & (1 << j)) {
                cout << arr[j] << " ";
            }
        }
        cout << "}\n";
    }
}

int main() {
    int n;


    cout << "Enter the number of elements in the set: ";
    cin >> n;

    int arr[n]; 

   
    cout << "Enter the elements of the set: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "All subsets of the given set are:\n";
    findSubsets(arr, n);

    return 0;
}