// Program designed to compute the factorial of a number using for,while,do-while loop approach
#include<iostream>

using namespace std;

int forfact(int d){
    int s=1;
    for (int i = 1; i<=d; i++)
    {
        s=s*i;
    }
    return s;
}

// Factorial of a number using while loop
int whilefact(int p){
    int w=1;
    int r=1;
    while (w<=p)
    {
        r=r*w;
        w++;
    }
    return r;
    
}

// Factorial of a number using do-while loop
int dowhilefact(int dp){
    int f=1;
    int g=1;
    do
    {
        g=g*f;
        f++;
    } while (f<=dp);
    return g;
    
} 


// Running procedure for iterative loops(here mentioned for do-while loop same mechanism is used to design for and while loops as well)
// ifact(5)=> g=1*1=1,g=1*2=2,g=2*3=6,g=6*4=24,g=24*5=120 this 120 is returned by the function at the end 
int main(){
    // Factorial of a number: 
    // 6!=6*5*4*3*2*1=720
    // 0!=1 by definition
    // 1!=1 by definition
    // n!=n* (n-1)!
    int a;
    cout<<"Enter a number to get the factorial of this number: ";
    cin>>a;
    // Input Validation
    if (a<0){
        cout<<"Factorial not defined for negative numbers"<<endl;
    }
    else{
        cout<<"The factorial of "<<a<<" using for loop is: "<<forfact(a)<<endl;// for loop approach 
        cout<<"The factorial of "<<a<<" using while loop is: "<<whilefact(a)<<endl;// while loop approach
        cout<<"The factorial of "<<a<<" using do-while loop is: "<<dowhilefact(a)<<endl;// do-while loop approach
    }
    return 0;
}
