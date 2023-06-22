#include <iostream>

using namespace std;
class rectangle{
public:
int length, width;

public :
    void setSides(int x, int y){
    x = length;
    y = width;
}
int calArea(){
    return x*y;
}
int calPer(){
return 2*x + 2*y;
}
};
int main()
{
    rectangle r;
    r.length = 8;
    r.width = 5;
    r.calArea();
    r.calPer();
    return 0;
}
