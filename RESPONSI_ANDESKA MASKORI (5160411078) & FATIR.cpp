#include <cstdlib>
#include <iostream.h>
#include <windows.h>
#include <conio.h>
#include <fstream.h>
#include <stdio.h>

using namespace std;
char nama[40],jawab;
int jml,kb;
long kode_buku;
long int harga,total,kembalian=0,bayar;
string isiFile,buku,penerbit;

void wait ( double seconds )
{
  clock_t endwait;
  endwait = clock () + seconds * CLOCKS_PER_SEC ;
  while (clock() < endwait) {}
}

void buku1(){
  buku="STRUKTUR DATA";
  penerbit="Erlanga";
}
void buku2(){
  buku="DESAIN WEB";
  penerbit="Adit";  
}
void buku3(){
  buku="ALPRO";
  penerbit="Eko"; 
}
void buku4(){
  buku="BAHASA INGGRIS";
  penerbit="Eko";   
}
void buku5(){
  buku="RPL";
  penerbit="Putri";   
}
void buku6(){
  buku="RTI";
  penerbit="Abdul";   
}
void buku7(){
  buku="KALKULUS";
  penerbit="Indri"; 
}
void buku8(){
  buku="KALKULUS II";
  penerbit="Ebit";  
}
void buku9(){
  buku="PEMROGRAMAN ALGORITMA";
  penerbit="Indah";   
}
void buku10(){
  buku="MATEMATIKA DASAR";
  penerbit="Indri";   
}

int clear(){
  system ("cls");
}

int time(){
 for(int i=5;i>=1;i--){

  system("cls");
  system("color 0C");
  cout<<endl<<endl<<endl<<endl<<endl;
  cout<<"                                  Tunggu Sebentar"<<endl<<endl;
  cout<<"                                         "<<i;wait(1);
}
system("cls");
return EXIT_SUCCESS;
}

int loading()
{
  system("color 0A");
  int i,j;
  for(i=0;i<80;i++)
  {
    cout<<endl<<endl<<endl<<endl;

    cout<<"================================================================================ "<<endl;
    cout<<"                             LOADING "<<i+20<<"%";
    cout<<"\n";
    cout<<"==============================================================================="<<endl;
    for(j=0;j<i;j++)
    {
      cout<<">";

    }
    cout<<"\n==============================================================================="<<endl;
    system ("cls");
  }
}

int exit(){
  int i,j;
  for(i=0;i<80;i++)
  {
    cout<<endl<<endl<<endl<<endl;

    cout<<" LOADING "<<i+20<<"%"<<endl;
    cout<<"\n";
    for(j=0;j<i;j++)
    {

    }
    system ("cls");
  }
}

int login()
{
  char* username;
  char* password;
  int i,j;
  
  loginback:
  system ("cls");
  COORD coord;
  username ="andeska";
  password ="utyhebat";
  char konfirmasi_username[16];
  char konfirmasi_password[16];
  cout << endl<<endl<<endl;
  cout <<"+===================================================+"<<endl;
  cout <<"|                     LOGIN OPERATOR                |" << endl;
  cout <<"+===================================================+" << endl;
  cout <<"|  Username : "; cin >> konfirmasi_username;
  cout <<"|  Password : "; cin >> konfirmasi_password;
  if (strcmp (username, konfirmasi_username) == 0){
    if (strcmp (password, konfirmasi_password) == 0){
    }
    else if (strcmp (password, konfirmasi_password) != 0){
      cout << endl;
      cout << "Maaf, Username/Password Yang Anda Masukkan Salah !" << endl;
            getch();
 goto loginback;
    }
  }
  else{
    cout<<endl;
    cout << "Maaf, Username/Password Yang Anda Masukkan Salah !" << endl;
      getch();
  cout<<endl;
 goto loginback;
  }

}


