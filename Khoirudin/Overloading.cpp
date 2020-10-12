#include <iostream>
#include <string>
using namespace std;

void cetak(double x){
	cout<<"hasil double x = "<<x<<endl;

}

void cetak(string x){
	cout<<"hasil string x = "<<x<<endl;
}

int main(){
	cetak(3.5);
	cin.get();
	return 0;
}
