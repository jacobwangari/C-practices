//Trapezoidal Method for the evaluation of Definite Integrals
#include<iostream>
#include<cmath>
using namespace std;
double fun(double x)        //write the function whose definite integral is to be calcuated here
{
    double a=1/(1+x*x);
    return a;
}
double trapez()
{  int h,i;        //n is for subintervals and i is for loop
    double a,b,h,sum=0,integral;
   double x[n+1],y[n+1];
    h=(b-a)/n;                //get the width of the subintervals
    for (i=0;i<=n;i++)
    {                    //loop to evaluate x0,...xn and y0,...yn
        x[i]=a+i*h;            //and store them in arrays
        y[i]=fun(x[i]);
    }
    for (i=1;i<n;i++)            //loop to evaluate h*(y1+...+yn-1)
    {
        sum=sum+h*y[i];
    }
    integral=h/2.0*(y[0]+y[n])+sum;

    return integral;
}
int main()
{
    int n,i;        //n is for subintervals and i is for loop
    double a,b,h,sum=0,integral;
    cout<<"Enter the limits of integration,\nInitial limit,a=";    //get the limits of integration
    cin>>a;
    cout<<"Final limit, b=";
    cin>>b;
    cout<<"Enter the no. of subintervals, n=";            //get the no. of subintervals
    cin>>n;
    cout<<"The definite integral  is "<<integral<<endl;
    return 0;
}
