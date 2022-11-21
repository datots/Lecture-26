/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int check(int num1,int index){
    if(num1<2){
        return 0;
    }
    if(num1==2 || num1==3){
        return 1;
    }
    if(num1 % index == 0){
        return 0;
    }
    if(index <= num1 / 2){
        return 1;
    }
    int result =check(num1,index+1);

    return(result);
}
int main()
{
    int num;
    cout<<"Enter number: ";
    cin >> num;
    if(check(num,2)==1){
              cout <<num<<" is a Prime number !";
   }
   else{
      cout <<num<<" is non Prime!";
   }
    return 0;
}