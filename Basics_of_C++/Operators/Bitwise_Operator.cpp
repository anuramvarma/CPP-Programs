#include<iostream>
using namespace std;	
int main ()
{
	int a;
	int b;
    cout << "---- Executing Bitwise Operations !! ---- "<<endl;
	cout << "Enter value of A : ";
		cin >> a;
	cout << "Enter value of B : ";	
		cin >> b;
	cout << "Logical AND  :" << (a&b)<< endl;
	cout << "Logical OR :" <<(a|b) <<endl;
	cout << "Logical NOT  :" << (a^b)<< endl;
	cout << "Complement of A :" << (~a)<<"\n";
	cout << "Complement of B :" << (~b)<<"\n";
    cout << "Right Shift  :" << (a>>b)<<"\n";
	cout << "Left Shift :" << (a<<b)<<"\n";

}

