#include <iostream>
#include <vector>       // use for dynamic array we use vector

using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};  // defined input

    cout << "Vector v (Fixed): ";
    for (int i = 0; i < v.size(); i++) {    //v.size() gives size of vector
        cout << v[i] << " ";
    }
    cout << endl;

    // --- Adding User Input Vector v2 ---
    vector<int> v2;         // creating a integer vector name v2
    int n, element;

    cout << "\nHow many elements do you want to add in v2? ";
    cin >> n;

    // Taking input from user
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> element;
        v2.push_back(element); // Dynamically adding to v2
    }
    cout << "\nVector v2 (User Input): ";
    for (int i = 0; i < v2.size(); i++) {        //displaying the vector
        cout << v2[i] << " ";
    }
    cout << endl;


    // --------- 🔥 Operations on v2 ---------

    // check empty or not
    if (v2.empty()) {            //return true false
        cout << "v2 is empty" << endl;
    } else {
        cout << "v2 is not empty" << endl;
    }

    // size and capacity
    cout << "Size of v2: " << v2.size() << endl;      //current size
    cout << "Capacity of v2: " << v2.capacity() << endl;   //capacity generally 2^n = 1,2,4,8,16 

    // pop last element
    if (!v2.empty()) {          //if not empty
       // cout <<"popped eliment is :" << v2.pop_back();    //wrong cause pop_back() return void we should use pop.back() for returning last eliment 
        cout << "popped element is: " << v2.back() << endl;     //returning the last elinent
            v2.pop_back();
            
        cout << "After pop_back: ";
        for (int i = 0; i < v2.size(); i++) {    //print after popping
            cout << v2[i] << " ";
        }
        cout << endl;
    }

    // begin and end
    if (!v2.empty()) {
        cout << "First element (begin): " << *v2.begin() << endl;    //*v2.begin()= arr[0]      
        cout << "Last element (end): " << *(v2.end() - 1) << endl;   //*(v2.end())== arr[size] that never exits so that we use *(v2.end()-1)
    }

    // insert element at beginning
    v2.insert(v2.begin(), 999);                    //insertation 
    cout << "After inserting 999 at beginning: ";
    cout << "\nVector elements: ";
    for (auto it = v2.begin(); it != v2.end(); it++) {             // int should be not used here because of type mismatch as v.begin() is a itarator
        cout << *it << " ";
    }
    cout << endl;
    
    v2.clear();         //clearing all the eliments 
    cout << "After clear, size: " << v2.size() << endl;          //v2.size()==0 now
    

    return 0;
}
