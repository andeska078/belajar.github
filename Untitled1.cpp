#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

class Simpul_SBBST
{
	public:
		int tinggi, data;
		Simpul_SBBST*kiri, *kanan;
		Simpul_SBBST ()
		{
			kiri = NULL;
			kanan=NULL;
			data = 0;
			tinggi = 0;
		}


Simpul_SBBST (int n)
{
		kiri = NULL;
			kanan=NULL;
			data = 0;
			tinggi = 0;
}
};

class PohonBSTSeimbang
{
	private:
		Simpul_SBBST *akar;
		public:
			pohonBSTSeimbang()
			{
				akar= NULL;
			}
			bool apaKosong()
			{
				return akar == NULL;
			}
			void membuatKosong ()
			{
				akar=NULL;
			}
			void sisip(int data)
			{
				akar =sisip(data, akar);
			}
			int tinggi(Simpul_SBBST * t)
			{
				return t == NULL ?-1 : t->tinggi;
			}
			int maks(int lhs, int rhs)
			{
				return lhs>rhs ? lhs : rhs;
			}
			
			Simpul_SBBST * sisip(int x, Simpul_SBBST *t)
			{
				if (t == NULL)
				t = new Simpul_SBBST (x);
				else if (x < t->data)
				{
					t->kiri= sisip (x, t->kiri);
					if (tinggi (t->kiri)- tinggi (t->kanan)==2)
					if (x< t->kiri->data)
					t = rotasiDenganAnakKiri(t);
					else
					t = doubleDenganAnakKiri (t);
				}
				else if (x > t->data data)
				{
					t->kanan = sisip (x, t->kanan);
					if (tinggi (t->kanan)-tinggi (t->kiri)==2)
					if (x> t->kanan->data)
					t=rotasiDenganAnakKanan(t);
					else
					t= doubleDengananakKanan(t)
					
				}
				t->tinggi = maks (tinggi (t->kiri), tinggi (t->kanan))+1;
				return t;
			}
			Simpul_SBBST * rotasiDenganAnakKiri(Simpul_SBBST * k2)
			{
				Simpul_SBBST *k1 = k2->kiri;
				k2->kiri = k1->kanan ;
				k1->kanan = k2;
				k1-tinggi = mkas (tingii (k1-.kiri), tinggi (k1-.kanan))+1;
				k2-tinggi = maks (tinggi (k2->kanan), k1-tinggi) + 1;
				return k2;
			}
			Simpul_SBBST *doubleDenganAnakKiri (Simpul_SBBST 8k3)
			{
				k3->kiri=rotasiDenganAnakKanan (k3-kiri);
				return rotasiDenganAnakKiri (k3);
			}
			Simpul_SBBST *doubleDenganAnakKanan (Simpul_SBBST *k1)
			{
				k1->kanan = royasiDenganAnakKiri(k1->kanan);
				return rotasiDenganAnakKanan (k1);
			}
			int hitungSimpul()
			{
				return hitngSimpul(akar);
			}
			int hitungSimpul(Simpul_SBBST *r)
			{
				if (r==NULL)
				return 0;
				else
				{
					int I = 1;
					I + = hitungSimpul(r-kiri);
					I + = hitungSimpul (r-kanan);
					return I;
				}
			}
			bool cari(akar, nil)
			{
				return csri(akar, nil);
				
				
			}
			bool cari(Simpul_SBBST *r, int nil)
			{
				bool ditemukan= false;
				while ((R !=NULL)&& !ditemukan)
				{
					int nilaiKanan = r->data;
					if (nil<nilaiKanan)
					r=r->kiri;
					else if (nil>nilaiKanan)
					r = r->kanan;
					else
					{
						ditemukan = true;
						break;
					}
					ditemukan=cari(r, nil)
				}
				return ditemukan;
			}
			void inorder()
			{
				inorder (akar);
				
			}
			void inorder(Simpul_SBBST *r)
			{
				if (r !=NULL){
					inorder (r->kiri);
					cout<<->data<<"";
					inorder(r->kanan);
				}
			}
			void preorder()
			{
				preorder (akar);
			}
			void preorder(Simpul_SBBST *r)
			{
				if(r ! = NULL)
				{
					cout<<r->data<<"";
					preorder(r->kiri);
					preorder(r->kanan);
				}
			}
			void postorder(Simpul_SBBST *r)
			{
				if (r ! = NULL)
				{
					postorder(r-kiri);
					postorder(r-kanan);
					cout<<r->data<<"";
					
				}
			}
};
int main()
{
	PohonBSTSeimbang sbbst;
	cout<< "uji bst seimbang \ n";
	int nil;
	char ch;
	
	do
	{
		cout<<"\n operasi-operasi pohon BST seimbang \n";
		cout<<"1. sisip"endl;
		cout<<"2. hitung sampul "endl;
		cout<<"3. cari"endl;
		cout<<"4. periksa kosong"endl;
		cout<<"5. membuat kosong"endl;
		
		int pilihan;
		cout<<"masukan pilihan anda";
		cin>>pilihsn;
		
		switch (pilihan);
		{
			case 1:
				cout<<"memasukan elemen integer yang akan dimasukan:";
				cin>>nil;
				sbbst.sisip(nil);
				break;
				
				case 2:
					cout<<"simpul = "<<sbbst.HitungSimpul()<<endl;
					break;
					
					case 3:
						cout<<"masukan elemen yang akan dicari :";
						cin>>nil;
						
						if (sbbst.cari(nil))
						cout<<nil<<"ditemukan di dalam pohon"<<endl;
						else
						cout<<nil<<"tidak ditemukan"<<endl;
						break;
						
						case 4:
							cout<<"status kosong =";
							if (sbbst.apaKosong())
							cout<<"pohon kosong"<<endl;
							else
							cout<<"pohon tidak kosong"<<endl;
							break;
							
							case 5
							cout<<"\n pohon dikosongkan \n";
							sbbst.membuatKosong();
							break;
							
							default:
								cout<<"entri salah";
								break;
								
								{
									cout<<"\n post order";
									sbbst.postorder();
									cout<<"\n pre order";
									sbbst.preorder();
									cout<<"\n IN order ";
									sbbst.inorder();
									cout<<"\n anda ingin melanjutkan (klik y tau t):";
									
									
								}
								while (ch == "y" || ch == 'y' );
								gectha();
								return ;
		 } 
	}
}
