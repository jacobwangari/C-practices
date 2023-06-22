#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number, numberReversed = 0, rem;

    cout << "Enter an integer with 5 digits or less: ";
    cin >> number;
    
     
   if (number<=99999){
    cout << "Square root of the entered number = " << sqrt(number);
    while(number != 0) {
        rem = number%10;
        numberReversed = numberReversed*10 + rem;
        number /= 10; }
        cout << "\nReversed Number = " << numberReversed;
        cout << "\nSquare root of the reversed number = " << sqrt(numberReversed);
    }
    else{
        cout << "The number has more than 5 digits";
    }
}