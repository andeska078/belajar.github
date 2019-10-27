#include <iostream>
#include <conio.h>

using namespace std;

main ()
{
    int z[]= {12,2,84,1,5,65,7,45,8,4,3,6,8,7,4,1,5,45,99,65,78,21,12,36,45};
    int nilai,index[25],j;
    j=0;
    for (int i=0;i<25;i++)
    {
        cout<<z[i]<<",";
    }
    cout<<endl;
    cout<<"masukkan nilai yang dicari : ";cin>>nilai;
    for (int i=0;i<=25;i++)
    {
        if (z[i]==nilai)
        {
            index[j]=i;
            j++;
        }
    }
    
    if (j>0)
    {
        cout<<"Nilai yang dicari = "<<nilai<<" ada sejumlah = "<<j<< " buah"<<endl;
        cout<<"Nilai tersebut ada dalam indeks ke (indeks mulai dari 0) = "<<endl;
        for (int i=0;i<j;i++)
        {
            cout<<"indeks ke "<<index[i]<<endl;
        }
        cout<<endl;
    }
    else
    {cout<<"Nilai tidak ditemukan dalam dalam kunci pencarian"<<endl;}
    
    
    getch();    
}
