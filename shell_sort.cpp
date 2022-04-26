#include<iostream>
 
using namespace std;
 
// Shell Sort
void ShellSort(int data[], int jumlah_data)
{
	int index, perulangan_kedua, perulangan_ketiga, angka_sementara;
	// Menentukan variabel index dengan index array yang akan dibandingkan nilainya
	for(index = jumlah_data/2; index > 0; index = index/2)
	{
		// Perulangan Kedua
		for(perulangan_kedua = index; perulangan_kedua < jumlah_data; perulangan_kedua++)
		{
			// Perulangan Ketiga
			for(perulangan_ketiga = perulangan_kedua-index; perulangan_ketiga >= 0; perulangan_ketiga = perulangan_ketiga-index)
			{
				// Jika nilai dari data[perulangan_ketiga+index] lebih besar dari data[perulangan_ketiga]
				if(data[perulangan_ketiga+index] >= data[perulangan_ketiga])
				break;
				// Menukar nilai
				else
				{
					angka_sementara = data[perulangan_ketiga];
					data[perulangan_ketiga] = data[perulangan_ketiga+index];
					data[perulangan_ketiga+index] = angka_sementara;
				}
			}
		}
	}
}


int main()
{	

	int jumlah_data, index;
	cout<<"\nMasukkan Jumlah Data: ";
	cin>>jumlah_data;
	cout << endl;
 
	int data[jumlah_data];
	for(index = 0; index < jumlah_data; index++)
	{
		cout<<"Masukkan Elemen Ke "<<index+1<<": ";
		cin>>data[index];
	}
 
	ShellSort(data, jumlah_data);
 
	// Menampilkan data yang telah di urutkan
	cout<<"\nData Yang Telah Di Urutkan ";
	for (index = 0; index < jumlah_data; index++)
	{
		cout << " " << data[index];	
	}
 
	return 0;
}
