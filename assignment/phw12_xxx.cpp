
#include <iostream>

using namespace std;

int main()
{
    int o, c, n, s, h;
    float molecularWeight;
    cout<<"Enter number of elements of the amino acid \n \n";
    cout<<"Oxygen = ";
    cin>> o;
    cout<<"Carbon = ";
    cin>> c;
    cout<<"Nitrogen = ";
    cin>> n;
    cout<<"Sulphur = ";
    cin>> s;
    cout<<"Hydrogen = ";
    cin>> h;
    
    molecularWeight = (o*15.9994)+(c*12.011)+(n*14.00674)+(s*32.066)+(h*1.00794);
    
    cout<<"The molecular weight of the amino acid is = "<<molecularWeight;
    return 0;
}

 