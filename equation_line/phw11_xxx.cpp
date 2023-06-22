
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setiosflags(ios_base::fixed)<< setiosflags(ios_base::showpoint) << setprecision(2);
    double x1, y1, x2, y2, m, c, dx, dy;
    cout<<"Enter coordinates of first point \n";
    cout<< "\n x = ";
    cin >> x1;
    cout<< "\n y = ";
    cin >> y1;
    cout<<"\n Enter coordinates of second point \n";
    cout<< "\n x = ";
    cin >> x2;
    cout<< "\n y = ";
    cin >> y2;

    dx = x1-x2;
    dy = y1-y2;

    m = dy/dx;

    c = y1-m*x1;

    if (dy == 0 && dx != 0 ){
         cout << "\nThe two ponts forms a horizonta line";
         cout << " \n The equation of the  line is y = " <<y1;
    }
    else if (dx == 0 && dy != 0){
        cout << "\n The two points forms a vertical line";
        cout << " \n The equation of the  line is x = " <<x1;
    }
    else if (dx == 0 && dy == 0){
        cout << "\n These two points cant form a line ";
    }
    else{
        cout << "\n The gradient of the line = " << m ;
        cout << " \n The equation of the  line is y = " <<m <<"x";
         if (c > 0){
         cout << "+"<<c;}
           else{
                cout<<c;}
           }


    return 0;
}

