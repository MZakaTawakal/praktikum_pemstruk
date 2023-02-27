#include <iostream>
#include <cmath>
using namespace std;

double luaslingkaran(double r){
	double pi = M_PI;
	return pi*r*r;
	
}

void absen(string name, int npm){
	return name+ "_";
}

string absenn(string name){
	
}

int main(){
//	double x;
	
//	cin>>x;
	
//	cout<<"luas lingkaran"<< luaslingkaran(x);

	string name;
	int npm;
	
	getline(cin, name);
	cin>>npm;
	
	absen(name, npm);
	
	return 0;
}
