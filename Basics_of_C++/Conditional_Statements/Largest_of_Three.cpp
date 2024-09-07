#include<iostream>
using namespace std;
int main()
{

    int a;
    int b;
    int c;
    cout<<"Enter value of a : ";
    cin>>a;
    cout<<"Enter value of b : ";
    cin>>b;
    cout<<"Enter value of c : ";
    cin>>c;
        if((a>b)&&(a>c))
        {
            cout<<"A is BIG";
        }
        else if((b>a)&&(b>c))
        {
            cout<<"B is BIG";
        }
        else
        {
            cout<<"C is BIG";
        }
}
