#include <iostream>
// #define size 100   using for predefine the size 
using namespace std;

int main() {
	  // int arr[5] = {10, 20, 30, 40, 50};      // for pre define the values 
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];                         // array declaration
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "\nArray elements are:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // 4. Sum of elements
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "\nSum = " << sum;
    

    // 5. Find Maximum & Minimum
    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
        if(arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "\nMaximum = " << max;
    cout << "\nMinimum = " << min;
    

    // 6. Reverse array
    cout << "\nReversed array:\n";
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    // 7. Linear Search
    int key;
    cout << "\n\nEnter element to search: ";
    cin >> key;
    bool found = false;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index: " << i;
            found = true;
            break;
        }
    }
 	 if(!found) {   // imp concept : if found == False
        cout << "Element not found!";
    }

    return 0;
}
