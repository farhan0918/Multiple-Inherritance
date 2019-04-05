#include <iostream>

using namespace std;

class persegi{
	public:
		void jenis_persegi(){
			cout<<"\nJenis Bangunan Adalah Persegi"<<endl;
		}
		int Luas(int value_1,int value_2){
			return 0; 
		}
};

class persegi_panjang{
	public:
		void jenis_persegipanjang(){
			cout<<"\nJenis Bangunan Adalah Persegi Panjang"<<endl;
		}
		int Luas(int value_1,int value_2){
			return 0; 
		}
};

class segiempat : public persegi, public persegi_panjang{
	public:
		int Luas(int value_1,int value_2){
			return value_1*value_2; 
		}
};

int main(){
	int nilai_1,nilai_2;
	segiempat luas;
	cout<<"Masukkan Nilai Sisi 1 : ";
	cin>>nilai_1;
	cout<<"Masukkan Nilai Sisi 2 : ";
	cin>>nilai_2;
	if(nilai_1==nilai_2){
		luas.jenis_persegi();
	}
	else{
		luas.jenis_persegipanjang();
	}
	cout<<"\nLuas bangunan : "<<luas.Luas(nilai_1,nilai_2);
	return 0;
}

