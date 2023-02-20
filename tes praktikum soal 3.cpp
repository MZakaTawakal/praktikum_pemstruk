#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    string kelas;
    int nilai_ddp;

    // Input nama, kelas, dan nilai DDP
    getline(cin, nama);
    getline(cin, kelas);
    cin >> nilai_ddp;

    // Hitung panjang nama
    int panjang_nama = nama.length();

    // Output perkenalan dan nilai DDP
    cout << "Izin memperkenalkan diri, nama saya " << nama << " dengan jumlah huruf " << panjang_nama << ".\n";
    cout << "Saya mahasiswa S1 ilmu komputer dari kelas " << kelas << ".\n";
    cout << "Nilai DDP saya adalah " << nilai_ddp << ".\n";

    return 0;
}

