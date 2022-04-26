#include <iostream>
using namespace std;

int main(){
	
	int jumlah_array;
	
	cout<<"masukan banyak array:";
	cin>>jumlah_array;
	
	int angka[jumlah_array];
	
	for(int i=0; i<jumlah_array; i++){
		cout<<"masukan angka ke "<<i<<" :";
		cin>>angka[i];
		cout<<endl;
	} // perulangan untuk menampilkan angka sesuai data angka pada baris 11
	
	for(int i=1; i<jumlah_array; i++){
		int key = angka[i];
		int j = i-1;
		while(j>=0 && angka[j] > key){
			angka[j+1] = angka[j];
			j--;
		}
		angka[j+1] = key;
		cout<<"proses sorting"<<endl;
		for(int m=0;m<jumlah_array;m++){
		cout<<angka[m]<<" ";
	    }
	    cout<<endl;
	}
	
	cout<<"hasil akhir"<<endl;
	for(int m=0;m<jumlah_array;m++){
		cout<<angka[m]<<" ";
	}
}
