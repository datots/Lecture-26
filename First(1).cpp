/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void display(int num){
    if(num){
        display(num-1);
    }else{
        return;
    }
    cout<<"\n Numbers: "<<num;
}
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    display(num);
    return 0;
}