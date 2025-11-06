//PROGRAM INI UNTUK MENGHITUNG BERAT BADAN IDEAL SEDERHANA TAPI EFEKTIF KARENA MENGGUNAKAN RUMUS DARI SUMBER YANG TERPERCAYA

#include <iostream> 
using namespace std;

int main() {
    // Pengguna disuruh intuk menginput salah satu dar pilihan gender yang ada di bawah
    char gender;
    cout << "\n"; // Membuat garis baru atau enter tanpa endl
    cout << " --------------------------------------" << endl;
    cout << "|    HITUNG BERAT BADAN IDEAL ANDA     |" << endl;
    cout << " --------------------------------------" << endl;
    cout << "| GENDER | L :LAKI-LAKI | P :PEREMPUAN |" << endl;
    cout << " --------------------------------------" << endl;
    cout << "Masukkan Gender Anda: ";
    cin >> gender;  //Untuk membiarkan pengguna memasukkan suatu input ke dalam program yang sudah berjalan

    //Jika pengguna menginput genderya itu 'L' maka program di bawah ini akan berjalan
    if(gender == 'L') {
        double x; //double saya gunakan karena tinggi badan seseorang belum tentu berada di bilangan bulat kadang juga desimal
        cout << "Masukkan Tinggi Badan Anda: ";
        cin >> x;
        double y = x - 100;
        cout << "\n";
        double z = y - (y * 0.10);
        double a = z - (z * 0.10);
        double b = z + (z * 0.10);
        cout << "Berat Badan Ideal Anda Adalah Sekitar: " << a << " - " << b << " kg" << endl; 
        cout << "Dan Berat Badan Paling Idealmu Adalah: " << z << " kg" << endl;
        cout << "JAGA BADANMU TETAP BUGAR BROTHER!!";

        // Jika pengguna menginput gedernya itu 'P' maka ia akan melewati program pertama dan langsung lanjut ke program berikutnya yaitu dibawah ini
    } else if(gender == 'P') {      
        double x;
        cout << "Masukkan Tinggi Badan Anda: ";
        cin >> x;
        double y = x - 100;
        cout << "\n";
        double z = y - (y * 0.15);
        double a = z - (z * 0.10);
        double b = z + (z * 0.10);
        cout << "Berat Badan Ideal Kakak Adalah Sekitar: " << a << " - " << b << " kg" << endl;
        cout << "Dan Berat Badan Paling Ideal Kakak Adalah: " << z << " kg" << endl;
        cout << "Have a Good Day Neng :)";

        // Jika pengguna menginput gender selain pilihan di atas, maka program diatas akan dilewati dan langsung menjalankan program ini
    } else {
        cout << "!!Gender Tydak Valid!!" << endl << endl;
        cout << "DISURUH MASUKIN GENDER KOK MALAH YANG LAIN-LAIN!??" << endl;
        cout << "Lu Gay yak? (bertanya dengan nada curiga)!!!" << endl;
        cout << "ATAU" << endl;
        cout << "Lu Itu Lesby? (juga bertanya dengan nada curiga!!!)";

    }

    return 0;

}