#include <iostream>
using namespace std;

int main() {
    int foodAmount[3][5];
    int sum = 0;
    float average;
    cout << "Enter the amount of food eaten by each monkey: " << endl;

    // Storing user input in the array
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> foodAmount[i][j];
        }
    }
      int largest = foodAmount[0][0];
    // Loop to store the largest number
   for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
                if(foodAmount[i][j] > largest)
                   largest = foodAmount[i][j];

        }
    }
    int smallest = foodAmount[0][0];
// Loop to store the minimum number
   for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
                if(foodAmount[i][j] < smallest)
                   smallest = foodAmount[i][j];

        }
    }
//average of the elements in the array
 for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
                sum+=foodAmount[i][j];
                average = sum/15;
        }
 }
    cout << "The average amount of food eaten = " << average << endl;
     cout << "The least amount of food eaten = " << smallest << endl;
     cout << "The greatest amount of food eaten = "  << largest << endl;

    return 0;
}
