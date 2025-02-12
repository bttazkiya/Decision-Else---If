// Latihan Relasi (Else - If)
// Membuat Program Kalkulator Sederhana
#include <iostream>
using namespace std;
int main () {

    cout << "\n === Program Kalkulator Sederhana C++ === \n" << endl;

    int a, b;
    int pilihan;

    cout << "masukkan bilangan Pertama: ":
    cin >> a;
    cout << "masukkan bilangan kedua: ";
    cin >> b;

    cout << "\n === Menu Matematika === \n" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;

    cout << "Masukkan Pilihan Anda: ";
    cin >> pilihan;
    if (pilihan == 1){
        cout << "Hasil operasi tersebut : " << a + b;
    } else if (pilihan == 2){
        cout << "Hasil operasi tersebut : " << a - b;
    } else if (pilihan == 3){
        cout << "Hasil operasi tersebut : " << a * b;
    } else if (pilihan == 4){
        cout << "Hasil opersi tersebut : " << a / b;
    } else {
        cout << "Pilihan Tidak valid" << endl;
    }
    return 0;
}
