#include <iostream>

using namespace std;

int main(){

  float l, r;
  const float phi = 3.14;

  cout << "Menghitung Luas Lingkaran\n";

  cout << "Input panjang jari-jari lingkaran: ";
  cin >> r;

  l = phi*r*r;

  cout << "Luasnya adalah: "<< l << endl;

  return 0;
}
