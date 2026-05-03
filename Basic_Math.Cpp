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



//=======================  palindrome or not  ================

  int num =3883;
  int num2=num;            //copy to num2 for save he number 
   int rev=0;
 while(num>0){
     int c= num%10;
     rev= (rev*10)+c;           //find reverse 
     num=num/10;
 }

num2==rev ? cout<<"palindrome" : cout <<"not";         //compare

//====================  armstrong number cheaking ====================

  int num =371;
  int num2=num;
int s= log10(num)+1;     // total number of digit 
int sum=0;
while(num >0){
  sum+=pow((num%10),s);    //armstrong number logic
  num=num/10;
}
num2==sum ? cout <<"armstrong" : cout <<" not";






}
