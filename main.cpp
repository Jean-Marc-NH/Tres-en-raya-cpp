//Tres en raya modos 1 y 2

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
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
	char a1{' '};
	char a2{'O'};
    char opt{' '};
	int b{0};
    bool win{false};

    while(true){


		if(win == true){
                    break;
                }

        if (opt == ' '){
            cout << "elige tu mmodo de juego: \n(1)JcJ\n(2)JcM<facil>\n(3)JcM<Medio>\n(4)JcM<Dificil>\n>>>>";
            cin >> opt;
            cout << "\n";
        }

        if (((a1 == ' ')||(a2 == 'O'))&&(opt == '1')){
            while(true){
		        cout<<"Jugador 1 escoja su ficha: ";
		        cin>>a1;
		        cout<<"jugador 2 escoja su ficha: ";
		        cin>>a2;
		        if (a1 == a2){
		        	cout << "Escoja otra vez\n";
		        }else{
		        	break;
		        }
	        }

        }
		
		if(opt == '1'){
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
	    	cout <<endl<<"\t\t\t"<< p1 << " | " << p2 << " | " << p3 << "\n";
	    	cout <<"\t\t\t"<< "---------\n";
	    	cout <<"\t\t\t"<< p4 << " | " << p5 << " | " << p6 << "\n";
	    	cout <<"\t\t\t"<< "---------\n";
	    	cout <<"\t\t\t"<< p7 << " | " << p8 << " | " << p9 << "\n\n";
	    	if(a%2==0){
	    		cout<<"Turno del jugador 1("<<a1<<"): ";
	    		x=a1;
	    	}else{
	    		cout<<"Turno del jugador 2("<<a2<<"):  ";
	    		x=a2;
	    	}
	    	if (cin>>p){

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
	    	    }else {
	    	    	cout << "Seleccione casilla valida";
	    	    	continue;
	    	    }
            }else{
	            cout<<"valor invalido, el juego se detuvo para evitar problemas.";
	            break;
            }
        }else if(opt == '2'){       
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
	        		cout << "Seleccione casilla valida";
	        		continue;
	        	}
            }else{
	        cout<<"valor invalido, el juego se detuvo para evitar problemas.";
	        break;
            }       
	        	++a;

	        int f;

	        while (true){
            
	        f=rand() % 9+1;	
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
	        		cout << "Seleccione casilla valida\n";
	        		cout<<f<<endl;
	        		continue;
	        }	
            }
            }
            break;
        }else if(opt == '3'){
           int f;
        	char aC{'O'};
				while(true)	{
					cout<<"Jugador 1 escoja su ficha: ";
					cin>>a1;
					if (a1 == aC){
						aC='X';
					}
					break;
				}
		while(true)	{
			cout<<"a es "<<a;
        	if(((p1== p2)&&(p2==p3))||((p4==p5)&&(p5==p6))||((p7==p8)&&(p8==p9))||	//filas
	           	((p1==p4)&&(p4==p7))||((p2==p5)&&(p5==p8))||((p3==p6)&&(p6==p9))||	//columnas
           		((p3==p5)&&(p5==p7))||((p1==p5)&&(p5==p9)))	{						//diagonales
	    		cout << "El juego termino el ganador es: Computadora("<<aC<<")\n" ;
	    		break;
	    	}
			if (a == 9){
				break;
			} 
			cout <<"\n\t\t\t"<< p1 << " | " << p2 << " | " << p3 << "\n";
			cout <<"\t\t\t"  << "---------\n";
			cout <<"\t\t\t"  << p4 << " | " << p5 << " | " << p6 << "\n";
			cout <<"\t\t\t"  << "---------\n";
			cout <<"\t\t\t"  << p7 << " | " << p8 << " | " << p9 << "\n\n";
			cout<<"Turno del jugador 1("<<a1<<"): ";

			if (cin>>p)	{
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
				}else	{
				cout << "Seleccione casilla valida.";
				continue;
				}
			}else	{
				cout<<"valor invalido, el juego se detuvo para evitar problemas.";
				break;
			}
		++a;	
        	if(((p1== p2)&&(p2==p3))||((p4==p5)&&(p5==p6))||((p7==p8)&&(p8==p9))||	//filas
	           	((p1==p4)&&(p4==p7))||((p2==p5)&&(p5==p8))||((p3==p6)&&(p6==p9))||	//columnas
           		((p3==p5)&&(p5==p7))||((p1==p5)&&(p5==p9)))	{						//diagonales
	    		cout << "El juego termino el ganador es: Jugador 1(" <<a1<< ")\n";
	    		break;
	    	}			

		if (a == 9){
				cout<<"EMPATE";
				break;
			} 
		if (((p2==a1&&p3==a1)||(p5==a1&&p9==a1)||(p4==a1&&p7==a1))&&(p1=='1')) {
			p1=aC;
		}else if (((p1==a1&&p3==a1)||(p5==a1&&p8==a1))&&(p2=='2')) {
			p2=aC;
		}else if (((p1==a1&&p2==a1)||(p9==a1&&p6==a1)||(p7==a1&&p5==a1))&&(p3=='3'))	{
			p3=aC;
		}else if (((p1==a1&&p7==a1)||(p5==a1&&p6==a1))&&(p4=='4')) {
			p4=aC;
		}else if (((p4==a1&&p6==a1)||(p2==a1&&p8==a1)||(p1==a1&&p9==a1))&&(p5=='5')) {
			p5=aC;
		}else if (((p4==a1&&p5==a1)||(p3==a1&&p9==a1))&&(p6=='6')) {
			p6=aC;
		}else if (((p1==a1&&p4==a1)||(p8==a1&&p9==a1)||(p3==a1&&p5==a1))&&(p7=='7')) {
			p7=aC;
		}else if (((p2==a1&&p5==a1)||(p7==a1&&p9==a1))&&(p8=='8')) {
			p8=aC;
		}else if (((p1==a1&&p5==a1)||(p7==a1&&p8==a1)||(p3==a1&&p6==a1))&&(p9=='9')) {
			p9=aC;
		}else {
		while(true){
		f=rand() % 9 + 1;	
		cout<<f<<endl;	
		if((f == 1)&&(p1=='1'))	{	//Ambas condicionales se juntan en una sola
				p1=aC;
				break;
		}	else if((f == 2)&&(p2=='2'))	{
				p2=aC;
				break;
		}	else if((f == 3)&&(p3=='3'))	{
				p3=aC;
				break;
		}	else if((f == 4)&&(p4=='4'))	{
				p4=aC;
				break;
		}	else if((f == 5)&&(p5=='5'))	{
				p5=aC;
				break;
		}	else if((f == 6)&&(p6=='6'))	{
				p6=aC;
				break;
		}	else if((f == 7)&&(p7=='7'))	{
				p7=aC;
				break;
		}	else if((f == 8)&&(p8=='8'))	{
				p8=aC;
				break;
		}	else if((f == 9)&&(p9=='9'))	{
				p9=aC;
				break;
		}	else {
				cout << "Seleccione casilla validaCOMPU\n";
				cout<<f<<endl;
				continue;
		}	
		}
		}
		++a;
	}	
		break;
        }else if(opt == '4'){
            while(true){
	        	cout<<"Jugador 1 escoja su ficha: ";
	        	cin>>a1;
	        	if (a1 == a2){
	        		a2='X';
	        	}
	        	break;
	        }
            while(true){
                    
                cout << a << "\n";


	        	if(((p1 == p2)&&(p2==p3))||((p4==p5)&&(p5==p6))||((p7==p8)&&(p8==p9))||((p1==p5)&&(p5==p9))||((p1==p4)&&(p4==p7))||((p2==p5)&&(p5==p8))||((p3==p6)&&(p6==p9))||((p3==p5)&&(p5==p7))){
	        		cout << "El juego termino";
	        		
                    win = true;
	        		break;
	        	}
	        	if (a == 9){
	        		break;
	        	} 
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
	        		cout << "Seleccione casilla valida";
	        		continue;
	        	}
            }else{
	            cout<<"valor invalido, el juego se detuvo para evitar problemas.";
	            break;
            }       

				b = 0;
	        	++a;

				if((p5 == '5')&&(a == 1)){
                    p5 = a2;
					++a;
					b = 1;
                }else if((p1 == '1')&&(a == 1)){
                    p1 = a2;
					++a;
					b = 1;
                }

				if (((p2==a1&&p3==a1)||(p5==a1&&p9==a1)||(p4==a1&&p7==a1))&&(p1=='1')) {
					p1=a2;
				}else if (((p1==a1&&p3==a1)||(p5==a1&&p8==a1))&&(p2=='2')) {
					p2=a2;
				}else if (((p1==a1&&p2==a1)||(p9==a1&&p6==a1)||(p7==a1&&p5==a1))&&(p3=='3'))	{
					p3=a2;
				}else if (((p1==a1&&p7==a1)||(p5==a1&&p6==a1))&&(p4=='4')) {
					p4=a2;
				}else if (((p4==a1&&p6==a1)||(p2==a1&&p8==a1)||(p1==a1&&p9==a1))&&(p5=='5')) {
					p5=a2;
				}else if (((p4==a1&&p5==a1)||(p3==a1&&p9==a1))&&(p6=='6')) {
					p6=a2;
				}else if (((p1==a1&&p4==a1)||(p8==a1&&p9==a1)||(p3==a1&&p5==a1))&&(p7=='7')) {
					p7=a2;
				}else if (((p2==a1&&p5==a1)||(p7==a1&&p9==a1))&&(p8=='8')) {
					p8=a2;
				}else if (((p1==a1&&p5==a1)||(p7==a1&&p8==a1)||(p3==a1&&p6==a1))&&(p9=='9')) {
					p9=a2;
				}else {
					if((p1 == '1')&&(a == 3)){
                	    p1 = a2;
						++a;
						b = 1;
                	}else if((p3 == '3')&&(a == 3)){
						p3 = a2;
						++a;
						b = 1;
					}else if((p7 == '7')&&(a == 3)){
						p7 = a2;
						++a;
						b = 1;
					}else if((p9 == '9')&&(a == 3)){
						p9 = a2;
						++a;
						b = 1;
					}

					if((p2 == '2')&&(a == 5)&&((p1 == a2)||(p3 == a2))){
						p2 = a2;
						++a;
						b = 1;
					}else if((p4 == '4')&&(a == 5)&&((p1 == a2)||(p7 == a2))){
						p4 = a2;
						++a;
						b = 1;
					}else if((p6 == '6')&&(a == 5)&&((p3 == a2)||(p9 == a2))){
						p6 = a2;
						++a;
						b = 1;
					}else if((p8 == '8')&&(a == 5)&&((p7 == a2)||(p9 == a2))){
						p8 = a2;
						++a;
						b = 1;
					}

					if ((p3 == '3')&&(((p1 == a2)&&(p2 == a2))||((p6 == a2)&&(p9 == a2))||((p7 == a2)&&(p5 == a2)))&&(a==7)){
						p3 = a2;
						b = 1;
					}else if ((p7 == '7')&&(((p1 == a2)&&(p4 == a2))||((p8 == a2)&&(p9 == a2))||((p3 == a2)&&(p5 == a2)))&&(a==7)){
						p7 = a2;
						b = 1;
					}else if ((p1 == '1')&&(((p7 == a2)&&(p4 == a2))||((p2 == a2)&&(p3 == a2))||((p9 == a2)&&(p5 == a2)))&&(a==7)){
						p1 = a2;
						b = 1;
					}else if ((p9 == '9')&&(((p6 == a2)&&(p3 == a2))||((p7 == a2)&&(p8 == a2))||((p1 == a2)&&(p5 == a2)))&&(a==7)){
						p1 = a2;
						b = 1;
					}

					int f;

					if (b == 0){
						while(true){
						f=rand() % 9 + 1;	
						cout<<f<<endl;	
						if((f == 1)&&(p1=='1'))	{	//Ambas condicionales se juntan en una sola
								p1=a2;
								break;
						}else if((f == 2)&&(p2=='2')){
								p2=a2;
								break;
						}else if((f == 3)&&(p3=='3')){
								p3=a2;
								break;
						}else if((f == 4)&&(p4=='4')){
								p4=a2;
								break;
						}else if((f == 5)&&(p5=='5')){
								p5=a2;
								break;
						}else if((f == 6)&&(p6=='6')){
								p6=a2;
								break;
						}else if((f == 7)&&(p7=='7')){
								p7=a2;
								break;
						}else if((f == 8)&&(p8=='8')){
								p8=a2;
								break;
						}else if((f == 9)&&(p9=='9')){
								p9=a2;
								break;
						}else {
								cout << "Seleccione casilla validaCOMPU\n";
								cout<<f<<endl;
								continue;
						}	
						}
					}
		}
				
				


                

            }
        }else{
            cout << "elija una opcion valida";
        }

		++a;

        
    }
cout <<endl<<"\t\t\t"<< p1 << " | " << p2 << " | " << p3 << "\n";
cout <<"\t\t\t"<< "---------\n";
cout <<"\t\t\t"<< p4 << " | " << p5 << " | " << p6 << "\n";
cout <<"\t\t\t"<< "---------\n";
cout <<"\t\t\t"<< p7 << " | " << p8 << " | " << p9 << "\n\n";
cout << "\nfin";
}