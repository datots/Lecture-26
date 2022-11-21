/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void array(int arr[],int size){
    
    static int i;
    
    if(i == size){
        i = 0;
        cout <<endl;
        return;
    }
    cout<<arr[i]<<" ";
    i++;
    
    array(arr,size);
}
 

int main()
{   
    int arr[] = { 3, 5, 6, 8, 1 };
    cin >> arr[];
    int n = sizeof(arr) / sizeof(arr[0]);
    
    array(arr,n);
    
    return 0;
}