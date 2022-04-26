#include<iostream>
using namespace std;

// SELECTION SORT
int main() {
	
    int angka, tukar_angka, data[100];

    cout << "Masukkan jumlah data: ";
    cin >> angka;

	// Perulangan for
    for (int i = 0; i < angka; i++) {
        cout << "Data ke-" << i + 1 << " = " ;
        cin >> data[i];

        cout << endl;
    }

	// Perulangan Selection Sort
    for (int i = 0; i < angka-1; i++) {
        tukar_angka = i;
        int angka_final;
        for(int j = i+1; j < angka; j++){
            if(data[j] < data[tukar_angka]){
                tukar_angka = j;
            }
        }
        
        angka_final = data[tukar_angka];
        data[tukar_angka] = data[i];
        data[i] = angka_final;
        
        // Untuk menampilkan proses sorting 
        cout << "Proses Sorting" << endl;
		for(int m = 0; m < angka; m++){
			cout << data[m] << " ";
	    }
	    cout<<endl;
    }
	// Untuk menampilkan hasil sorting
	cout << endl << "Hasil Sorting" << endl;
    for(int i = 0; i < angka; i++){
        cout << data[i] << " ";
    }

    cin.get();
    return 0;
}
