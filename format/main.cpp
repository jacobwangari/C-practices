#include <iostream>
using namespace std;
int main (void)
{

int arr [] = {2, 0, 2, 1};
int* p = arr;
int a = *++p;
int b = *p++;
int c = ++*p;
int d = (*p)++;
cout <<arr[0] << arr[1] << arr[2] << arr [3] << endl;
cout << a << b << c <<d << endl;
return 0;
}
