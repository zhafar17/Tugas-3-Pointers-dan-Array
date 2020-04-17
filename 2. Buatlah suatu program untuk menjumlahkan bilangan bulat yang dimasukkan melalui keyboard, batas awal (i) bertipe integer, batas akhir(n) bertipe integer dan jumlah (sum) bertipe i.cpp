//Buatlah suatu program untuk menjumlahkan bilangan bulat yang dimasukkan melalui keyboard, batas awal (i) bertipe integer, batas akhir(n) bertipe integer dan jumlah (sum) bertipe integer untuk menyimpan total bilangan bulat menggunakan pointer (berikan penjelasan program)
//Jawabannya:
#include<iostream>
using namespace std;
void jumlah(int *htung){//membuat fungsi pointer dengan nama jumlah
	int angka[100];//mendeklarasikan variabel bertipe data integer dengan nama angka dengan batas 100
	int total=0;//mendeklarasikan variabel bertipe data integer dengan nama total yang bernilai 0
	for(int a=1;a<=*htung;a++){//melakukan perulangan untuk menginput angka
		cin>>angka[a];//menginput angka yang akan dijumlahkan
	}
	for(int a=1;a<=*htung;a++){//melakukan perulangan untuk menjumlahkan angka yang telah diinput
		total=total+angka[a];//rumus untuk menjumlahkan angka yang diinput
	}
	cout<<total;//menampilkan hasil penjumlahan
}
int main(){
	int brpa ;	//mendeklarasikan variabel tipe data integer dengan nama brp
	cout<<"Masukkan jumlah bilangan : ";
	cin>>brpa;//menginput jumlah bilangan
	jumlah(&brpa);//memanggil fungsi jumlah
	return 0;
}

