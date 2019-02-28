#include <iostream>
#include <stdlib.h>

using namespace std;

class penambahanData{
private:
int stocks;

public :
void Pensil ();
void Buku ();
void Penghapus ();
};

void penambahanData::Pensil(){
int stock = 8, stokPensil, total;
cout <<"Masukan jumlah stok barang = "; cin>> stokPensil;
total = stock + stokPensil;
cout <<"Total stok pesil adalah "<< total<<endl;
}

void penambahanData::Buku (){
int stock = 10, stokBuku, total;
cout <<"Masukan jumlah stok barang = "; cin>> stokBuku;
total = stock + stokBuku;
cout <<"Total stok buku adalah " << total<<endl;
}

void penambahanData::Penghapus (){
int stock = 28, stokPenghapus, total;
cout <<"Masukan jumlah stok barang = "; cin>> stokPenghapus;
total = stock + stokPenghapus;
cout <<"Total stok penghapus adalah "<<endl;
}

int main (int argc, char** argv){
int pilih;
cout <<"No. \t Nama Barang \t Stok "<<endl;
cout <<"1. \t Pensil \t 8 "<<endl;
cout <<"2. \t Buku \t\t 18"<<endl;
cout <<"3. \t Penghapus \t 28"<<endl;

cout <<"Pilih barag yang akan ditambah stoknya [1,2,3] = "; cin >> pilih;

if (pilih == 1){
	penambahanData pensil;
	pensil.Pensil() ;
	cout <<"Terima kasih"<<endl;
}
if (pilih == 2){
	penambahanData buku;
	buku.Buku();
	cout <<"Terima Kasih"<<endl;
}
if (pilih == 3){
	penambahanData penghapus;
	penghapus.Penghapus();
	cout <<"Terima kasih"<<endl;
}

return 0;
system("PAUSE");

}


