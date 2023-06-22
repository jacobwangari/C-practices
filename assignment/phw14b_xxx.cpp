/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a=0,i;    
for (i=10000; i<100000; i++) {
        if (i%2 == 0){
                a=a+1;}
    }
    cout <<a;

    return 0;
}
