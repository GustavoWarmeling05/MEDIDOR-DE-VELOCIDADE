#include <iostream>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(){ 
	setlocale(LC_ALL,"Portuguese");
	cout << fixed << setprecision(3);
	
	int i=0;
	float vlc[5];
	
	for(int i=0; i < 5; i++){
	cout<<"Informe a sua velocidade : "<<endl;
	cin>> vlc[5];
	
	if(vlc[5] <=60){
		cout << "Voce esta na velocidade permitida!"<<endl;
		cout << "" << endl;
	}
		
	if(vlc[5] >=61){
		cout << "Voce esta a cima da velocidade permitida" << endl;
		cout << "" << endl;
		}
	}
	return 0;
	}


