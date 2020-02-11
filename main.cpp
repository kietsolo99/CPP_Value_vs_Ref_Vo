//Kiet_Vo_Dr_T 11_15_2017
#include <iostream>
using namespace std;

void doubleByValue(double);//Prototype by value pass a copy of the var
void doubleByRef(double &);//prototype & pass the memory location of var

int main() 
{
  //Pass by VALUE numValue and aValue are different
  cout << "Pass by VALUE numValue and aValue are different." << endl;
  double numValue = 5; //double num by reference & memory location
  cout << "\t numValue now (initial) = " << numValue << endl;//current value
  doubleByValue(numValue);//double num by reference & memory location
  cout << "\t numValue now = " << numValue << endl;//current value
  doubleByValue(numValue);//double num by reference & memory location
  cout << "\t numValue now = " << numValue << endl;//current value
  cout << "Note how numValue remains the same with each call of function\n";
  cout << "Note the function generates a result that is different from numValue.\n";
  cout << "Therefore, numValue and aValue are different variables (not linked) to each other. \n";

  //Pass by REFERENCE (&) numRef and &aRef are the same
  cout << "\nPass by REFENCE (&) numRef and &aRef are the same." << endl;
  double numRef = 5;// intial value of num
  cout << "\t numRef now (intial) = " <<numRef << endl; //current value
  doubleByRef(numRef);//double num by reference & memory location
  cout << "\t numRef now = " << numRef << endl;// current value
  doubleByRef(numRef); //double num by reference & memory location
  cout << "\t numRef now = " << numRef << endl;// current value
  cout << "Note how numRef remains the same with each call of function\n";
  cout << "Note the function generates a result that is different from numRef.\n";
  cout << "Therefore, numRef and aRef are different variables (are linked) to each other via memory location. \n";
}

void doubleByValue( double aValue)
{
  aValue *= 2;//double the value of aValue by making a copy of it
  cout << "\t aValue now = " << aValue << endl;
}

void doubleByRef(double &aRef)
{
  aRef *=2; // double the value of aRef at the memory address
  cout <<"\t aRef now = " << aRef << endl; //current value
}
