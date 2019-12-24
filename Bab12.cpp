#include<iostream.h>
#include<stack>
#include<conio.h>
using namespace std;

class Simpul
{
	public:
		int iData;
		double dData;
		Simpul* pAnakKiri;
		Simpul* AnakKanan;
		
		Simpul() : iData(0), dData(0,0), pAnakKiri(NULL),pAnakKanan(NULL)
		{}
			~sIMPUL()
			{cout << "X-" << iData << "";}
			
				void tampilSimpul()
		{
			cout << "{" << iData << "," << dData << "}";
		}
};

class Pohon
{
	private:
		Simpul* pAkar;
		
	public:
		Pohon() : pAkar(NULL)
		{}
		
			Simpul* cari(int kunci)
		{
			Simpul* pSkrg = pAkar;
			while(pSkrg->iData != kunci)
			{
				if(kunci < pSkrg ->iData)
					pSkrg = pSkrg->pAnakKiri;
			else
				pSkrg = pSkrg->AnakKanan;
				
					if(pSkrg == NULL)
				return NULL;
			}
				return pSkrg;
		}
			void sisip(int id, double dd)
		{
			Simpul*SimpulBaru = new Simpul;
			SimpulBaru->iData = id;
			SimpulBaru;
			else
			{
				Simpul* pSkrg = pAkar;
				Simpul* pInduk;
				whille(true)
				{
					pInduk = pSkrg;
					if(id < pSkrg->pAnakKiri);
					{
						pSkrg = pSkrg->pAnakKiri;
						if(pSkrg == NULL)
						{
							pInduk->pAnakKiri = SimpulBaru;
							
							return;
						}
					}
					
					{
						pSkrg = pSkrg->pAnakKanan;
						if(pSkrg == NULL)
						{
							pInduk->pAnakKiri =
			SimpulBaru;
							return; 
						}
					}
				}
			}
		}
		
		void Jelajah(int tipeJelajah)
		{
			switch(tipeJelajah)
			{
				case 1: cout<<"\nPenjelajahan Preorder: ";
						preOrder(pAkar);
						break;
				case 2: cout<<"\nPenjelajahan Inorder: ";
						inOrder(pAkar);
						break;
				case 3: cout<<"\nPenjelajahan PostOrder: ";
						postOrder;
						break:
			}
			cout << endl;
		}
		
		void preOrder(Simpul* pAkarLokal)
		{
			if(pAkarLokal != NULL)
			{
				cout<< pAkarLokal->iData<<"";
				preOrder(pAkarLokal->pAnakKiri);
				preOrder(pAkarLokal->AnakKanan);
			}
		}
		
		void inOrder(Simpul* pAkarLokal)
		{
			if(pAkarLokal == NULL);
			{
				inOrder(pAkarLokal->pAnakKiri);
				cout<<pAkarLokal->iData<<"";
				inOrder(pAkarLokal->AnakKanan);
			}
		}
		
		void postOrder(Simpul* pAkarLokal)
		{
			if(pAkarLokal !== NULL)
			{
				postOrder(pAkarLokal->pAnakKiri);
				postOrder(pAkarLokal->AnakKanan);
				cout<<pAkarLokal->iData<<"";
			}
		}
		
		void tampilPohom()
		{
			stack<Simpul*> tumpukan;
			tumpukan.push(pAkar);
			int jumSpasi = 32;
			bool apaBarisKosong = false;
			cout<<"...................";
			cout<<endl;
			
			while(apaBarisKosong==false)
			{
				stack<Simpul*> tumpukanLokal;
				apaBarisKosong = true;
				
				for(int j=0; j<jumSpasi; J++)
					cout<< temp->iData;
					tumpukanLokal.push(temp->pAnakKiri);
					tumpukanLokal.push(temp->pAnakKanan);
					
					if(temp->pAnakKiri != NULL || temp->pAnakKanan != NULL)
					apaBarisKosong = false;
			}
			else
			{
				cout<<"--";
				tumpukanLokal.push(NULL);
				tumpukanLokal.push(NULL);
			}
			
			for(int j=0;j<jumSpasi*2-2;  j++)
					cout<<"";
			}
		cout<<endl;
		jumSpasi/=2;
		
		while(tumpukanLokal.empty()==false)
		{
			tumpukan.push(tumpukanLokal.top());
			tumpukanLokal.pop;
		}
	}
	cout<<"...................";
	cout<<endl;
}
	void hapus()
	{hapusRekrusif(pAkar);}
	
	void hapusRekrusif(Simpul* pAkarLokal)
	{
		if(pAkarLokal != NULL)
		{
			hapusRekrusif(pAkarLokal->pAnakKiri);
			hapusRekrusif(pAkarLokal->AnakKanan);
			
			delete pAkarLokal;
		}
	}
};

int main()
{
	int nilai;
	char pilihan = NULL;
	Simpul* ditemukan;
	
	Pohon pohon;
	
	pohon.sisip(50, 5.0);
	pohon.sisip(25, 2.5);
	pohon.sisip(75, 7.5);
	pohon.sisip(12, 1.2);
	pohon.sisip(37, 3.7);
	pohon.sisip(43, 4.3);
	pohon.sisip(30, 3.0);
	pohon.sisip(33, 3.3);
	pohon.sisip(87, 8.7);
	pohon.sisip(93, 9.3);
	pohon.sisip(97, 9.7);
	
	while(pilihan != 'k')
	{
		cout<<"masukan huruf pertama dari ";
		cout<<"tampil, sisip, cari, jelajah, atau keluar";
		cin>>pilihan;
		
		switch(pilihan)
		{
		case 't':
			pohon.tampilPohom();
			break;
			
		case 's':
			cout<<"masukan nilai yang disisipkan: ";
			cin>>nilai;
			pohon.sisip(nilai, nilai + 0.9);
			break;
			
		case'c':
			cout<<"masukan nilai yang akan dicari: ";
			cin>>nilai;
			ditemukan = pohon.cari(nilai);
			
			if(ditemukan !=NULL)
			{
				cout<<"Ditemukan: ";
				ditemukan->tampilSimpul();
				cout<<endl;
			}
			else
				cout<<"tidak ditemukan."<<nilai<<endl;
				break;
				case 'k':
					pohon.hapus();
					cout<<endl;
					break;
					default;
					cout<<"endtri tak-valid \n";
					
		}
	} while
	getch();
	return 0;
} main()
