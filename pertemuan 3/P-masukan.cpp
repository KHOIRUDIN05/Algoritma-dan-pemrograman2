#include<iostream>
using namespace std;
//Parameter x sebagai masukan dan juga keluaran

void keluaran ( int *x) {
*x=*x +1;
}
int main () {
	int bilangan ;;
	cout<<"masukan sebuah bilangan bulat :   ";cin>>bilangan;
	keluaran(&bilangan);;
	cout<<"nilai akhir                    :   "<<bilangan;;
	return 0;
}
