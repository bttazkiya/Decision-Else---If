// Latihan Relasi (Else - If)
// Membuat Program Lampu lalu lintas
#include <iostream>
using namespace std;
int main () {

    string warna;
    cout << "\n=== Lampu Lalu Lintas ===\n" << endl;
    cout << "Masukkan Warna Lampu: ";
    cin >> warna;

    if(warna == "Merah"){
        cout << "Berhenti!" << endl;
    } else if (warna == "Kuning"){
        cout << "Bersiap!" << endl;
    } else if (warna == "Hijau"){
        cout << "Jalan!" << endl;
    } else {
        cout << "Warna Tidak Valid!" << endl;
    }

    return 0;
}
// Membuat Program batas latihan Berdasarkan Keanggotaan
#include <iostream>
using namespace std;
int main () {
    string jenisKeanggotaan;
    int jumlahLatihan, batasLatihan;
    
    cout << "Masukkan Jenis Keanggotaan ( silver/gold/platinum ) : ";
    cin >> jenisKeanggotaan;

    if ( jenisKeanggotaan == "silver" ) {
        batasLatihan = 10;
    } else if ( jenisKeanggotaan == "gold" ) {
        batasLatihan = 20;
    } else if ( jenisKeanggotaan == "platinum" ){
        cout << "Anda Tidak Memiliki Batas\n";
        return 0;
    } else {
        cout << "Tidak Valid\n";
        return 0;
    }
    
    cout << "Masukkan jumlah latihan yang dilakukan : ";
    cin >> jumlahLatihan;
   
   if ( jumlahLatihan < batasLatihan) {
       cout << "Anda masih bisa latihan sebanyak " << (batasLatihan - jumlahLatihan) << " kali lagi bulan ini\n";
   } else if {
       cout << "Anda sudah mencapai batas latihan bulan ini\n";
   }
    return 0;   
}
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

