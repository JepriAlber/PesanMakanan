/*
            -------------------------------------------------------------------
                -KONTAK
                -IG : @jeprialber  =>SLOW RESPON
                -Email : jeprialber@student.uir.ac.id => FAST RESPON
            -------------------------------------------------------------------
*/

#include <iostream>
using namespace std;

int main(){
int pil;
int pil2;
int totalHarga;
int jumlahPesanan;


cout<<"---------------ICAK ICAKNYA CAFE------------\n";
cout<<"\tMENU MAKANAN \n";
cout<<"[1].MAKANAN\n";
cout<<"[2].MINUMAN\n";
cout<<"INPUTKAN PILIHAN : ";
cin>>pil;

    if(pil==1)
    {
        cout<<"\nMENU MAKANAN\n";
        cout<<"[1].NASGOR  10K\n";
        cout<<"[2].MINAS   15K\n";
        cout<<"INPUTKAN PILIHAN : ";
        cin>>pil2;
                 if(pil2==1)
                    {
                        cout<<"\nNASGOR\n";
                        cout<<"MASUKAN JUMLAH PESANAN : ";
                        cin>>jumlahPesanan;
                        totalHarga=jumlahPesanan*10000;
                        cout<<"TOTAL HARGA : RP"<<totalHarga<<"";

                    }
                    else if(pil2==2)
                    {
                        cout<<"\nMINAS\n";
                        cout<<"MASUKAN JUMLAH PESANAN : ";
                        cin>>jumlahPesanan;
                        totalHarga=jumlahPesanan*15000;
                        cout<<"TOTAL HARGA : RP"<<totalHarga<<"";
                    }
                else
                    {
                        cout<<"PILIHAN TIDAK ADA BUNG...\n";
                    }
    }
    
    else if(pil==2)
    {
        cout<<"\nMENU MINUMAN\n";
        cout<<"[1].AIR PUTIH  15K\n";
        cout<<"[2].AIR BENING 4K\n";
        cout<<"INPUTKAN PILIHAN : ";
        cin>>pil2;
               if(pil2==1)
                {
                    cout<<"\nAIR PUTIH\n";
                    cout<<"MASUKAN JUMLAH PESANAN : ";
                    cin>>jumlahPesanan;
                    totalHarga=jumlahPesanan*15000;
                    cout<<"TOTAL HARGA : RP"<<totalHarga<<"";
                }
                else if(pil2==2)
                {
                    cout<<"\nAIR BENING\n";
                    cout<<"MASUKAN JUMLAH PESANAN : ";
                    cin>>jumlahPesanan;
                    totalHarga=jumlahPesanan*4000;
                    cout<<"TOTAL HARGA : RP"<<totalHarga<<"";
                }
             else
                {
                    cout<<"PILIHAN TIDAK ADA BUNG...\n";
                }
    }

    else
    {
        cout<<"\nMILIH TU BAIK BAIK LAH....\n";
    }
    return 0;
}
