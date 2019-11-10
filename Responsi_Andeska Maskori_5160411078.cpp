#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
float awal ()
    {
          cout<<" --------------------------------------------------------------- "<<endl;
          cout<<"                 PROGRAM DAFTAR NILAI MATA KULIAH        "<<endl;
          cout<<" --------------------------------------------------------------- "<<endl;
    }
float tampilan ()
    {
          cout<<" --------------------------------------------------------------- "<<endl;
          cout<<"                        DAFTAR NILAI MAHASISWA "<<endl;
          cout<<"                    MATERI : PERKULIAHAN        "<<endl;
          cout<<" --------------------------------------------------------------- "<<endl;
          cout<<" No.   Nama       	    Nim                  Nilai      	       Grade "<<endl;
          cout<<"       Mahasiswa      Mahasiswa  ---------------------------------------"<<endl;
          cout<<"                      			 Orkom    Jarkom    So    Akhir  "<<endl;
          cout<<" --------------------------------------------------------------- "<<endl;  
    }
float terakhir ()
    {
          cout<<" -----------------------------------------------------------------------------"<<endl;
    }


int main(int argc, char *argv[])
{
    int i;
    int jum;
    char ulang ;
    char nama_mahasiswa [50][100];
    char nim_mahasiswa [20][50];
    float nilai_orkom  [10];
    float nilai_jarkom [10];
    float nilai_so     [10];
    float nilai_akhir   [10];
   
    do
    {
        awal ();       
        cout<<" Masukkan Jumlah mahasiswa = ";cin>>jum;
        cout<<endl;
        terakhir ();    
       
        for (i=1;i<=jum;i++)
        {
            cout<<" Mahasiswa ke -> "<<i<<endl;
            cout<<" Nama Mahasiswa  = ";cin>>nama_mahasiswa [i];
            cout<<" Nim Mahasiswa   = ";cin>>nim_mahasiswa [i];
            cout<<" Nilai Orkom     = ";cin>>nilai_orkom [i];
            cout<<" Nilai Jarkom    = ";cin>>nilai_jarkom [i];
            cout<<" Nilai So        = ";cin>>nilai_so [i];
            nilai_akhir [i]=(nilai_orkom[i]*0.3)+(nilai_jarkom[i]*0.3)+(nilai_so[i]*0.4);
            string (nama_mahasiswa[i]), (nim_mahasiswa[i]);
            cout<<endl;
        }
        cout<<endl;
        tampilan ();
       
        for (i=1;i<=jum;i++)
        {
            cout<<setiosflags (ios::left)<<" "<<setw (5)<<i;
            cout<<setiosflags (ios::left)<<" "<<setw (17)<<nama_mahasiswa[i];
            cout<<setiosflags (ios::left)<<" "<<setw (15)<<nim_mahasiswa[i];
            cout<<setiosflags (ios::left)<<" "<<setw (7)<<nilai_orkom [i];
            cout<<setiosflags (ios::left)<<" "<<setw (8)<<nilai_jarkom [i];
            cout<<setiosflags (ios::left)<<" "<<setw (7)<<nilai_so [i];
            cout<<setiosflags (ios::left)<<" "<<setw (6)<<nilai_akhir [i];
           
            if (nilai_akhir[i]>=80)
               cout<<setprecision (4)  <<"   "<<" A ";
            else if (nilai_akhir[i]>=70)
                 cout<<setprecision (4)<<"   "<<" B ";
            else if (nilai_akhir[i]>=59)
                 cout<<setprecision (4)<<"   "<<" C ";
            else if (nilai_akhir[i]>=50)
                 cout<<setprecision (4)<<"   "<<" D ";
            else if (nilai_akhir[i]<50)
                 cout<<setprecision (4)<<"   "<<" E ";
           
            cout<<endl;
            
    
		
        }
        cout<<" ************************************************* "<<endl;
        cout<<endl;
        cout<<" Ulang Kembali Memasukan Data Nilai Mahasiswa ( Y/T )? ";
        cin>>ulang;
        system ("cls");
    }

while ((ulang=='Y')||(ulang=='y'));
     
cout<<endl<<endl;
         
}
