#include<iostream>
#include<cmath>
#define f(x) (exp((x)*(x)))

using namespace std;

double fun(double a, double b){
return (b-a)*(f(a)+f(b))/2;
}
double trapez(double A, double B,int N)
{
   double buf = 0;
   double h = (B-A)/N;
   for (int i =0;i<N;i++) {
   buf=buf+fun(A+i*h,A+i*h+h);
   }

   return buf;
}
void OutPut(double Area){
   cout << "The integral's value   " << Area;
   }
int main(int argc, char *argv[])
{
OutPut(trapez(1,2,1000));

return 0;
}
