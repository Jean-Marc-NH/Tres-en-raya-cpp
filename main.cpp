#include <iostream>
// #include <string>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

using namespace std;

int main(){

	cout << "   _______________________________________________\n";
	cout << " /|                                               |\n";
	cout << "| |           Jean Marc Nadeau Huamani            |\n";
	cout << "| |         Nikolas Ymanol Zuniga Monroy          |\n";
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
	char x{'+'};
	
	int casilla{0};
	bool c{true};
	int a{0};
	// cout << "Coloque el nombre del primer jugador: ";
	// cin >> j2;
	// cout <<"\nColoque el nombre del segundo jugador: ";
	// cin >> j1;

	cout <<"Jugadores: \n" << " -" << "jugador 1 (X)" << "\n" << " -" << "jugador 2 (O)" << "\n\n";

	while(c){


		if(((p1 == p2)&&(p2==p3))||((p4==p5)&&(p5==p6))||((p7==p8)&&(p8==p9))||((p1==p5)&&(p5==p9))||((p1==p4)&&(p4==p7))||((p2==p5)&&(p5==p8))||((p3==p6)&&(p6==p9))){
			cout << "El juego termino el ganador es: ";
			if(a%2 != 0){
				cout << "jugador 1" << "\n" ;
			}else{
				cout << "jugador 2" << "\n" ;
			}
			break;
		}


		if (a == 9){
			cout << "Felicidades es un empate";
			break;
		} 

		
		cout << p1 << " | " << p2 << " | " << p3 << "\n";
		cout << "---------\n";
		cout << p4 << " | " << p5 << " | " << p6 << "\n";
		cout << "---------\n";
		cout << p7 << " | " << p8 << " | " << p9 << "\n";
		
		if(a%2 != 0){
			cout << "\nTurno de jugador 2 " << "\n\n";
			cin >> p;
			x='O';
		}else{
			cout << "\nTurno de juagador 1 " << "\n\n";
			cin >> p;
			x='X';
		}

			if((p == 1)&&(p1=='1'))	{	//Ambas condicionales se juntan en una sola
			p1=x;
		}	else if((p == 2)&&(p2=='2'))	{
			p2=x;
		}	else if((p == 3)&&(p3=='3'))	{
			p3=x;
		}	else if((p == 4)&&(p4=='4'))	{
			p4=x;
		}	else if((p == 5)&&(p5=='5'))	{
			p5=x;
		}	else if((p == 6)&&(p6=='6'))	{
			p6=x;
		}	else if((p == 7)&&(p7=='7'))	{
			p7=x;
		}	else if((p == 8)&&(p8=='8'))	{
			p8=x;
		}	else if((p == 9)&&(p9=='9'))	{
			p9=x;
		}	else if((p1!='1')||(p1!='2')||(p1!='3')||(p1!='4')||(p1!='5')||(p1!='6')||(p1!='7')||(p1!='8')||(p1!='9')){
			cout << "Elija una casilla valida\n";
			continue;
		}	else if((p != 1)&&(p != 2)&&(p != 3)&&(p != 4)&&(p != 5)&&(p != 6)&&(p != 7)&&(p != 8)&&(p != 9)){
			cout << "Elija una casilla valida\n";
			continue;
		}	else {
			cout << "Valor invalido\n";
			break;
		}



		if(c == true){
			++a;
		}

	}

	if ((a == 9)||((p1 == p2)&&(p2==p3))||((p4==p5)&&(p5==p6))||((p7==p8)&&(p8==p9))||((p1==p5)&&(p5==p9))||((p1==p4)&&(p4==p7))||((p2==p5)&&(p5==p8))||((p3==p6)&&(p6==p9))){
		cout << "Tablero final: \n";
		cout << p1 << " | " << p2 << " | " << p3 << "\n";
		cout << "---------\n";
		cout << p4 << " | " << p5 << " | " << p6 << "\n";
		cout << "---------\n";
		cout << p7 << " | " << p8 << " | " << p9 << "\n";
	}

	cout << "\nfin";

}


