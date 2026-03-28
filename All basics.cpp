#include <iostream>  // taking input output  cin   cout   cerr  clog 
#include <cstdio> // for using like C    printf()  scanf()   fprintf()    fscanf()

// #include <format>       // is used for modern, clean, and type-safe formatted output 
                            // in C++. like python {} not supported in old version

using namespace std;  // C++ build in library stay here ( Library Container )    shortly use std:: (  std::cin  or  std::cout )

int main() {
	
	std::cout<<"i am a man \n";   // use when (  using namespace std ) not mentioned 
    cout <<"i am learning cpp\n";  //printing 
    printf("hello! i am rahul");   // use case of cstudio
	
    int rollnumber= 23;  
    cout<<"\nmy roll no is : " <<rollnumber << endl;        //endl is for instant data flash , slower then \n
    printf("\nmy roll no is %d",rollnumber);     //usecase of cstudio 
    
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
	int age ;
	cout << "enter the age: ";
	cin>> age;
	cout << "age >= 18: " << (age >= 18) << endl;     //return 1 if true else 0 if false
	cout << "age < 18: " << (age < 18) << endl;

    // Logical
    cout << "(a > 5 && num > 5): " << (a > 5 && num > 5) << endl;     // && both true then 1 else 0
    cout << "(a < 5 || num > 5): " << (a < 5 || num > 5) << endl;    // || 1 if atleast one of these is true
	 cout << "(a < 5 || num > 5): " << (a < 5 ^ num > 5) << endl;   //  ^ if both are true or false then 0 else 1


    // 4. If-Else
	int num2;
    cout << "\nIf-Else:\n";
	cout<<"enter the number to cheak even or odd: ";
	cin>> num2;
    if (num2 % 2 == 0) {
        cout << "Even Number\n";
    } else {
        cout << "Odd Number\n";
    }

	// Ternary Operator            //condition ? value_if_true : value_if_false;
	cout << (age >= 18 ? " You are Adult" : " You are Minor");     
	int temp;
	cout << "\nenter the temperature today: ";
	cin >> temp;
	cout << (temp<= 10 ? "verycold" : temp <=20 ? "normal" : temp<=30 ? "worm" : "very worm");    //best application of ternary operator

    // 6. Switch Case
    cout << "\nSwitch Case:\n";
    int choice;
    cout << "1. Add\n2. Sub\nenter your choice: ";
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
    for (int i = 1; i <= 5; i++) {      //for(; ;) infinite loop  break is the exit condition
        cout << i << " ";
    }


    //  8. While Loop
    cout << "\n\nWhile Loop:\n";    //cheak condition then do 
    int i = 1;
    while (i <= 5) {                  // while(1) or while(true) for infinite loop   break is exit condition
        cout << i << " ";
        i++; 
    }


    //  9. Do-While Loop
    cout << "\n\nDo-While Loop:\n";      // first do , then cheak condition
    int j = 1;
    do {
        cout << j << " ";
        j++;
    } while (j <= 5);

	//break and continue 
	i=0;
	while (i < 10) {
        i++; // Increment i before the condition to avoid an infinite loop
        if (i == 3) {  // Skip the current iteration when i is 3
            continue;  //  ans : 0 1 2 4 5 6 7 8 9
			//break;     // ans: 0 1 2 
        }
		cout << i << " ";   //printing 
    }
		
    return 0;
}
