#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float tamanho,sabores,vTotal,valor,sRecheio,metade;
	
	cout << "1- Pequeno R$7.80" <<endl;
	cout << "2- Médio R$12.90" <<endl;
	cout << "3- Grande R$23.95" <<endl;
	cout << "R: ";
	cin >> tamanho;
	
	cout << "Escolha um dos sabores abaixo:" <<endl;
	cout << "1- Chocolate preto - R$9.67" <<endl;
	cout << "2- Chocolate branco - R$4.50" <<endl;
	cout << "3- Chocolate ao leite - R$9.32" <<endl;
	cout << "R: ";
	cin >> sabores;
	
	if ( tamanho == 1 && sabores == 1){
		valor = 17.57;
	}else if ( tamanho == 1 && sabores == 2 ){
		valor = 12.3;
	}else if ( tamanho == 1 && sabores == 3){
		valor = 17.12;
	}else if ( tamanho == 2 && sabores == 2 ){
		valor = 22.57;
	}else if ( tamanho == 2 && sabores == 2 ){
		valor = 17.4;
	}else if ( tamanho == 2 && sabores == 3 ){
		valor = 22.22;
	}else if ( tamanho == 3 && sabores == 1 ){
		valor = 33.62;
	}else if ( tamanho == 3 && sabores == 2 ){
		valor = 28.45;
	}else if ( tamanho == 3 && sabores == 3 ){
		valor = 33.27;
			
	}if (sabores == 1){
		cout << "R$" << valor << endl;
	}else if (sabores == 2){
		cout << "R$" << valor <<endl;
	}else if (sabores ==3){
		cout << "R$ " << valor <<endl;
	}
	
	cout << "1- Voce quer dividir o recheio? " <<endl;
	cout << "2- nao" <<endl;
	cin >> sRecheio;
	
	
	if ( sRecheio== 1){
		cout << "Chocolate preto - R$4.83" <<endl;
		cout << "Chocolate branco - R$2.25" <<endl;
	}else if ( sRecheio== 2){
		cout << "vai se ferrar";
		
		metade = (valor/2);
		
	}if (sRecheio== 1){
		cout << "abaixou o preço para: " << metade << endl;
	}
		
		
}
