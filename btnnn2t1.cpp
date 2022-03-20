#include <iostream.h>

void menu(){
	cout << "   BAI TAP ITC BUOI 1 " << endl;
	cout << " 1,Chuyen so thanh ten tieng anh  \n";
	cout << " 2,Tinh tien dien \n";
	cout << " 3,Tinh tich p = 2*4*6*....* 2n \n";
	cout << " 4,Ve tam giac có chieu cao n \n";	
}
// IF-ELSE
void Day ()
 {int a;
  tt:  
 cout << " Moi ban nhap a = ";
 	cin >> a;
 	if (1 > a || a > 7 )
 	{
	 	cout <<" Du lieu nhap vao khong thoa man !!";
		goto tt; 	  
	 }
	if (a = 1)
	 cout << "1: Monday " ;
	 else if (a = 2)
	  cout << "2: Tuesday" ;
	  else if (a = 3) 
	   cout << "3: Wednesday"  ; 
	   else if (a = 4)
	    cout << "4: Thursday" ;
	    else if (a = 5)
	    cout << "5: Friday " ;
	     else if (a = 6)
	     cout << "6: Saturday";
	      else cout << "7: Sunday";
	    
	    
 } 

void TienDien () {
    float a; 
	nhaplai:
	tt:
	cout << " [+] Nhap so dien tieu dung (kW) : " ; cin >> a; 
	if ( a < 0 ) {
		cout << "[!] Nhap khong hop le ! Moi nhap lai !" << endl;
		goto nhaplai;
	}
	
	double  tiendien;
	if ( a <= 100) {
	tiendien = 2000 * a;

	}
	if ( a <= 200) {
	tiendien = (100 * 2000) + ( a - 100) * 2500;
		
	}
	if ( a <= 300) {
	tiendien = (100 * 2000) + (100 * 2500) + (a - 200) * 3000;
		
	}
	if ( a > 300) {
	tiendien = (100 * 2000) + (100 * 2500) + (100 * 3000) + (a - 300) * 5000;
		
	}
	cout << "[+] So tien dien : " << tiendien << " (dong) " << endl;
}
//VONG LAP FOR
 void Tinhtich ()
  {int n;
  cout << "Moi ban nhap n = ";
   cin >> n;
  	int p = 1;
	  for (int i=2 ; i<= 2*n ;i+=2)
	  {
  		p = p * i;
  	} 
  	cout << "Tich cua tich = " << p << endl;  
  }   
void Tamgiac ( )
 {  int n;
 	cout << "Moi ban nhap n = ";
	cin >> n;
	for (int i= 1;i<=n; i++){
	  for (int j= i ; j<=n ;j++){
  		  cout << "*";
  	}
	 cout <<endl;
	}
 } 
 int main () {
	back:
		menu();
	char lc;
	int a;
	cout << "Nhap vao lua chon cua ban : ";
	cin >> a;
	switch(a){
		case 1:{
			Day();
			cout << "Ban co muon tiep tuc khong [y/n] ";
			cin >> lc;
			if(lc == 'y' || lc == 'Y'){
				system("cls");
				goto back;
			}
			break;
		}
		case 2:{
			TienDien();
			cout << "Ban co muon tiep tuc khong [y/n] ";
			cin >> lc;
			if(lc == 'y' || lc == 'Y'){
				system("cls");
				goto back;
			}
			break;
		}
		case 3:{
			Tinhtich();
			cout << "Ban co muon tiep tuc khong [y/n] ";
			cin >> lc;
			if(lc == 'y' || lc == 'Y'){
				system("cls");
				goto back;
			}
			break;
		}
		case 4:{
				Tamgiac();
				cout << "Ban co muon tiep tuc khong [y/n] ";
				cin >> lc;
				if(lc == 'y' || lc == 'Y'){
				system("cls");
				goto back;
			}
			break;
		}	
	}
   
   
}
