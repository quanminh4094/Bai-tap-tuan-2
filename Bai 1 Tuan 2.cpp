#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class KH{
	private:
		char ht[30];
		struct NS{
			int ngay;
			int thang;
			int nam;
		}b[100];
		char cmt[10];
		char hk[50];
	public:
		void nhap(KH a[], int n)
		{
			for(int i=1;i<=n;i++)
			{
			cout<<"----------Khach hang thu "<<i<<"-----------"<<endl;
			cout<<"Nhap ho ten: "; cin.getline(a[i].ht, 30);	
			cout<<"Nhap ngay sinh: "; cin >> b[i].ngay;
			cout<<"Nhap thang sinh: "; cin >> b[i].thang;
			cout<<"Nhap nam sinh: "; cin >> b[i].nam;
				cin.ignore();
			cout<<"Nhap chung minh thu: "; cin.getline(a[i].cmt, 10);
 			cout<<"Nhap ho khau: "; cin.getline(a[i].hk, 50);
 			}
		}
		void xuat(KH a[], int n)
		{
			cout<<"                                 BANG THONG TIN KHACH HANG"<<endl;
			cout<<"-----------------------------------------+----------------------------------------------"<<endl;
			cout<<"Ho ten"<<setw(24)<<"Ngay/Thang/Nam"<<setw(24)<<"Chung minh thu"<<setw(17)<<"Ho khau"<<endl;
			cout<<"-----------------------------------------+----------------------------------------------"<<endl;
			for(int i=1;i<=n;i++)
			{
			cout<<a[i].ht<<setw(14)
			<<b[i].ngay<<"/"
			<<b[i].thang<<"/"
			<<b[i].nam<<setw(22)
			<<a[i].cmt<<setw(20)
			<<a[i].hk<<endl;
			}
			cout<<"-----------------------------------------+----------------------------------------------"<<endl;
		}
 		
		void DSKHT12(KH a[], int n)
		{
			cout<<" \n\n                                BANG THONG TIN KHACH HANG THANG 12"<<endl;
			cout<<"-----------------------------------------+----------------------------------------------"<<endl;
			cout<<"Ho ten"<<setw(24)<<"Ngay/Thang/Nam"<<setw(24)<<"Chung minh thu"<<setw(17)<<"Ho khau"<<endl;
			cout<<"-----------------------------------------+----------------------------------------------"<<endl;
			for(int i=1;i<=n;i++)
			{
				if(b[i].thang == 12)
				{
				cout<<a[i].ht<<setw(14)
				<<b[i].ngay<<"/"
				<<b[i].thang<<"/"
				<<b[i].nam<<setw(22)
				<<a[i].cmt<<setw(20)
				<<a[i].hk<<endl;
				}
			}
			cout<<"-----------------------------------------+----------------------------------------------"<<endl;
		} 
		
};


int main(){
	int n;
	cout<<"Nhap so khach hang: "; cin>>n; cin.ignore();	
	KH a[100];
		a[100].nhap(a,n);
		a[100].DSKHT12(a,n);
	}
