#include<iostream>
#include<conio.h>
using namespace std;

class simpul
{
	public:
	double dData;
	
	simpul* pBrktnya;
	
	simpul(double dd) : dData(dd), pBrktnya(NULL)
	{}
	
	void TampilSimpul()
	{cout << dData << "";}
};

class SenaraiBerantaiGanda
{
	private:
		simpul* pPertama;
		simpul* pAkhir;
		
	public:
		SenaraiBerantaiGanda() : pPertama(NULL), pAkhir(NULL)
		{}
	~SenaraiBerantaiGanda()
	{
		simpul* pSkrg = pPertama;
		
		while(pSkrg != NULL)
		{
			simpul* pTemp = pSkrg;
			pSkrg = pSkrg->pBrktnya;
		}
	}
bool apaKosong()
{return pPertama==NULL;}

	void sisipAkhir(double dd)
{
	simpul* pSimpulBaru = new simpul(dd);
	if(apaKosong())
	pPertama = pSimpulBaru;
	else
	pAkhir->pBrktnya = pSimpulBaru;
	pAkhir = pSimpulBaru;
}

	double hapusPertama()
{
	simpul* pTemp = pPertama;
	double temp = pPertama->dData;
	
		if(pPertama->pBrktnya == NULL)
	pAkhir = NULL;
	
		pPertama = pPertama->pBrktnya;
	delete pTemp;
	return temp;
}
	void tampilSenarai()
	{
		simpul* pSkrg = pPertama;
		while(pSkrg = NULL)
		{
			pSkrg->TampilSimpul();
			pSkrg = pSkrg->pBrktnya;
		}
		cout << endl;
	}
};

class SenaraiAntrian
{
	private:
	SenaraiBerantaiGanda senarai;
	public:
		bool apaKosong()
		{return senarai.apaKosong();}
		
			void sisip(double j)
		{senarai.sisipAkhir(j);}
		
			void tampilantrian()
		{
			cout << "Antrian (depan->belakang):";
			senarai.tampilSenarai();
		}
};

int main()
{
	SenaraiAntrian antrian;
	
		antrian.sisip(20);
	antrian.sisip(40);
	
		antrian.tampilantrian();
		
		antrian.sisip(60);
	antrian.sisip(80)
	
		antrian.tampilantrian();
		
		cout << "menghapus dua item" << endl;
	antrian.hapus();
	antrian.hapus();
	
		antrian.tampilAntrian();
		
		getch();
		return 0;
}
