/********************************
******INFINITE SERIES SUM**********
Series: cos(x) = 1 - (x^2/2!) + (x^4/4!) - .....
********************************/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int i=1;
    double x,t0,t1,R,sum,eps;
    cout << "Enter the value of x in radians :\n";
    cin >> x;
    //Initialize First Term
    t0=1;
    //Make sum equal to the first term
    sum=t0;
    do{
        //Find the ratio of the second term to the first term using already known relation
        R=-(x*x)/(2*i-1)/(2*i);
        //Calculate the second term
        t1=R*t0;
        //find the new sum
        sum=sum+t1;
        t0=t1;
        i++;
        //keep on summing terms until the required accuracy is reached
    }while(fabs(t1/sum)>0.001);
    cout << "\nThe computed value of cos " << x <<" radians for "<< i << " terms = " << sum ;

    return 0;
}
