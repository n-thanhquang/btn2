#include <iostream>
using namespace std;

class san_pham{
	private:
		string ma_hang;
		string ten;
		double don_gia;
	public:
		san_pham(string mh,string name,int n,double gia){
			this -> ma_hang = mh;
			this -> ten = name;
			this -> don_gia = gia;
		}
		
		
		~san_pham();
		
};

void san_pham:: nhap()
	    {
          	cout << "Nhap vao ma don hang : ";
			cin >> ma_hang;
			cout << "Nhap vao ten cua san pham : ";
			cin >> ten;
			cout << "Nhap vao don gia cua san pham : ";
			cin >> don_gia;
		}	

void san_pham:: in(){
	cout << "Ma don hang : ";
	cout << ma_hang;
	cout << "Ten san pham : ";
	cout << ten;
	cout << "Don gia : ";
	cout << don_gia;
}

int main(){
	san_pham sp[1];
	sp.nhap();
	sp.in();
	return 0;
}