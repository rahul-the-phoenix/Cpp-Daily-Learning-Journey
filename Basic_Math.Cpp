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

// ============== find all the divisiors  =====================================

  int num =600;
for(int i=1;i<=sqrt(num);i++){               //till squre root of number the loop will run 
    if(num%i==0){
        cout << i <<" " << num/i << " ";
    }
}


//=====================  Find LCM without GCD ==========================

int main() {
 int num=12,num2=8;
 for(int i=1;i<=min(num,num2);i++){
     if(((i*max(num,num2))%min(num,num2))==0){                   //O(N) time complexity 
         cout <<i*max(num,num2);
         break;
     }
 }


//===================== lCM & GCD BY EUCLID METHOD ===========================

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
int num=8,num2=4;
int lcm = (num * num2) / gcd(num, num2);
cout << lcm;


}
