#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

struct CraftInv{
   long id;
   string name;
   double Quantity;
   double price;
};

// display function reads file input and displays it

void display(CraftInv ** stores,int counter){
    // printing heading row
   int i;
   cout << setw(15) << left <<"Item ID";
   cout << setw(15) << left <<"Name";
   cout << setw(15) << left <<"Quantity";
   cout << setw(15) << left <<"Price Per Item";
   cout<<endl;
   //printing each element of the file in row
   for(i=0;i<=counter;i++){
       cout << setw(15) <<left<<(*stores[i]).id;
       cout << setw(15) <<left<<(*stores[i]).name;
       cout << setw(15) <<left<<(*stores[i]).Quantity;
       cout << setw(15) <<left<<(*stores[i]).price;


       cout<<endl;
   }

}
// print order prints the output file

void printOrder(CraftInv ** stores,int counter){
    // printing heading row
   int i;
   cout << setw(15) << left <<"Item ID";
   cout << setw(15) << left <<"Name";
   cout << setw(15) << left <<"Quantity";
   cout<<endl;
   //printing each element of the file in row
   for(i=0;i<=counter;i++){
       cout << setw(15) <<left<<(*stores[i]).id;
       cout << setw(15) <<left<<(*stores[i]).name;
       cout << setw(15) <<left<<(*stores[i]).Quantity;

       cout<<endl;
   }
}


//this function will read file and store data to grocery stores
int readInventory(char fileName[20],CraftInv **stores){
   ifstream infile;
   string line;//for read line
   int counter=-2;
   infile.open (fileName); //name of file here. please mention Complete path if file is not at root
   if (infile.is_open()) //if file opened
   {
       while( getline(infile, line,'\n') ) { //get row from text file
           stringstream ss(line);
           if(counter==-2){
               counter++;
               //ignoring first list
               continue;
           }
           counter++; //increase counter
           CraftInv *groce;
           groce = new CraftInv();
           ss>>groce->id>>groce->name>>groce->Quantity>>groce->price;
           stores[counter] = groce;
       }
       infile.close(); //close file
   }
   else //if file not found show the below message
   {
       cout << "Sorry, we could not find the equation file." << endl;
   }
   return counter;
}

//this function will read file and store data to grocery stores
int readOrder(char fileName[20],CraftInv **stores){
   ifstream infile;
   string line;//for read line
   int counter=-2;
   infile.open (fileName); //name of file here. plz mention Complete path if file is not at root
   if (infile.is_open()) //if file opened
   {
       while( getline(infile, line,'\n') ) { //get row from text file
           stringstream ss(line);
           if(counter==-2){
               counter++;
               //ignoring first list
               continue;
           }
           counter++; //increase counter
           CraftInv *groce;
           groce = new CraftInv();
           ss>>groce->id>>groce->name>>groce->Quantity;
           stores[counter] = groce;
       }
       infile.close(); //close file
   }
   else //if file not found show the below message
   {
       cout << "Sorry, we could not find the equation file." << endl;
   }
   return counter;
}


void sortOrder(CraftInv ** stores,int counter){
   int i,j;
   for(i=0;i<=counter;i++){
       for(j=i+1;j<=counter;j++){
           if(stores[i]->Quantity<stores[j]->Quantity){
               CraftInv *temp = stores[i];
               stores[i]= stores[j];
               stores[j] = temp;
           }
       }
   }
}

int main(){
   char orderfile[20];
   //get the file name and call the function
   CraftInv *store[100];
   //read student and get count
   int count=readInventory("Inventory.txt",store);
   cout<<"Loaded "<<count+1<<" record from Shehu inventory"<<endl;
   while(true){
       display(store,count);

       cout<<"Reading Shenu order details"<<endl;
       cout<<"Enter order file name : ";
       cin>>orderfile;
       CraftInv *order[100];
       int orderCount=readOrder(orderfile,order);
       cout<<"\n\nOrder details is as below"<<endl;
       printOrder(order,orderCount);
       double total=0;
       for(int i=0;i<=orderCount;i++){
           for(int j=0;j<=count;j++){
               if(store[j]->id==order[i]->id){
                   if(store[i]->Quantity>0){
                       total+=order[i]->Quantity*store[j]->price;
                       store[j]->Quantity--;
                   }else{
                       cout<<"No more quantity left for "<<order[i]->name<<endl;
                   }
               }
           }
       }
       ofstream myfile ("Receipt.txt"); //printing data to out file

       myfile<<"SHEHU STORE\n";
       myfile<<"---------------------\n";
       sortOrder(order,orderCount);


       int i;
       myfile << setw(15) << left <<"Item ID";
       myfile << setw(15) << left <<"Name";
       myfile << setw(15) << left <<"Quantity";
       myfile<<endl;
       for(i=0;i<=orderCount;i++){ //printing each element of the file in row
           myfile << setw(15) <<left<<(*order[i]).id;
           myfile << setw(15) <<left<<(*order[i]).name;
           myfile << setw(15) <<left<<(*order[i]).Quantity;
           myfile<<endl;
       }

       myfile<<"Total cost of items is : "<<total<<endl;
       double tax = total*8.875/100;
       myfile<<"Tax is : "<<tax<<endl;
       double grandTotal = total+tax;
       myfile<<"Grand total is : "<<grandTotal;
       cout<<"Data exported to Receipt.txt"<<endl;
       cout<<"\n\nMore orders ? [y/n] : ";
       char ch;
       cin>>ch;
       while(ch=='\n'){
           cin>>ch;
       }
       if(ch!='y'){
           break;
       }
   }
}
