#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

void judul(){
	system("color 3");
	cout << "\t\t=======================" << endl;
	cout << "\t\t== Selamat Datang Di ==" << endl;
	cout << "\t\t== @xagarajoki.store ==" << endl;
	cout << "\t\t=======================" << endl;
}

void dataClient(string data){
	cout << data << endl;
}

string email, hero, passw, nickname, loginVia;
string noHp, idserver;
int menu, pilih; 
char back;

int main(){
	
	do {
		
	system("CLS");
	judul();
	dataClient("\n\tSILAHKAN LENGKAPI DATA DENGAN BENAR!");
	
	cout << "\n\tMasukkan Email : "; cin >> email;
	cout << "\n\tMasukkan Password : "; cin >> passw;
	cout << "\n\tMasukkan Nomor HP : "; cin >> noHp;
	cout << "\n\tRequest Hero Yang Digunakan : "; cin >> hero;
	cout << "\n\tUser ID : "; cin >> idserver;
	cout << "\n\tNickname : "; cin >> nickname;
	cout << "\n\tLogin Via (Moonton/VK/GP/TikTok) : "; cin >> loginVia;
	cout << endl;
	
	system("CLS");
	struct {
		string rank;
		string harga;
	} paket1, paket2, paket3, paket4;
	
	//paket 1
	paket1.rank = "\t1. Epic V >> Legend V";
	paket1.harga = "\t\tRp 150.000";
	//paket 2
	paket2.rank = "\t2. Legend V >> Mythic V";
	paket2.harga = "\t\tRp 200.0000";
	//paket 3
	paket3.rank = "\t3. Mythic V >> Mythic Glory (600)";
	paket3.harga = "\t\tRp 3.500.000";
	//paket 4
	paket4.rank = "\t4. Mythic Glory (600) >> (1000)";
	paket4.harga = "\t\tRp 1.800.000";
	
	//print paket
	cout << "\tLIST PAKET JOKI : " << endl;
	cout << endl;
	cout << paket1.rank << endl; 
	cout << paket1.harga << endl;
	cout << paket2.rank << endl; 
	cout << paket2.harga << endl;
	cout << paket3.rank << endl; 
	cout << paket3.harga << endl;
	cout << paket4.rank << endl; 
	cout << paket4.harga << endl;
	cout << endl;
	cout << "\t==================" << endl;
	cout << "\tPILIH PAKET JOKI : "; cin >> menu;
	cout << "\t==================" << endl;
	cout << endl;
	switch(menu){
		case 1:
			cout << paket1.rank << endl; cout << paket1.harga << endl;	
		break;
		
		case 2:
			cout << paket2.rank << endl; cout << paket2.harga << endl;
		break;
		
		case 3:
			cout << paket3.rank << endl; cout << paket3.harga << endl;
		break;
		
		case 4:
			cout << paket4.rank << endl; cout << paket4.harga << endl;
		break;
		
		default:
			cout << "\tPAKET TIDAK DITEMUKAN...\n";
	}
	
	int menu2;
	//payment methode
	int payment[5];
	//BCA
	payment[0] = 01;
	//Mandiri
	payment[1] = 02;
	//BJB
	payment[2] = 03;
	//DANA
	payment[3] = 04;
	//OVO
	payment[4] = 05;
	cout << endl;
	cout << "\t=================" << endl;
	cout << "\tKODE PEMBAYARAN : " << endl;
	cout << "\t=================" << endl;
	cout << endl;
	cout << "\t01/BCA\n\t02/Mandiri\n\t03/BJB\n\t04/DANA\n\t05/OVO" << endl;
	cout << "\n\tPilih : "; cin >> menu2;
	cout << endl;
	
	switch(menu2){
		case 1:
			cout << "\t" << payment[0] << ". " << "BCA / 0381810467" << endl;
		break;
		
		case 2:
			cout << "\t" << payment[1] << ". " << "Mandiri / 00912734691" << endl;
		break;
		
		case 3:
			cout << "\t" << payment[2] << ". " << "BJB / 00613268721" << endl;
		break;
		
		case 4:
			cout << "\t" << payment[3] << ". " << "DANA / 081219451122" << endl;
		break;
		
		case 5:
			cout << "\t" << payment[4] << ". " << "OVO / 081219451122" << endl; 
		break;
		
		default:
			cout << "METODE PEMBAYARAN TIDAK DITEMUKAN!" << endl;
		
	}
	cout << endl;
	cout << "\tDATA PEMBELI : " << endl;
	cout << "\n\t" << "Email : " << email << endl;
	cout << "\t" << "Password : " << passw << endl;
	cout << "\t" << "Nomor HP : " << noHp << endl;
	cout << "\t" << "Hero : " << hero << endl;
	cout << "\t" << "User ID : " << idserver << endl;
	cout << "\t" << "Nickname : " << nickname << endl;
	cout << "\t" << "Login Via : " << loginVia << endl;
	cout << endl;
	
	cout << "\tJIKA SUDAH SELESAI SILAHKAN SCREENSHOT \n\tHASIL PEMBAYARAN & DATA DI ATAS LALU KIRIM KE NOMOR - 081219451122" << endl;
	cout << "\n\tKEMBALI KE MENU AWAL (Y/N) : "; 
	cin >> back;
	}while (back == 'Y' || back == 'y');
	
	return 0;
}
