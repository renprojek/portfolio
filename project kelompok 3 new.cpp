#include <iostream>
#include <string>
using namespace std;

int main(){
	
	//DATA LOGIN GURU & SISWA//
	string usernameGuru = "guru";
	string usernameSiswa = "siswa";
	
	string passwordGuru = "123";
	string passwordSiswa = "123";
	
	string usernameInput, passwordInput;
	 
    //TAMPILAN HALAMAN LOGIN//
	cout<<"=============================================================="<<endl;
	cout<<"==============SISTEM DATA SMK TI GLOBAL DENPASAR=============="<<endl;
	cout<<"=============================================================="<<endl;
	cout<<"=============================================================="<<endl;
	//KESEMPATAN LOGIN//
	int kesempatan = 3;
	
	while (kesempatan > 0){
		cout<<"Masukkan Username : ";
		cin>>usernameInput;
		
		cout<<"Masukkan Password : ";
		cin>>passwordInput;
		
		if((usernameInput == usernameGuru && passwordInput == passwordGuru || 
		   usernameInput == usernameSiswa && passwordInput == passwordSiswa)){
		   	break;
		   }else{
		   	kesempatan--;
		   	cout<<"Login gagal sisa kesempatan : " << kesempatan << endl;
		   }
	
	}
	cin.ignore();
	
	// ===== DATA SISWA =====
    string daftarNis[100];
    string daftarNama[100];
    string daftarKelas[100];
    string daftarJurusan[100];

    int jumlahSiswa = 0;
    string pilihan;

    // ================= LOGIN GURU =================
    if (usernameInput == usernameGuru && passwordInput == passwordGuru){

        cout << "\nLogin sebagai GURU berhasil!" <<endl;
	}
	//================= LOGIN SISWA =================
	else if(usernameInput == usernameSiswa && passwordInput == passwordSiswa){

        cout << "\nLogin sebagai SISWA berhasil!" 
		<< endl;
        string pilihanSiswa;
        
        while  (pilihanSiswa !="3"){
        	
        	cout << "\n === MENU SISWA ===" <<endl;
        	cout << "1. Lihat Data"<<endl;
        	cout << "2. Cari Data" <<endl;
        	cout << "3. Keluar" <<endl;
        	
        	cout << "Pilih menu : ";
        	getline (cin, pilihanSiswa);
        	
        	if (pilihanSiswa == "1"){
        		if (jumlahSiswa ==0){
        			cout << "Data Kosong!" <<endl;
				} else {
					for (int i = 0; i < jumlahSiswa; i++){
						cout << i+1 << "." <<
		daftarNama [i]
						<< "|" << daftarKelas[i] << endl;
						
						
					}
				}
			}
			
			else if (pilihanSiswa == "2"){
				
				string cari;
				cout << "Masukan NIS : ";
				getline (cin,cari);
				
				bool ditemukan = false;
				
				for (int i = 0; i<jumlahSiswa;i++){
					if (daftarNis[i]== cari){
						cout << "Nama : "<< daftarNama [i] <<endl;
						cout << "Kelas : "<< daftarKelas [i]<<endl;
						ditemukan = true;
					}
				}
				
				if (!ditemukan){
					cout << "Data tidak ditemukan." <<endl;
				}
			}
			else if (pilihanSiswa == "3" ){
				cout << " Keluar ..." <<endl;
			}
			else {
				cout << " Pilihan tidak valid!" <<endl;
			}
		}
    }
	else{
		cout<<"Login gagal"<<endl; 
	}
	



// ================= LOGIN GURU =================
    if (usernameInput == usernameGuru && passwordInput == passwordGuru){

        cout << "\nLogin sebagai GURU berhasil!" <<endl;

        while (true){

            cout << "\n=== MENU GURU ===" << endl;
            cout << "1. Tambah Data" << endl;
            cout << "2. Lihat Data" << endl;
            cout << "3. Cari Data" << endl;
            cout << "4. Edit Data" << endl;
            cout << "5. Hapus Data" << endl;
            cout << "6. Keluar" << endl;

            cout << "Pilih menu : ";
            getline(cin, pilihan);

            // ===== TAMBAH =====
            if (pilihan == "1"){
            	cout <<"--------------" <<endl;

                do {
                    cout << "Masukkan Nama : ";
                    getline(cin, daftarNama[jumlahSiswa]);
                } while (daftarNama[jumlahSiswa] == "");

                do {
                    cout << "Masukan NIS : ";
                    getline(cin, daftarNis[jumlahSiswa]);
                } while (daftarNis[jumlahSiswa] == "");

                do {
                    cout << "Masukan Kelas : ";
                    getline(cin, daftarKelas[jumlahSiswa]);
                } while (daftarKelas[jumlahSiswa] == "");

                do {
                    cout << "Masukan Jurusan : ";
                    getline(cin, daftarJurusan[jumlahSiswa]);
                } while (daftarJurusan[jumlahSiswa] == "");

                jumlahSiswa++;
                cout << "Data berhasil ditambahkan!" << endl;
            }

            // ===== LIHAT =====
            else if (pilihan == "2"){
            	cout<<"--------------" <<endl;

                cout << "\n=== DATA SISWA ===" << endl;

                if (jumlahSiswa == 0){
                    cout << "Data masih kosong!" << endl;
                } else {
                    for (int i = 0; i < jumlahSiswa; i++){
                        cout << i+1 << ". Nama    : " << daftarNama[i] << endl;
                        cout << "   Kelas   : " << daftarKelas[i] << endl;
                        cout << "   Jurusan : " << daftarJurusan[i] << endl;
                        cout << "   NIS     : " << daftarNis[i] << endl;
                        cout << "-----------------------------" << endl;
                    }
                }
            }

            // ===== CARI =====
            else if (pilihan == "3"){
            	cout<<"--------------" <<endl;

                string cari;
                cout << "Masukan NIS : ";
                getline(cin, cari);

                bool ditemukan = false;

                for (int i = 0; i < jumlahSiswa; i++){
                    if (daftarNis[i] == cari){
                        cout << "Nama : " << daftarNama[i] << endl;
                        cout << "Kelas : " << daftarKelas[i] << endl;
                        cout << "Jurusan : " << daftarJurusan[i] << endl;
                        ditemukan = true;
                    }
                } 

                if (!ditemukan){
                    cout << "Data tidak ditemukan." << endl;
                }
            }

            // ===== EDIT =====
            else if (pilihan == "4"){
            	cout<<"--------------" <<endl;

                string cari;
                cout << "Masukan NIS yang diedit : ";
                getline(cin, cari);

                bool ditemukan = false;

                for (int i = 0; i < jumlahSiswa; i++){
                    if (daftarNis[i] == cari){

                        cout << "Nama baru : ";
                        getline(cin, daftarNama[i]);

                        cout << "Kelas baru : ";
                        getline(cin, daftarKelas[i]);

                        cout << "Jurusan baru : ";
                        getline(cin, daftarJurusan[i]);

                        cout << "Data berhasil diubah!" << endl;
                        ditemukan = true;
                    }
                }

                if (!ditemukan){
                    cout << "Data tidak ditemukan." << endl;
                }
            }

            // ===== HAPUS =====
            else if (pilihan == "5"){
            	cout<<"--------------" <<endl;

                string cari;
                cout << "Masukan NIS yang dihapus : ";
                getline(cin, cari);

                string konfirmasi;
                cout << "Yakin hapus? (y/t): ";
                getline(cin, konfirmasi);

                if (konfirmasi == "y"){

                    bool ditemukan = false;

                    for (int i = 0; i < jumlahSiswa; i++){
                        if (daftarNis[i] == cari){

                            for (int j = i; j < jumlahSiswa - 1; j++){
                                daftarNama[j] = daftarNama[j+1];
                                daftarNis[j] = daftarNis[j+1];
                                daftarKelas[j] = daftarKelas[j+1];
                                daftarJurusan[j] = daftarJurusan[j+1];
                            }

                            jumlahSiswa--;
                            ditemukan = true;

                            cout << "Data berhasil dihapus!" << endl;
                            break;
                        }
                    }

                    if (!ditemukan){
                        cout << "Data tidak ditemukan." << endl;
                    }
                }
            }

            // ===== KELUAR =====
            else if (pilihan == "6"){
            	cout<<"--------------" <<endl;

                string keluar;
                cout << "Yakin keluar? (y/t): ";
                getline(cin, keluar);

                if (keluar == "y"){
                    cout << "Terima kasih!" << endl;
                    break;
                }
            }

            else{
                cout << "Pilihan tidak valid!" << endl;
            }
        }
    }
}

