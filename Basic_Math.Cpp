 #include <iostream>
#include <cmath>
using namespace std;

//===================count total digit in a number===================
int main (){
int num;        // number must be positive integer 
cin >> num
 int  s= log10(num) +1 ;          // total number of digit     
 cout<<s;     // number of digit 

 //===============  Reverse a digit by using Math============

 int rev=0;
 while(num>0){
     int c= num%10;
     rev= (rev*10)+c;
     num=num/10;
 }
 cout<<rev;        //print reverse 


}
