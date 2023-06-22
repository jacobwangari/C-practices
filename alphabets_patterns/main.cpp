#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
      int n = 7;
     for( int i = 0; i < n; i++)
    {
        for( int j = 0; j < n; j++)
        {
            if((j == 1 && i != 0 && i != n - 1) ||
              ((i == 0 || i == n - 1) && j > 1 &&
              j < n - 2) || (i == ((n - 1) / 2) &&
              j > 2 && j < n - 1) || (j == n - 2 &&
              i != 0 && i >= ((n - 1) / 2) && i != n - 1))
                cout << "G";
            else
                cout <<  " ";

        }
        cout << "\n" ;
    }
    for (int m = 0 ; m <= n; m++){
        for( int k = 0; k <= n; k++){
            if( k == 0 ||m == 0 || k == n || m == n)
                cout << "c";
        }
        cout<< endl;
    }
  for (int i = 0; i < n; i++){

        // loop for columns
        for (int j = 0; j <= n; j++){

            // Logic to generate stars for *
            if (j == 1 || ((i == 0 || i == n-1) &&
               (j > 1 && j < n-2)) || (j == n-2 &&
                i != 0 && i != n-1))
                cout<< "D";

            // For the spaces
            else
                cout<< " ";
        }

    // For changing line
    cout<< endl;
    }

    return 0;
}
