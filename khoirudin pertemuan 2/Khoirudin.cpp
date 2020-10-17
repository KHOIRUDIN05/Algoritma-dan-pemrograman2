#include <iostream>
using namespace std;

int main ()

{
	int a, b, c;;
	
	cout<<"sebelum ditukar"<<endl;
	cout<<"masukan nilai A = ";cin>>a;
	b = a*a ;
	cout<<"Hasil kuadrat = "<<b<<endl;
	c = a;
	a = b;
	b = c;
	cout<<"sesudah ditukar"<<endl;
	cout<<"Hasil nilai A = "<<a<<endl;
	cout<<"Hasil kuadrat = "<<b<<endl;
	cin.get();
	return 0;;
	
}
