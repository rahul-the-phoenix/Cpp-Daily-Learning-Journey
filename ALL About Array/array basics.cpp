#include <iostream>
#include<algorithm>
// #define size 100   using for predefine the size 
using namespace std;

int main() {
	  // int arr[5] = {10, 20, 30, 40, 50};      // for pre define the values(exact 5 valuees )
	  // int arr[] = {10, 20, 30, 40, 50};     // not predefined size 
	  // int arr[5] = {10, 20, 50};        // now array eliments are  (10,20,50,0,0)
	  // int n = sizeof(arr) / sizeof(arr[0]);       //calculating the size of array 
	  
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];                         // array declaration (size must be mentioned)
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "\nArray elements are:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

	int sum = 0;
    int maxVal = arr[0], minVal = arr[0];
    for(int i = 0; i < n; i++) {
        sum += arr[i];                                     //  // 4. Sum  max  min 
        if(arr[i] > maxVal) maxVal = arr[i];
        if(arr[i] < minVal) minVal = arr[i];
    }
    cout << "\nSum = " << sum;
    cout << "\nMaximum = " << maxVal << " | Minimum = " << minVal << endl;
  
    return 0;
}
