#include <iostream>
using namespace std;

int arr[20]; //Membuat array dgn panjang data 20
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
		cin >> arr[i]; //input dari pengguna
	}
}

void display() { //procedure utk menampilkan hasil
	cout << endl; // output baris kosong
	cout << "====================" << endl; //output ke layar
	cout << "Elemen Array yang telah tersusun" << endl; //output ke layar
	cout << "====================" << endl; //output ke layar
	for (int j = 0; j < n; j++) {  //looping dgn j dimulai dari 0 hingga n-1
		cout << "Data Ke- " << j + 1 << ": ";
		cout << a[j] << endl; //output ke layar
	}
	cout << endl; //output baris kosong
}

void insertionSort() {	//Procedure InsertionSort

	int temp;			//Membuat variabel data temporer atau penyimpanan sementara
	int i, j;			//Membuat variabel j sebagai penanda

	for (i = 1; i <= n - 1; i++) {	//1. Looping dengan i dimulai dari 1 hingga n-1

		temp = arr[i];				//2. Simpan nilai arr[i] ke variabel sementara temp

		j = i - 1;					//3. setting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp) {	//4. Looping while di mana nilai j lebih besar sama dengan 0 dan

			arr[j + 1] = arr[j];			//4a. simpan arr{j] ke dalam variabel arr[j+1]
			j--;							//4b. Decrement nilai j by 1
		}

		arr[j + 1] = temp;					//5. simpan nilai temp ke dalam arr[j+1]


		cout << "\nPass" << i << ": ";		//Output ke layar
		for (int k = 0; k < n; k++)			//Looping nilai k dimulai dari 0 hingga n-1
		{
			cout << arr[k] << " ";			//Output ke layar
		}
	}
}
int main()
{
    
}