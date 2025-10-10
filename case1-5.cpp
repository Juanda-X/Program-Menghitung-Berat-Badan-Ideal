//Oleh Juanda

int main() {
perkenalan();
int a;
int angka1, angka2;
double angka3, angka4;
int faktor;
int hasil;
string kalimat[10];

do {
    cout << endl; cout << endl;
    menu();
    cout << endl; cout << endl;
    cout << "Pilih Menu: ";
    cin >> a;

    switch (a) {
case 1:
cout << "Masukkan Angka Pertama: ";
cin >> angka1; 
cout << "Masukkan Angka Kedua: ";
cin >> angka2;
cout << "Hasil dari " << angka1 << " + " << angka2 << " = " << angka1+angka2 << endl;
break;

case 2:
cout << "Masukkan Angka Pertama: ";
cin >> angka1;
cout << "Masukkan Angka Kedua: ";
cin >> angka2;
cout << "Hasil dari " << angka1 << " - " << angka2 << " = " << angka1-angka2 << endl;
break;

case 3:
cout << "Masukkan Angka Pertama: ";
cin >> angka3;
cout << "Masukkan Angka Kedua: ";
cin >> angka4;
cout << "Hasil dari " << angka3 << " / " << angka4 << " = " << angka3/angka4 << endl;
break;

case 4:
cout << "Masukkan Angka Pertama: ";
cin >> angka1;
cout << "Masukkan Angka Kedua: ";
cin >> angka2;
cout << "Hasil dari " << angka1 << " * " << angka2 << " = " << angka1*angka2 << endl;
break;

case 5:
hasil = 1;
cout << "Masukan Angka yang Ingin Dipangkat: ";
cin >> angka1;
cout << "Masukkan Pangkat: ";
cin >> angka2;
for(int i = 1; i <= angka2; i++) {
    hasil *= angka1;
}
cout << "Hasil dari " << angka1 << "^" << angka2 << " = " << hasil << endl;
break;
    