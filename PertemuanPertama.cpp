#include <iostream>
using namespace std;


int a[20];                     //deklarasi array a dengan ukuran 20
int n;                         //deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() {                //procedure untuk input
	while (true) {            //looping
		cout << "MAsukan banyaknya elemen pda array : ";     //output ke layar
		cin >> n;             //input dari pengguna
		if (n <= 20)          //jika n kurang dari atau sama dengan 20
			break;            //keluar dari loop
		else {                //jika n lebih dari 20
			cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";   //output jika lebih dari 20
			
		}
	}
	cout << endl;                     //output ke layar
	cout << "====================";   //output ke layar
	cout << "masukan Elemen Array";   //output ke layar
	cout << "====================";   //output ke layar

	for (int i = 0; 1 < n; i++) {     //looping dengan i di mulai dari 0 hingga n-1
		cout << "Data ke-" << (i + 1) << "; "; //output ke layar
		cin >> a[i];                  //input dari pengguna
	}  
}


