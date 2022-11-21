/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


int digit(long long n){
    
    if(n/10==0){
        return 1;
    }
    return 1+ digit(n/10);
}
int main(void)
{
    long long n = 345289467;
    cout << "Number of digits: "<<digit(n)<<endl;
    
    return 0;
}