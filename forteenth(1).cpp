/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


void even(int l,int r){
    if(r<l){
        return;
    }
    
    r% 2 == 0 ? even(l,r-2)
              : even(l,r-1);
    
    if(r%2==0){
        cout<<r<<" ";
    }          
}

void odd(int l,int r){
    if(r<l){
        return;
    }
    
    r%2==1 ? odd(l,r-2)
           : odd(l,r-1);
    
    if(r%2 ==1){
        cout<<r<<" ";
    }       
}
int main()
{
  int l = 10, r = 25;
    cout << "Even numbers:";
 

    even(l, r);
    cout << endl;
 

    cout << "Odd numbers:";
    odd(l, r);
}