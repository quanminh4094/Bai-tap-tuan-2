#include<iostream>
#include<iomanip>
using namespace std;
class giaovien{
	private:
		char ht[30];
		int t;
		char bc[15];
		char cn[20];
		float bl;
	public:
		void nhap(giaovien gv[], int &n);	
		void xuat(giaovien gv[], int &n);	
		void tinhlcb(giaovien gv[], int &n);
};
	void giaovien::nhap(giaovien gv[], int &n)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<"--------Nhap giao vien thu "<<i<<"--------"<<endl;
		cin.ignore();
		cout<<"Nhap ho ten giao vien: "; cin.getline(gv[i].ht, 30);
		cout<<"Nhap tuoi: ";cin>>gv[i].t;
		cin.ignore();
		cout<<"Nhap bang cap: "; cin.getline(gv[i].bc, 15);
		cout<<"Nhap chuyen nganh: "; cin.getline(gv[i].cn, 20);
		cout<<"Nhap bac luong: "; cin>>gv[i].bl;
		}
	}
	void giaovien::xuat(giaovien gv[], int &n)
	{
		cout<<"Ho ten"<<setw(9)<<"Tuoi"<<setw(13)<<"Bang cap"<<setw(17)<<"Chuyen nganh"<<setw(14)<<"Bac luong"<<endl;
		for(int i=1;i<=n;i++)
		{
		cout<<gv[i].ht<<setw(9)
			<<gv[i].t<<setw(13)
			<<gv[i].bc<<setw(17)
			<<gv[i].cn<<setw(14)
			<<gv[i].bl<<endl;
		}
	}
	void giaovien::tinhlcb(giaovien gv[], int &n)
	{
		int lcb=0;
		for(int i=1;i<=n;i++)
		{
			lcb = gv[i].bl*610;
			cout<<"Luong co ban cua giao vien "<<gv[i].ht<<" la: "<<lcb<<endl;
		}
	
	}
int main()
{
	giaovien gv[100];
	int n;
	cout<<"Nhap so giao vien: "; cin>>n;
	gv[100].nhap(gv,n);
	cout<<"\n\t------BANG THONG TIN GIAO VIEN------"<<endl;
	gv[100].xuat(gv,n);
	cout<<"-------------------------------------------"<<endl;
	gv[100].tinhlcb(gv,n);
	
}
