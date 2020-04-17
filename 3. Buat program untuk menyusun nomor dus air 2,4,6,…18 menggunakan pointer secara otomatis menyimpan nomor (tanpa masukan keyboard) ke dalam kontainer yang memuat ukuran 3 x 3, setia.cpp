//Buat program untuk menyusun nomor dus air 2,4,6,…18 menggunakan pointer secara otomatis menyimpan nomor (tanpa masukan keyboard) ke dalam kontainer yang memuat ukuran 3 x 3, setiap dus akan diberi nomor sebanyak jumlah dus sesuai ukuran kontainer (berikan penjelasan program)
//Jawabannya:
#include <iostream>
using namespace std;

int dus[3][3]={{2,4,6},{8,10,12},{14,16,18}};
int per, *ket;
void fung1(int a){
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			per=dus[i][j];
			ket=&per;
			cout<<*ket<<" ";
		}
	}cout<<endl;
}

void fung2(int a){
	int k=1;
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			per=dus[i][j];
			ket=&per;
			cout<<"Jumlah dus "<<k++<<": "<<*ket<<endl;
			
		}
	}
}

int main(){
	int a=3, l=9;
	cout<<"Jumlah Nomor : "<<l<<endl;
	cout<<"Nomor Dus : ";
	fung1(a);
	fung2(a);
	return 0;
}

