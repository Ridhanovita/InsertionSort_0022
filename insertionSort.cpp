#include <iostream>
using namespace std;

int arr[20]; // Membuat array dengan panjang data 20
int n;       // Membuat variable inputan n

void input()
{ // Prosedure Input
    while (true)
    {
        cout << "Masukkan Jumlah data pada Array : "; // Membuat inputan jumlah element Array
        cin >> n;                                     // Memanggil variable n

        if (n <= 20)
        { // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Element.\n"; // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                             // Membuat jarak  per baris program
    cout << "======================" << endl; // membuattampilan tersusun data element array
    cout << "Masukkan Elemet Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; 1 < n; i++) // Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i + 1) << ": "; // Memasukan atau menginputkan nilai data n
        cin >> arr[i];                         // Menyimpan nilai data n kedalam array arr
    }
}