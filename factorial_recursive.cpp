// Program designed to compute the factorial of a number using recursive function approach in C++
#include<iostream>

using namespace std;

int factorial(int n){
    if ((n==1) || (n==0)){ // Good programmer practice rather than declaring the condition as if(n<2) which also includes negative numbers 
        return 1;
    }
    return n* factorial(n-1);
}
int main(){
  int a;
  cout<<"Enter a number to get the factorial of this number: ";
  cin>>a;
  // Input Validation
  if (a<0){
    cout<<"Factorial not defined for negative numbers"<<endl;
  }
  else{
    cout<<"The factorial of "<<a<<" is: "<<factorial(a)<<endl;// recursion approach
  }
  return 0;
}
// DRY RUN FOR THE ABOVE CODE 
// Step by step calculation of factorial(4)
// How the code evaluates
// factorial(4)= 4* factorial(3)
// factorial(4)= 4* 3* factorial(2)
// factorial(4)= 4* 3* 2* factorial(1)
// factorial(4)= 4* 3* 2* 1  // condition met so factorial(1) is replaced by the return value 1 for n<=1 condition
// factorial(4)= 24
