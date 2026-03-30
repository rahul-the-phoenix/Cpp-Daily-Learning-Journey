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
    
 
    //========================================================================================================================
	
    cout<<"\n======================================================================================\n";
    cout<<"\narray dsa patterns(2 pointer method) : \n"<< endl ;
    //-------------two pointer method logic------------- 
    //starting from both right and left and do operations given 
   // ?? Use cases: reverse array, pair sum (sorted), palindrome check, subarray, duplicate removing  problems
   
    
	//        while(left < right) {
	//        main working like swap,two sum  
	//        left++;
	//        right--;
	//    }
	
	cout<<"array reversing using two pointer method: ";                //array reversing using 2 pointer 
    int left = 0, right = n - 1;
    while(left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    for(int i = 0; i < n; i++) {      //printing 
        cout << arr[i] << " ";
    }

	
    
   cout<<"\n\ntwo sum using 2 pointers(array must be sorted): \n";                // two sum using 2 pointers
	
   int arr2[10]={0,2,4,6,8,9,10,15,45,48};
   cout<<"arra2 eliments are : 0  2  4  6  8  9  10  15  45  48 \n";
    n=10;
    left = 0, right = n - 1;
   	int target;
    cout << "Enter the target sum: ";
    cin >> target; // Taking target input from the user
    bool found2 = false;
	
    while (left < right) {                 //    left<=right is wrong as it takes one eliment twice 
        int currentSum = arr2[left] + arr2[right];
        if (currentSum == target) {
            cout << "Pair found: " << arr2[left] << " + " << arr2[right] << " = " << target << endl;
            found2 = true;
            break; // Stop once the pair is found
        }
        else if (currentSum < target) {
            left++; // Increase the sum by moving the left pointer to the right
        }
        else {
            right--; // Decrease the sum by moving the right pointer to the left
        }
    }
    if (!found2) {                            // that means found is not true 
        cout << "No pair found with the given target." << endl;
    }
	    

    return 0;
}
