#include<iostream>
using namespace std;
int addition (int first_value, int second_value)
{

    int sum;
    sum = first_value + second_value;
    return sum;
}
int main()
{
   
    
    int a ,b;
  
    cout << "Enter two numbers" << endl;
    cout << "Number 1 = ";
    cin >> a ;

    cout << "Number 2 = ";
    cin >> b ;

   int  total = addition(a,b);
    cout << "sum is " << total << endl;

     
}
