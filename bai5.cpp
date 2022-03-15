#include <iostream> 
#include <fstream>
#include <math.h>
using namespace std; 

void doctep(char tentep[],int a[], int &n){
	ifstream f(tentep);
 	f >> n;
 	for(int i =0;i < n; i++){
 		f>> a[i];
	 }
   f.close();
}
void dem_7(char tentep[],int a[],int &n){
    ofstream f1(tentep);
    for(int i =0;i < n; i++){
        if(a[i] % 7 ==0){
            f1 << a[i] << endl;
        }
    }
}
bool nt(int &n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void snt(char tentep[],int a[],int &n){
	ofstream f1(tentep); 
	  for (int i = 0; i < n; i++)
     {
        if (nt(a[i]))
        {
            f1 << a[i]<< endl;
            break;
        }
     }

}
void max(char tentep[],int a[],int &n){
    ofstream f1(tentep);
    int max = a[0];
    for (int i = 0; i < n; i++){
        if(max < a[i]){
            max = a[i];
        }
    }f1 << " max trong mang la: " << endl;
    f1 << max << endl;
}

void sap_xep(char tentep[],int a[],int &n)
{	ofstream f1(tentep);
   for (int i = 0; i < n-1; i++){
      int min = i;
       for (int j = i+1; j <n;j++){
           if(a[j] < a[min]){
               min = j;
               int tg = a[i];
               a[i] = a[j];
               a[j] = tg;
           }
       }
   }
   f1 << " mang sau khi sap xep: " << endl;
   for(int i = 0; i < n; i++){
       f1 << a[i] << endl;
   }
}
int main() 
{ 
	char 	f1[30],f2[30];			  
	int n;int a[100];
  	cout<<"\n Nhap ten tep doc du lieu: "; cin.getline(f1,30);
  	doctep(f1,a,n);
  	cout<<"\n Nhap ten tep ghi du lieu: "; cin.getline(f2,30);
	dem_7(f2,a,n);
    snt(f2,a,n);
    max(f2,a,n);
    sap_xep(f2,a,n);

	
  	return 0;
}