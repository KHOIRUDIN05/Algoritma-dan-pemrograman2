#include <iostream>
using namespace std;

void naikturun(int &naik,int &turun, int nilai, int jumlah){
	naik = nilai + jumlah;
	turun = nilai - jumlah;
}

int main(){
	int hasilnaik=0, hasilturun=0, nilai=10;
	naikturun(hasilnaik, hasilturun, nilai, 3);
	cout<<"hasilnaik = "<<hasilnaik<<endl;
	cout<<"hasilturun = "<<hasilturun<<endl;
	cin.get();
	return 0;
}
