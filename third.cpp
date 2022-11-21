/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


void fibo(int n){
    static int n1 = 0,n2 = 1,n3;
    
    if(n>0){
        n3=n1+n2;
        n1=n2;
        n2=n3;
    cout<<n3<<" ";
        fibo(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Fib series: ";
    
    
    fibo(n-2);
    return 0;
}