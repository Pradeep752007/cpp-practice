// This program uses a for loop to print the multiplication table of any number 
#include<iostream>

using namespace std;

int main(){
  int f;  // The variable f is used to get input from the user 
  cout<<"Enter the number for which multiplication table you want: ";
  cin>>f;
  cout<<"Multiplication table for the input number: "<<f<<endl;
  for (int i = 1; i <= 10; i++)
  {
      cout<<f<<" X "<<i<<" = "<<f*i<<endl;
  }
  return 0;
}
