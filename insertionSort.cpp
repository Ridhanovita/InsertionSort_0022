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

void insertion()
{ //Prosedure InsertionSort
    int temp; //Membuat variable data temporer atau penyimpanan sementara
    int j, i; //Membuat variable j sebagai penanda

    for(i = 1; i <= n - 1; i++)
    { //step 1
        temp = arr[i]; //step 2
        j = i - 1; //step 3

        while (j >= 0 && arr[j] > temp) //step 4
        {
            arr[j + 1] = arr[j]; //step 4a
            j--; //step 4b
        }
        arr[j + 1] = temp; //step 5
    }
}

void display()
{
    cout << endl; //Output baris kosong
    cout << "================================" << endl;
    cout << "Total Pass = " << n - 1 << endl; //count element movement
    cout << "================================" << endl; //output ke layar
    cout << "Element Array yang telah tersusun" << endl; //Output ke layar
    cout << "================================" << endl; //Output ke layar

    for (int j = 0; j < n; j++)
    { //Looping dengan j dimulai dari 0 hingga n-1
        cout << arr[j] << endl; //output ke layar
    }
    cout << endl; //Output baris kosong
}