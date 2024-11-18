#include<iostream>
#include<string>
using namespace std;

int main() {
    char pilihan;
    int hasil;
    string benar = "jawabannya benar  ";
    string salah = "salah";
    string baris = "-------------------------";
    string soal2, soal3, soal4, soal5, soal6, soal7, soal8, soal9, soal10,
           soal11;
    string pilihan2;
    cout << "v.12.3" << endl;
    cout << "       --------------------------------------" << endl;
    cout << "       |            HELOWW KAWAN            |" << endl;
    cout << "       --------------------------------------" << endl;
    cout << "selamat datang di sistem "<< endl<<"mengasah otak anda" <<endl<<baris<<endl;
    cout << "Apakah Anda ingin melanjutkan (n/y) = ";
    cin >> pilihan;

    if (pilihan == 'y' || pilihan == 'Y') {
        cout << "--------------------" << endl
             << "| Anda melanjutkan |" << endl
             << "--------------------" << endl;
        cout << endl << "Berapakah hasil dari 50 + 50 - 10 ? = ";
        cin >> hasil;

        if (hasil == 90) {
            cout << endl << benar << endl;
            cout << baris << endl;
            cout << "Soal ke-2" << endl << endl;

            cout << "Apa nama ibukota Indonesia? = ";
            cin.ignore();
            getline(cin, soal2);


            if (soal2 == "Jakarta" || soal2 == "jakarta" || soal2 == "JAKARTA") {
                cout << endl << benar << endl;
                cout << baris <<endl;
                cout << "soal ke-3"<< endl <<endl << "apa nama kabupaten Jawabarat = ";

                getline(cin, soal3);
                if (soal3 == "Cianjur" || soal3 == "cianjur" || soal3 == "CIANJUR") {
                    cout<<endl<< benar<< endl ;
                    cout << baris <<endl;
                    cout << "soal-4" << endl << endl<< "apa makanan manusia = ";
                    getline(cin, soal4);
                    if (soal4 == "nasi" || soal4 == "Nasi" || soal4 == "NASI") {

                        cout <<endl<< benar << endl;
                        cout << baris <<endl;
                        cout << "soal-5"<<endl;

                        cout <<endl<< "ok awalan udah selesai apakah mau "<<endl<<"melanjutkan (n/y)? = ";
                        getline(cin, pilihan2);
                        if (pilihan2 == "y" || pilihan2 == "Y") {
                            cout << "--------------------" << endl
                                 << "| Anda melanjutkan |" << endl
                                 << "--------------------" << endl
                                 << "berisi 20 soal acak"<< endl;
                            cout << endl<< "berapakah hasil dari 26 + 72 -73 ?  =   ";
                            getline(cin, soal5);
                            cout << endl<<"soal-5 Hamzah";
                            if (soal5 == "25") {
                                cout << endl << benar<<endl ;
                                cout << baris<<endl;

                                cout << "soal-6"<<endl;
                            } else {
                                cout << salah;
                            }

                            cout << endl<< "ok berapakah hasil dari 46 + 92 -73 ?  =   ";
                            getline(cin, soal6);
                            if (soal6 == "65") {
                                cout << endl << benar<<endl ;
                                cout << baris<<endl;

                                cout << "soal-7"<< endl;
                            } else {
                                cout << salah;
                            }

                            cout << endl<< "siapa yang membuat perogram ini,"<< endl<<" jawaban nya ada di soal 5 =  ";
                            getline(cin, soal7);
                            cout << "tanya Hamzah";
                            if (soal7 == "hamzah" || soal7 == "Hamzah" || soal7 == "HAMZAH") {
                                cout << endl << benar<<endl ;
                                cout << baris<<endl;

                                cout << "soal-8"<< endl;
                            } else {
                                cout << salah;
                            }

                            cout << endl<< "siapa nama walikels anda??=  ";
                            getline(cin, soal8);
                            if (soal8 == "agung" || soal8 == "Agung" || soal8 == "AGUNG") {
                                cout << endl << benar<<endl ;
                                cout << baris<<endl;

                                cout << "soal-9"<<endl;
                            } else {
                                cout << salah;
                            }

                            cout << endl<< "bahasa pemrograman apa yang di gunakan sistem ini?=  ";
                            getline(cin, soal9);
                            if (soal9 == "c++" || soal9 == "C++" || soal9 == "cpp") {
                                cout << endl << benar<<endl ;
                                cout << baris<<endl;

                                cout << "soal-10"<<endl;
                            } else {
                                cout << salah;
                            }

                        } else if(pilihan2 == "n" || pilihan2 == "N") {
                            cout << "---------------------" << endl
                                 << "| Tidak melanjutkan |" << endl
                                 << "---------------------" << endl
                                 << "payahh"<< endl;
                        } else {
                            cout << "tidak valid";
                        }



                    } else {
                        cout << salah;
                    }
                } else {
                    cout << salah;
                }
            } else {
                cout << salah << endl;
            }


        } else {
            cout << salah << endl;
        }

    } else if (pilihan == 'n' || pilihan == 'N') {
        cout << "---------------------" << endl
             << "| Tidak melanjutkan |" << endl
             << "---------------------" << endl;
    } else {
        cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}