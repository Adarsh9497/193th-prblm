#include<iostream>
using namespace std;
long long factorial (int num)
{
    if (num==0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num-1);
    }
}
int main()
{
    int num;
    cout<<"Enter a number to find its factorial : "; 
    cin >> num;
    cout << "The factorial of "<<num<<" is : "<<factorial(num) << endl;
}
