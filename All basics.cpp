// -------------C++ OVERVIEW IN DETAILS------------------

// Founder: Bjarne Stroustrup.
// Core Idea: It is an extension of the C language, adding Object-Oriented Programming (OOP) features.
// GAME DEVLOPMENT , HIGH SPEED , IoT DEVLOPMENT , ROBOTICS , WEB BROWSERS

// Operating Systems: Windows, macOS, and parts of Linux are written in C++.
// Game Development: Powers major engines like Unreal Engine (used in games like PUBG and Fortnite).
// Browsers: Google Chrome, Firefox, and Safari use C++ for their rendering engines.
// High-Performance Apps: Used in Adobe Photoshop, Spotify, and YouTube's backend.
// Compilers: Many other programming language compilers are written in C++.

// Main Features
// Speed: Extremely fast because it is close to hardware.
// OOP: Supports Classes, Objects, Inheritance, and Polymorphism.
// Memory Control: Allows manual memory management using Pointers.
// Portability: Code can run on different platforms with minor changes.


#include <iostream>  // taking input output  cin   cout   cerr  clog 
#include <cstdio> // for using like C    printf()  scanf()   fprintf()    fscanf()
#include<cmath>  // for math operation sqrt() , pow() , abs() 
#include <cstdlib>   //for dynnamic memory allocation , random number genarator , colours 
#include<ctime>     // for random number seeding , current time cheaking 
#include <unistd.h> // for sleep()
// #include <format>       // is used for modern, clean, and type-safe formatted output 
                            // in C++. like python {} not supported in old version

using namespace std;  // C++ build in library stay here ( Library Container )    shortly use std:: (  std::cin  or  std::cout )

int main() {
	
	std::cout<<"i am a man \n";   // use when (  using namespace std ) not mentioned 
    cout <<"i am learning cpp\n";  //printing 
    printf("hello! i am rahul");   // use case of cstudio
	
    int rollnumber= 23;  
    cout<<"\nmy roll no is : " <<rollnumber << endl;        //endl = newline + buffer flush    \n = only newline (faster)
    printf("\nmy roll no is %d\n",rollnumber);     //usecase of cstudio 
    
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
    int num,num2;
    cout << "\nEnter first number: ";
    cin >> num;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "You entered: "<< num <<" and " << num2 << endl;


    // 3. Operators
    cout << "\nOperators:\n";

    // Arithmetic
    cout << "Addition: " << num + num2  << endl;
    cout << "Subtraction: " << num - num2 << endl;
    cout << "Multiplication: " << num2 * num << endl;
    cout << "Division: " << num / num2 << endl;
    cout << "Modulus: " << num % num2 << endl;
    

    // Relational
	int age ;
	cout << "\nenter the age: ";
	cin>> age;
	cout << "age >= 18: " << (age >= 18) << endl;     //return 1 if true else 0 if false
	cout << "age < 18: " << (age < 18) << endl;

    // Logical
	cout<<"\nvalue of a is: " << a << "and num is: " << num <<endl;   
    cout << "(a > 5 && num > 5): " << (a > 5 && num > 5) << endl;     // && both true then 1 else 0
    cout << "(a < 5 || num > 5): " << (a < 5 || num > 5) << endl;    // || 1 if atleast one of these is true
	 cout << "(a < 5 || num > 5): " << (a < 5 ^ num > 5) << endl;   //  ^ if both are true or false then 0 else 1


    // 4. If-Else
	int num4;
    cout << "\nIf-Else:\n";
	cout<<"enter the number to cheak even or odd: ";
	cin>> num4;
    if (num4 % 2 == 0) {
        cout << "Even Number\n";
    } else {
        cout << "Odd Number\n";
    }

	// Ternary Operator            //condition ? value_if_true : value_if_false;
	int marks;
	cout<<"\nenter the marks of your math exam : ";
	cin>> marks;
	cout << (marks >= 33 ? "You passed the exam\n" : "sorry! You failed\n ");     
	int temp;
	cout << "\nenter the temperature today: ";
	cin >> temp;
	cout << (temp<= 10 ? "verycold" : temp <=20 ? "normal" : temp<=30 ? "worm" : "very worm");    //best application of ternary operator
    cout<<endl;
    
       // 6. Switch Case
    cout << "\nSwitch Case:\n";
    int num3 = 5;
    cout <<"the number is: " << num3<<endl;
    int choice;
    cout << "1. Square\n2. Cube \nenter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Result: " << pow(num3,2) << endl;
            break;
        case 2:
            cout << "Result: " << pow(num3,3) << endl;
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
	cout<<"\n\nunderstanding break and continue statement: \n";
	cout<<"continue : ";
	while (i < 10) {
        i++; // Increment i before the condition to avoid an infinite loop
        if (i == 3) {  // Skip the current iteration when i is 3
            continue;  //  ans : 0 1 2 4 5 6 7 8 9
			//break;     // ans: 0 1 2 
        }
		cout << i << " ";   //printing 
    }
    
    srand(time(0));   // time seeding 
    int low=25 ,high=75;
    cout << endl <<"\nthe low : = " << low <<" and high is "<< high << endl;
    cout << "A random number between 0 to 100 is:  " << rand() % 101;       // 0 to 100 random number 
    printf("\nA random number between low and high is %d ", rand()%(high-low+1)+ low );  //random betwwen two number 
    
	cout<<"\nit's colour time\n";
	cout << "\033[1;91m \nI am Rahul. ";     // Bright Red + Bold
    cout << "\033[1;92m \nI have a pen. ";   // Bright Green + Bold
    cout << "\033[1;93m \nI have a dog. ";   // Bright Yellow + Bold
    cout << "\033[1;96m \nI am a man. ";     // Bright Cyan + Bold
    cout << "\033[0m";                     // Reset	to black
    cout <<"\nI am again black\n";
    
    cout<<"\nit's the sleep time"<<endl;
    cout << "Wait for 5 second \n";
    sleep(5); // 2 seconds wait
    //usleep(500000); // 0.5 second (500000 microseconds)
    cout << "5 second complete";
    
    return 0;
}
