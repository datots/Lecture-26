/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int digit_sum(int n){
    
    if(n == 0){
        return 0;
    }return(n%10+digit_sum(n/10));
}

int main()
{
    int num = 678910;
    int sum = digit_sum(num);
    cout << "Sum of: "<<num<<" is: "<<sum<<endl;

    return 0;
}