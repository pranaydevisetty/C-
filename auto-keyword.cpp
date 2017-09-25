#include<iostream>
#include<typeinfo>

using namespace std;

class Base{
	int a;
	int b;
};

int main()
{
	auto x = 20;
	auto y = 2;
	auto b = Base();
	
	cout << typeid(x).name() << endl;
	cout << typeid(y).name() << endl;
	cout << typeid(b).name() << endl;
	
	return 0;
}
