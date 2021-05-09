/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;


int main()
{
    char word[]="gabriel";
    int size = strlen(word);
    char invert_word[size];
    for(int a=size-1;a>=0;a--){
        invert_word[a] = word[(size-1) - a];
    }
    
    cout << invert_word;
    
    return 0;
}
