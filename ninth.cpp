/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void reverse(char * str){
    if(*str == '\0'){
        return;
    }else{
        reverse(str + 1);
        cout<<*str;
    }
}


int main()
{
    char str[] = "Hello World";
    cout<<"Original String: "<<str<<endl; 
    cout<<"Reversed String: "; 
    reverse(str); 
   return 0; 

    return 0;
}