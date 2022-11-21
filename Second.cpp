/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int sum(int n){
    if(n<=1){
        return n;
    }
    return n + sum(n-1);
}

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    
    cout<<sum(n);
    return 0;
}