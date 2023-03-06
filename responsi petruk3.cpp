#include <iostream>
using namespace std;

int main() {
//	char name[20];
//	
//	
//	cout<<"Weebname: ";
//	cin>> name;
//	
//	cout<<"Welcome to Japanila, "<<name<<"!"<<endl;
	
//	int myArray[5] = {10, 20, 30, 40, 50};
//	for (int i = 0; i < 5; i++){
//		
//		cout<< "Value of element "<< i << " is " << myArray[i]<<endl;
//	}
	
	
//	cout<<sizeof(myArray) << endl;
//	cout<<sizeof(myArray)/sizeof(*myArray)<<endl;
//	
//	cout<<sizeof(double)<<endl;
//	cout<<sizeof(char);
//	return 0;

//	char jurusan[] = {"ilkomp unila"};
//	char kelas[] = {'a', 'b', 'c', '\0'};
//	
//	cout<<jurusan<<endl;
//	cout<<kelas<<endl;
//	
//	string fakultas [] = {"fmipa", "fp", "fk"};
//	cout<<*fakultas;

	int arr[3][4];
	for(int i = 0; i<3; i++)
	{
		for(int j = 0; j<4;j++)
		{
			arr[i][j] = i * j;
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
