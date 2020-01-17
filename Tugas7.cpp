#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;
void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}


int main()
{
	int x,z,a;
    setcolor(5);
	cout<<"Inputkan Nilai x: ";
	cin>>x;
	setcolor(3);
	cout<<"Inputkan Nilai z: ";
	cin>>z;
	
	if(x%2==1 && z%2==1){
		cout<<"Semua Bilangan Ganjil";
	}
	else if(x%2==0 && z%2==0){
		cout<<"Semua Bilangan Genap";
	}
	else if(x%2==0 && z%2==1){
		cout<<"x genap dan y ganjil";
	}
	else if(x%2==1 && z%2==0){
		cout<<"x ganjil dan y genap";
	}
	
    return 0;
}


