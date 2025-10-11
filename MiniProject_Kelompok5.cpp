#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Deklrasi variabel
    int total = 0;
    int anak = 0, remaja = 0, dewasa = 0;
    int pilih, usia;
    char JenisKelamin;
    string nama;

    // Deklarasi variabel untuk peserta tertua dan termuda
    int UsiaTertua = 0, UsiaTermuda = 0;
    string NamaTertua = "-", NamaTermuda = "-";

    // Halaman menu utama
    while (true) {
        cout << "\n+===========================================+\n";
        cout << "| PENDAFTARA LOMBA DIES NATALIS ITERA KE-11 |\n";
        cout << "+-------------------------------------------+\n";
        cout << "|                MENU UTAMA                 |\n";
        cout << "+-------------------------------------------+\n";
        cout << "| 1. | Pendaftaran Peserta                  |\n";
        cout << "| 2. | Lihat Rekap Peserta Lomba            |\n";
        cout << "| 3. | Keluar                               |\n";
        cout << "+===========================================+\n";
        cout << "Silahkan Pilih Menu: ";
        cin >> pilih;
        // Validasi input pilihan menu, agar pilihan sesuai dengan menu yang ada
        if (cin.fail() || (pilih < 1 || pilih > 3)) {
            cin.clear();
            cin.ignore(1000, '\n');
            // output yang keluar jika memilih opsi yang tidak sesuai menu
            cout << "\n+===========================================+\n";
            cout << "|        Maaf, Pilihan Tidak Valid!         |\n";
            cout << "|   Silahkan Masukkan Pilihan Sesuai Menu   |\n";
            cout << "+===========================================+\n";
            continue;
        }
        cin.ignore(1000, '\n');
        
        // Input data peserta
        if (pilih == 1) {
            cout << "\nSelamat Datang di Menu Pendaftaran Peserta\n";
            cout << "Masukkan Nama Peserta: ";
            getline(cin, nama);
            cout << "Masukkan Usia Peserta: ";
            cin >> usia;
            cin.ignore(1000, '\n');
            cout << "Masukkan Jenis Kelamin (L/P): ";
            cin >> JenisKelamin;
            cin.ignore(1000, '\n');

            // Output yang akan keluar setelah pendaftaran peserta berhasil
            cout << "\n+===========================================+\n";
            cout << "|                DATA PESERTA               |\n";
            cout << "+-------------------------------------------+\n";
            cout << "| Nama          : " << setw(25) << left << nama << " |\n";
            cout << "| Usia          : " << setw(25) << left << usia << " |\n";
            cout << "| Jenis Kelamin : ";
                if (JenisKelamin == 'L' || 'l') {
                    cout << setw(25) << left << "Laki-laki" << " |\n";
                } else if (JenisKelamin == 'P' || 'p') {
                    cout << setw(25) << left << "Perempuan" << " |\n";
                } else {
                    cout << setw(25) << left << "Tidak Diketahui" << " |\n";
                }
            cout << "| Kategori      : ";
                if (usia <= 12) {
                    cout << setw(25) << left << "Anak-anak" << " |\n";
                anak++;
                } else if (usia <= 17) {
                    cout << setw(25) << left << "Remaja" << " |\n";
                remaja++;
                } else {
                    cout << setw(25) << left << "Dewasa" << " |\n";
                dewasa++;
                }
            total++;
            cout << "+-------------------------------------------+\n";
            cout << "|            PENDAFTARAN BERHASIL!          |\n";
            cout << "+===========================================+\n";
        

             // Logika untuk mencari peserta tertua dan termuda pada menu rekap
            if (total == 1) {
                UsiaTertua = UsiaTermuda = usia;
                NamaTertua = NamaTermuda = nama;
            } else {
                if (usia > UsiaTertua) {
                UsiaTertua = usia;
                NamaTertua = nama;
                }
                if (usia , UsiaTermuda) {
                UsiaTermuda = usia;
                NamaTermuda = nama;
                }
            }
        }
        // Output hasil rekap peserta
        else if (pilih == 2) {
            cout << "\n+===========================================+\n";
            cout << "|            REKAP PESERTA LOMBA            |\n";
            cout << "+-------------------------------------------+\n";
            cout << "| Anak-anak       : " << setw(23) << left << anak << " |\n";
            cout << "| Remaja          : " << setw(23) << left << remaja << " |\n";
            cout << "| Dewasa          : " << setw(23) << left << dewasa << " |\n";
            cout << "| Total Peserta   : " << setw(23) << left << total << " |\n";
            cout << "+-------------------------------------------+\n";
            cout << "| Peserta Tertua  : " << setw(15) << left << NamaTertua << setw(2) << right << UsiaTertua << " tahun |\n";
            cout << "| Peserta termuda : " << setw(15) << left << NamaTermuda << setw(2) << right << UsiaTermuda << " tahun |\n";            
            cout << "+-------------------------------------------+\n";
            cout << "|    TERIMAKASIH TELAH BERPARTISIPASI       |\n";
            cout << "+===========================================+\n";

            // Ouput pada pilihan 3 jika keluar dari program
        } else if (pilih == 3) {
            cout << "\n+=============================================+\n";
            cout << "| Terima Kasih Telah Menggunakan Program Ini! |\n";
            cout << "| Dari Kami        : Kelompok 5 Core Prodi B  |\n";
            cout << "| Anggota Kelompok : Rayyan, Raffi, Laurent   |\n";
            cout << "+=============================================+\n";
            break;
        }
        
    }
    return 0;
}
