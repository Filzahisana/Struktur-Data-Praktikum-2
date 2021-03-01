/*Tugas1 Prak. Struktur Data*/
/*C. Stack No.4*/
/*Filza Hisana*/
/*NIM: 20051397018*/

#include <iostream>
#include <string.h>
using namespace std;

int main ()
{
    char kata [50];
    int i, n;

    cout << "===========================================" << endl;
    cout << "-Program Mengecek Kata Palindrom Atau Bukan-" << endl;
    cout << "=========================================== \n" << endl;
    cout << "Masukkan kata : ";
    cin >> kata;

    n = strlen(kata);
    for (i=0; i<n; i++)
	{

        if (kata[i] != kata[n-1-i])
		{
	        i = n;
	        cout << "Kata tersebut bukan palindrom" << endl;   
        } 
		else 
		{
            i = n;
            cout << "Kata tersebut adalah palindrom" << endl;
    	}
    } 
}


