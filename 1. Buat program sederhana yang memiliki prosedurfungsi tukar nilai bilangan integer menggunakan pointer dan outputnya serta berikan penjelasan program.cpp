//Buat program sederhana yang memiliki prosedur/fungsi tukar nilai bilangan integer menggunakan pointer dan outputnya serta berikan penjelasan program
//Jawabannya:
#include <iostream>
using namespace std;

void swap(int *st, int nd){
	int sement = *st; //nilai sement sama dengan nilai st yang telah dikirm dari p
	st = &nd; //nilai st sama dengan nilai yang ada di alamat  nd
	nd = sement; //nilai nd sama dengan nilai sement yang nilainya berasal dari st
}
int main() {
	int p=2,k=4;
	
	cout<<"Nilai sebelum ditukar : "<<endl;
	cout<<"Nilai A : "<<p<<endl;
	cout<<"Nilai B : "<<k<<endl;
	swap (p,k); //nilai p dikirm ke st dan nilai k dikirim ke nd
	cout<<"Nilai Setelah ditukar : "<<endl;
	cout<<"Nilai A : "<<p<<endl;
	cout<<"Nilai B : "<<k<<endl;
	
return 0;
}

