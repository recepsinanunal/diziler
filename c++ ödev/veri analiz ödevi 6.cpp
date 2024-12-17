#include <iostream>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
setlocale(LC_ALL,"Turkish");
srand(time(0));

//VERÝ ANALÝZ ÖDEVÝ SORU 6
float sayilar[500];
for(int i=0; i<500;i++)
{

	sayilar[i]= (float)rand()/(float)RAND_MAX;
	cout<<sayilar[i]<< endl;
}



system ("pause");
return 0;
}
