/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a=0,i,rem, reverse;    
for (i=10000; i<100000; i++) {
        rem=i%10;      
        reverse=reverse*10+rem;    
        i/=10;  
     if (i*4 == reverse){
         cout << i;
     }
}
    return 0;
}
