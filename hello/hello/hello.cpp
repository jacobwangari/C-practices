

#include <iostream>
using namespace std;

int main()
{
    int length, width;
    cout << "Enter length " << endl;
    cin >> length;
    cout << "Enter width " << endl;
    cin >> width;

    for (int i = 0;i < length;i++) {
        for (int i = 0; i < length; i++) {
            cout << " * ";
        }
        cout << endl;
    }

    cout << "Hello World!\n";

}

