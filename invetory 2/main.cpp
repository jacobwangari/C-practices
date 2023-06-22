//Name- XYZ
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//Employee class
class Employee
{
    private:
    //for ID
    int EmpID;
    //for name
    string fname, lname;
    //hours worked
    int HoursWk;
    //pay rate
    double RateofPay;

    public:
    //parameterized constructor
    Employee(int id, string fn, string ln, int hrs, double pr)
    {
        //initialize the data members
        EmpID = id;
        fname = fn;
        lname = ln;
        HoursWk = hrs;
        RateofPay = pr;
    }

    //function to compute tax
    double computetax()
    {
        //NYC is 18.5%
        //18.5% = 0.185
        return (HoursWk * RateofPay) * 0.185;
    }

    //function to get net pay
    double getNetPay()
    {
        //net pay = gross pay - tax
        double gross = HoursWk * RateofPay;
        //subtract tax from gross pay
        double net = gross - computetax();

        //return net pay
        return net;
    }

    //getter for ID
    int getId()
    {
        return EmpID;
    }

    //getter for name
    string getName()
    {
        return fname + " " + lname;
    }

    //getter for hours worked
    int getHours()
    {
        return HoursWk;
    }

    //getter for pay rate
    double getRate()
    {
        return RateofPay;
    }

    //function to generate PayCheck
    void PayCheck()
    {
        //print ID
        cout<<"Pay Check for Employee "<<EmpID<<endl;
        //print name
        cout<<"Name: "<<fname<<" "<<lname<<endl;
        //print HoursWorked
        cout<<"Hours worked: "<<HoursWk<<endl;
        //print pay rate
        cout<<"RateofPay: "<<RateofPay<<endl;
        //compute tax and print
        cout<<"Tax: "<<computetax()<<endl;
        //compute net pay and print
        cout<<"Net Pay: "<<getNetPay()<<endl;
    }
};

//function to Display menu
void menu()
{
    //heading of Company
    cout<<"------------------------ABC Company payroll--------------------------"<<endl;
    //print options to select
    cout<<"A. Read Employee data from the file Employee information, the Hours worked and rate of Pay"<<endl;
    cout<<"B. Calculate payroll tax (NYC is 18.5%) and Net Pay"<<endl;
    cout<<"C. Write to an out file and Screen with the sorted output of processed payroll data"<<endl;
    cout<<"D. Print out all employee checks"<<endl;
    cout<<"E. Find and Display payroll information based on an Emp ID"<<endl;
    cout<<"F. Exit"<<endl;
}

//function that takes in vector of type Employee as reference and ifstream objects
void Read_data(vector<Employee> &e, ifstream &infile)
{
    //for ignoring first line of text file
    string ig;
    infile>>ig>>ig>>ig>>ig;

    //for id
    int ID;
    //name
    string fn, ln;
    //hours worked
    int hrs;
    //pay rate
    double rate;

    //read until end of file
    while(!infile.eof())
    {
        //read from file into variables
        infile>>ID>>fn>>ln>>hrs>>rate;
        //create Employee object using constructor
        Employee Em(ID, fn, ln, hrs, rate);
        //push_back the object into vector
        e.push_back(Em);
    }
}
//this function finds an Employee from vector of Employee objects
//prints the Payroll data if that ID found
void findPayrollInfo(vector<Employee> &e)
{
    //ID to be search
    int id;
    //flag
    int f = 0;

    //input ID
    cout<<"Enter Employee ID to search: ";
    cin>>id;

    //traverse the vector objects
    for(int i=0;i<e.size();i++ )
    {
        //compare the ID
        if (e[i].getId() == id)
        {
            //print Payroll information
            cout<<"EmpID    Name       Payroll Tax      Net Pay"<<endl;
            cout<<e[i].getId()<<"  "<<e[i].getName()<<"     "<<e[i].computetax()<<"       "<<e[i].getNetPay()<<endl;
            f = 1;
            break;
        }
    }

    //not found
    if (f==0)
    cout<<"ID not found"<<endl;
}

int main()
{
    //a vector of Employee objects
    vector<Employee> E;

    //input file
    ifstream in("information.txt");
    //output file
    ofstream out("payroll.txt");

    //to select from options
    char ch;

    //do while loop
    do{
        //print menu
        menu();
        //input choice
        cout<<"\nEnter choice from A-F"<<endl;
        cin>>ch;

        //use switch on use
        switch(ch)
        {
            case 'A':
                //read data from file into vector
                Read_data(E, in);
                cout<<"\nEmpID    Name       HoursWorked        RateofPay  "<<endl;
                //print the Employee information
                cout<<"----------------------------------------------------"<<endl;
                for(int i=0;i<E.size();i++)
                {
                    cout<<E[i].getId()<<"  "<<E[i].getName()<<"     "<<E[i].getHours()<<"       "<<E[i].getRate()<<endl;
                }
                cout<<endl<<endl;

                break;

            case 'B':
                //read from file
                Read_data(E, in);
                //print Payroll information
                cout<<"\nEmpID    Name       Payroll Tax      Net Pay"<<endl;
                cout<<"----------------------------------------------"<<endl;
                for(int i=0;i<E.size();i++)
                {
                    cout<<E[i].getId()<<"  "<<E[i].getName()<<"     "<<E[i].computetax()<<"       "<<E[i].getNetPay()<<endl;
                }
                cout<<endl<<endl;
                break;

            case 'C':
                //read from file
                Read_data(E, in);
                //print to output file
                out<<"EmpID    Name       Payroll Tax      Net Pay"<<endl;
                out<<"----------------------------------------------"<<endl;
                for(int i=0;i<E.size();i++)
                {
                    //payroll information
                    out<<E[i].getId()<<"  "<<E[i].getName()<<"     "<<E[i].computetax()<<"       "<<E[i].getNetPay()<<endl;
                }

                //print to Screen
                cout<<"\nEmpID    Name       Payroll Tax      Net Pay"<<endl;
                cout<<"----------------------------------------------"<<endl;
                for(int i=0;i<E.size();i++)
                {
                    //Payroll information
                    cout<<E[i].getId()<<"  "<<E[i].getName()<<"     "<<E[i].computetax()<<"       "<<E[i].getNetPay()<<endl;
                }
                cout<<endl<<endl;
                break;

            case 'D':
                //read from file
                Read_data(E, in);

                cout<<"\nPayCheck for Employees are as follows: \n"<<endl;
                for(int i=0;i<E.size();i++)
                {
                    //call function PayCheck() for all Employee objects
                    E[i].PayCheck();
                    cout<<"\n"<<endl;
                }
                cout<<endl<<endl;
                break;

            case 'E':
                //read from file
                Read_data(E, in);
                //call function findPayrollInfo()
findPayrollInfo(E);
                cout<<endl<<endl;
                break;

            case 'F':
                //break from switch
                break;

            //wrong option
            default:
                cout<<"\nWrong option\n"<<endl;

        }
    }while(ch != 'F');     //until choice is F

    return 0;
}