int kasir(){
system("cls");
  awal:
  cout<<"\t\t============================================\n";
  cout<<"\t\t\t PROGRAM PENJUALAN PENJUALAN MODUL DI UTY ";
  cout<<"\n\t\t==========================================\n\n";

  cout<<"\n\t   ================ GRAMEDIA INDAH ====================="<<endl;
  cout<<"\n ===================================================";
  cout<<"\n| KB | Judul Buku         | Penerbit  | Harga       |";
  cout<<"\n|===================================================";
  cout<<"\n| 1  | STRUKTUR DATA      | Erlanga   | 68.000      |";
  cout<<"\n| 2  | DESAIN WEB         | Adit      | 70.000      |";
  cout<<"\n| 3  | ALPRO              | Eko       | 48.000      |";
  cout<<"\n| 4  | BAHASA INGGRIS     | Jaya      | 60.000      |";
  cout<<"\n| 5  | RPL                | Putri     | 80.000      |";
  cout<<"\n| 6  | RTI                | Abdul     | 40.000      |";
  cout<<"\n| 7  | KALKULUS           | Indri     | 75.000      |";
  cout<<"\n| 8  | KALKULUS II        | Ebit      | 65.000      |";
  cout<<"\n| 9  | ALGORITMA          | Indah     | 87.000      |";
  cout<<"\n| 10 | MATEMATIKA DASAR   | Indri     | 75.000      |";
  cout<<"\n|===================================================";
  cout<<"\n\n Nama Pembeli : ";cin>>nama;
  cout<<"\n Jumlah Buku : ";cin>>jml;
  kb:
  cout<<"\n Pembeli Yang Bernama : "<<nama<<endl;
  ofstream fl("data.txt",ios::app);
  if(fl.is_open()){
   fl <<"_________________________________________________\n"<<endl;
   fl <<" Jumlah Buku   : " << jml<<endl;
   fl <<"\n"<<endl;
   for(int jm=1;jm<=jml;jm++){
    cout<<"\n Kode Buku (1-10) : ";cin>>kode_buku;
    if (kode_buku==1)
    {
      buku1();
      harga=68000;
    }
    else if (kode_buku==2)
    {
      buku2();
      harga=70000;
    }
    else if (kode_buku==3)
    {
      buku3();
      harga=48000;
    }
    else if (kode_buku==4)
    {
      buku4();
      harga=60000;
    }
    else if (kode_buku==5)
    {
      buku5();
      harga=80000;
    }
    else if (kode_buku==6)
    {
      buku6();
      harga=40000;
    }
    else if (kode_buku==7)
    {
      buku7();
      harga=75000;
    }
    else if (kode_buku==8)
    {
      buku8();
      harga=65000;
    }
    else if (kode_buku==9)
    {
      buku9();
      harga=87000;
    }
    else if (kode_buku==10)
    {
      buku10();
      harga=75000;
    }
    else
    {
     cout << "Maaf, Kode Buku Salah silahkan coba lagi !!! "<<endl;
     goto kb;
   }
   cout<<"\n ==================================== "<<endl;
   cout<<" Nama Buku : "<<buku<<endl;
   cout<<" Penerbit Buku : "<<penerbit<<endl;
   cout<<"\n Harga Buku   : Rp."<<harga<<endl;
   total+=harga;
   fl << isiFile;
   fl <<" Nama          : " << nama<<endl;
   fl <<" Kode Buku     : " << kode_buku<<endl;
   fl <<" Nama Buku     : " << buku<<endl;
   fl <<" Penerbit Buku : " << penerbit<<endl;
   fl <<" Harga/Buku    : Rp."<<harga<<endl;
   fl <<"_________________________________________________\n\n"<<endl;
 }
 cout<<" ==================================== + "<<endl<<endl;
 cout << " Total Harga  : Rp."<<total<<endl;
 bayar:
 cout << " Bayar        : Rp.";
 cin >> bayar;"\n";

 if (bayar < total)
 {
  cout << "Maaf, Uang Anda Kurang Maz !!! "<<endl;
  goto bayar;
}


cout << "_________________________________________\n\n";
kembalian = bayar - total;
cout << "Kembalian    : Rp."<<kembalian<<"\n";
cout << endl;
cout << "=========================================\n";
cout << endl<<endl;
cout<<"Tekan ENTER untuk kembali ke menu ";

fl <<" Total Harga   : Rp."<<total<<endl;
fl <<" Bayar         : Rp."<<bayar<<endl;
fl <<" Kembalian     : Rp."<<kembalian<<endl;
fl <<"+===================================================+"<<endl;

}
getch();
cout<<endl;
}

int catatan(){
  string baca;
  ifstream data;
  cout <<"+===================================================+"<<endl;
  cout <<"|                      HISTORI                      |" << endl;
  cout <<"+===================================================+" << endl;
  data.open ("data.txt");
  while(data){
    getline(data,baca);
    cout<<baca<<endl;
  }
  cout<<"Tekan ENTER untuk kembali ke menu ";
  getch();
  cout<<endl;
}

int main(int argc, int ulang, char x, char *argv[])
{
  system("title Software Kasir");
  loading();
  login();
  clear();
  ulang:
  cout <<"+===================================================+"<<endl;
  cout <<"|                 PILIHAN MENU                      |" << endl;
  cout <<"+===================================================+" << endl;
  cout <<"| 1. Kasir Buku                                     |"<<endl;
  cout <<"| 2. Catatan Pembelian                              |"<<endl;
  cout <<"| 3. Keluar                                         |"<<endl;
  cout <<"+===================================================+"<<endl;
  cout <<" Masukkan Pilihan : ";cin>>x;
  switch(x){
    case '1':
    kasir();
    clear();
    goto ulang;
    break;

    case '2':
    clear();
    catatan();
    clear();
    goto ulang;
    break;
    case '3':
    time();
    exit();
    break;
    default:
    cout<<"Kode Salah";
    clear();
    goto ulang;
    break;
  }
  return EXIT_SUCCESS;
}
