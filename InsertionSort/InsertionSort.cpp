#include <iostream>
using namespace std;

int arr[20] //Membuat array dgn panjang data 20
int n; //membuat var inputan n

void input() { //procedure utk input
	while (true) { //looping
		cout << "Masukkan banyaknya elemen pada array : "; //output ke layar
		cin >> n; //input dari pengguna
		if (n <= 20) //jika n kurang dari atau sama dengan 20
			break; //keluar dari loop
		else { //jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; //output ke layar
		}
	}
	cout << endl; //output baris kosong
	cout << "====================" << endl; //output ke layar
	cout << "Masukkan Elemen Array" << endl; //output ke layar
	cout << "====================" << endl; //output ke layar

	for (int i = 0; i < n; i++) {
		cout << "Data ke- " << (i + 1) << ": "; //looping dengan i dimulai dari 0 hingga n-1
		cin >> a[i]; //input dari pengguna
	}
}

int main()
{
    
}