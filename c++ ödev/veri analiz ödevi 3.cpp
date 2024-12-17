#include <iostream>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
setlocale(LC_ALL,"Turkish");
srand(time(0));

int toplam;
float sayilar[500];
for(int i=0; i<500;i++)
{
	sayilar[i]= rand() % (35-10+1)+10;
	toplam+=sayilar[i];
	cout<<sayilar[i]<< endl;
}
int ort=toplam/500;
cout<<"ORTALAMA:"<< ort << endl;

system ("pause");
return 0;
}
