#include <iostream>  // taking input output  cin   cout   cerr  clog 
#include <cstdio> // for using like C    printf()  scanf()   fprintf()    fscanf()

// #include <format>       // is used for modern, clean, and type-safe formatted output 
                            // in C++. like python {} not supported in old version

using namespace std;  // C++ build in library stay here ( Library Container )    shortly use std:: (  std::cin  or  std::cout )

int main() {
	
	std::cout<<"i am a man \n";   // use when (  using namespace std ) not mentioned 
    cout <<"i am learning cpp\n";  //printing 
    
    int rollnumber= 23;  
    cout<<"my roll no is : " <<rollnumber << endl;        //endl is for instant data flash , slower then \n

    
//    string name = "Rahul";
//     int roll = 23;
//     cout << format("Name: {}, Roll: {}", name, roll);         // using <format> formatting (not supported in old version)

   
    //  1. Variables & Data Types
    int a = 10;           // Integer
    float b = 5.5;        // Float
    char c = 'R';         // Character
    bool isTrue = true;   // Boolean

    cout << "Variables & Data Types:\n";
    cout << "int: " << a << endl;
    cout << "float: " << b << endl;
    cout << "char: " << c << endl;
    cout << "bool: " << isTrue << endl;


    //  2. Input / Output
    int num;
    cout << "\nEnter a number: ";
    cin >> num;
    cout << "You entered: " << num << endl;


    // 3. Operators
    cout << "\nOperators(a=10 & number entered ):\n";

    // Arithmetic
    cout << "Addition: " << a + num << endl;
    cout << "Subtraction: " << a - num << endl;
    cout << "Multiplication: " << a * num << endl;
    cout << "Division: " << a / num << endl;
    cout << "Modulus: " << a % num << endl;

    // Relational
    cout << "a > num: " << (a > num) << endl;
    cout << "a == num: " << (a == num) << endl;

    // Logical
    cout << "(a > 5 && num > 5): " << (a > 5 && num > 5) << endl;
    cout << "(a < 5 || num > 5): " << (a < 5 || num > 5) << endl;


    // 4. If-Else
    cout << "\nIf-Else:\n";
    if (num % 2 == 0) {
        cout << "Even Number\n";
    } else {
        cout << "Odd Number\n";
    }


    // 6. Switch Case
    cout << "\nSwitch Case:\n";
    int choice;
    cout << "Enter 1(Add), 2(Sub): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Result: " << a + num << endl;
            break;
        case 2:
            cout << "Result: " << a - num << endl;
            break;
        default:
            cout << "Invalid Choice\n";
    }


    // 7. For Loop
    cout << "\nFor Loop:\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }


    //  8. While Loop
    cout << "\n\nWhile Loop:\n";
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++; 
    }


    //  9. Do-While Loop
    cout << "\n\nDo-While Loop:\n";
    int j = 1;
    do {
        cout << j << " ";
        j++;
    } while (j <= 5);


    return 0;
}
