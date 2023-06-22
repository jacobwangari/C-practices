#include <iostream>

using namespace std;

int main()
{   double radius, diameter,area,perimeter;
    cout << "Enter radius of a circle = ";
    cin >> radius;

    area = (22/7)*radius*radius;
    diameter = radius*2;
    perimeter = (22/7)*diameter;

    cout << "The diameter of the circle = " << diameter << endl;
    cout << "The perimeter of the circle = " << perimeter << endl;
    cout << "The area of the circle = " << area << endl;

    return 0;
}
