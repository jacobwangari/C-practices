#include <iostream>

using namespace std;

int main()
{

    int i = 0;
    while (i<5){
        if(i<3)
    {
            i+=2;
            cout << i << endl;
            continue;
        }
        else{
            cout << ++i << endl;
            break;
        }
        cout <<"b"<<endl;
    }

    return 0;
}
