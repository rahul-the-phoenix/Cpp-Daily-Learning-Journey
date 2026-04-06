// kadane's Algorithm is Used to get maximum subarray sum
// array must be like          [ -2, 1, -3, 4, -1, 2, 1, -5, 4 ]  positive negative mix 
// famouse because of O(n) time complexity and O(1) space complexity
// real life uses : Stock Market Analysis , Data Analysis , Game Devlopment 

// IMPORTANT QUESTIONS : 
// Maximum Subarray Sum
// Maximum Subarray with indices
// Circular array max sum
// Maximum product subarray (variation)

// =========ALGORITHM:=================================
// 1. current_sum = arr[0]
// 2. max_sum = arr[0]

// 3. for i = 1 to n-1:
//        current_sum = max(arr[i], current_sum + arr[i])
//        max_sum = max(max_sum, current_sum)
// 4. return max_sum

// ONE LINE: if negative then reset, else add

#include <iostream>
#include <climits>               //for using INT_MIN
using namespace std;

int main() {
    int arr[] = {-2,2,-3,4,-1,2,-3,5,-4};
    int n = 9;

    int current_sum = 0;
    int max_sum = INT_MIN;       //lowest integer

    for(int i = 0; i < n; i++) {
        current_sum += arr[i];    

        if(current_sum > max_sum)
            max_sum = current_sum;

        if(current_sum < 0)
            current_sum = 0;
    }

//   int current_sum = arr[0];
// int max_sum = arr[0];

// for(int i = 1; i < n; i++) {                                // classical kadane algorithm problem
//     current_sum = max(arr[i], current_sum + arr[i]);
//     max_sum = max(max_sum, current_sum);
// }

    cout << "Maximum Subarray Sum: " << max_sum;
}
