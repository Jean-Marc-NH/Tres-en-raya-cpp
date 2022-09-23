//tres en raya inteligente

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() 
{    
	cout << "   _______________________________________________\n";
	cout << " /|                                               |\n";
	cout << "| |           Jean Marc Nadeau Huamani            |\n";
	cout << "| |         Nikolas Ymanol Zuñiga Monroy          |\n";
	cout << "| |                     CComp1                    |\n";
	cout << "| |_______________________________________________|\n";
	cout << "|/________________________________________________/\n\n";
	cout << "---------------------Tres_en_raya-------------------\n";
	
	int p{0};
	char p1{'1'};
	char p2{'2'};
	char p3{'3'};
	char p4{'4'};
	char p5{'5'};
	char p6{'6'};
	char p7{'7'};
	char p8{'8'};
	char p9{'9'};
	char x{' '};
	int a{0};
	char a1{'X'};
	char a2{'O'};

	

	while(true){
		cout<<"Jugador 1 escoja su ficha: ";
		cin>>a1;
		if (a1 == a2){
			a2='X';
		}
		break;
	}

	while(true){
			
		if(((p1 == p2)&&(p2==p3))||((p4==p5)&&(p5==p6))||((p7==p8)&&(p8==p9))||((p1==p5)&&(p5==p9))||((p1==p4)&&(p4==p7))||((p2==p5)&&(p5==p8))||((p3==p6)&&(p6==p9))||((p3==p5)&&(p5==p7))){
			cout << "El juego termino el ganador es: ";
			if(a%2 != 0){
				cout << "jugador 1(" <<a1<< ")\n";
			}else{
				cout << "jugador 2(" <<a2<< ")\n";
			}
			break;
		}
		if (a == 9){
			break;
		} 
		cout<<"Teblero 1";		
		cout <<endl<<"\t\t\t"<< p1 << " | " << p2 << " | " << p3 << "\n";
		cout <<"\t\t\t"<< "---------\n";
		cout <<"\t\t\t"<< p4 << " | " << p5 << " | " << p6 << "\n";
		cout <<"\t\t\t"<< "---------\n";
		cout <<"\t\t\t"<< p7 << " | " << p8 << " | " << p9 << "\n\n";
		cout<<"Turno del jugador 1("<<a1<<"): ";

		if (cin>>p){

			if((p == 1)&&(p1=='1'))	{	//Ambas condicionales se juntan en una sola
			p1=a1;
		}	else if((p == 2)&&(p2=='2'))	{
			p2=a1;
		}	else if((p == 3)&&(p3=='3'))	{
			p3=a1;
		}	else if((p == 4)&&(p4=='4'))	{
			p4=a1;
		}	else if((p == 5)&&(p5=='5'))	{
			p5=a1;
		}	else if((p == 6)&&(p6=='6'))	{
			p6=a1;
		}	else if((p == 7)&&(p7=='7'))	{
			p7=a1;
		}	else if((p == 8)&&(p8=='8'))	{
			p8=a1;
		}	else if((p == 9)&&(p9=='9'))	{
			p9=a1;
		}else {
			cout << "Seleccione casilla validaJUGADOR";
			continue;
		}
}	else{
	cout<<"valor invalido, el juego se detuvo para evitar problemas.";
	break;
}
		++a;
	
	int f;

	while (true)	{
	
	f=rand() % 9 + 1;	
	cout<<f<<endl;	
	if((f == 1)&&(p1=='1'))	{	//Ambas condicionales se juntan en una sola
			p1=a2;
			break;
	}	else if((f == 2)&&(p2=='2'))	{
			p2=a2;
			break;
	}	else if((f == 3)&&(p3=='3'))	{
			p3=a2;
			break;
	}	else if((f == 4)&&(p4=='4'))	{
			p4=a2;
			break;
	}	else if((f == 5)&&(p5=='5'))	{
			p5=a2;
			break;
	}	else if((f == 6)&&(p6=='6'))	{
			p6=a2;
			break;
	}	else if((f == 7)&&(p7=='7'))	{
			p7=a2;
			break;
	}	else if((f == 8)&&(p8=='8'))	{
			p8=a2;
			break;
	}	else if((f == 9)&&(p9=='9'))	{
			p9=a2;
			break;
	}	else {
			cout << "Seleccione casilla validaCOMPU\n";
			cout<<f<<endl;
			continue;
	}	
}
}
cout <<endl<<"\t\t\t"<< p1 << " | " << p2 << " | " << p3 << "\n";
cout <<"\t\t\t"<< "---------\n";
cout <<"\t\t\t"<< p4 << " | " << p5 << " | " << p6 << "\n";
cout <<"\t\t\t"<< "---------\n";
cout <<"\t\t\t"<< p7 << " | " << p8 << " | " << p9 << "\n\n";
cout << "\nfin";
}
