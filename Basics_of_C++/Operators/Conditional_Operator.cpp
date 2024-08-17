#include<iostream>
using namespace std;
int main()
{
    cout <<" --- Executing  ---"<<endl;
    int a;
    int b;
    int c;
    cout << "Enter value of A :"<<endl;
        cin >>a;
    cout << "Enter value of B :"<<endl;
        cin >>b;
    c=(a>b)?a:b;
    cout<<" This is Large : "<<c<<endl;
    return 0;

}
