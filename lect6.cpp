#include<iostream>
using namespace std;

int main()
{
    float a,b;
    cout<<"Give 2 float numb as input";
    cin>>a>>b;  
    if(a>0.01 && b>a)
    {
        cout<<"The cond in if statement is correct";
    }
    else
    {
        cout<<"the condition is false";
    }
}