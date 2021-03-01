/*Tugas2 Prak. Struktur Data*/
/*B. Array Pointer and Structure No.1*/
/*Filza Hisana*/
/*NIM: 20051397018*/

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char kalimat[100];
	cout<<"Masukan Kalimat :"; cin.getline (kalimat , sizeof (kalimat) );
	int x = strlen(kalimat);
	for(int i=x-1;i>=0;i--)
	{
		cout<<kalimat[i];
 	}
}
