#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float tamanho,sabores,valor,sRecheio,metade,adicionais,Vsabores,Vadicionais,total,Madicionais,adicionaisextra,entregas,Kentregas,totalcomentregas,pagamento,cartao,pix;
	
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
	
	if ( sabores == 1){
		Vsabores =9.67;
	}else if ( sabores == 2){
		Vsabores =4.50;
	}else if ( sabores ==3){
		Vsabores = 9.32;
	}

	
	cout << "Voce quer dividir o recheio? " <<endl;
	cout << "1- sim" <<endl;
	cout << "2- nao" <<endl;
	cin >> sRecheio;

	
	if ( sRecheio== 1){
		metade = (Vsabores/2);
	}else if ( sRecheio== 2){
		cout << "vai se ferrar" <<endl;	
	}if (sRecheio== 1){
		cout << "Os sabores diminui para " << metade << endl;
	}
	
	cout << "quer adicionais?: " <<endl;
	cout << "1- sim" <<endl;
	cout << "2- não" <<endl;
	cin >>	adicionais;	

	if ( adicionais == 1){
		Vadicionais =9.17;
	}else if ( adicionais == 2){
		cout << "vai se ferrar novamente" <<endl;
	}

	if ( adicionais== 1){
		total = (valor+Vadicionais);
		cout << "R$" << total << endl;
	}
	
	cout << "Quer mais adicionais?" <<endl;
	cout << "1- sim" <<endl;
	cout << "2- não" <<endl;
	cin >> Madicionais;
	
	adicionaisextra =2.50;
	
	if ( Madicionais==1){
		adicionaisextra = (total+adicionais);
		cout << "R$" << adicionaisextra <<endl;
	}
	
	cout << "Vai entregar?" <<endl;
	cout << "1- sim" <<endl;
	cout << "2- não" <<endl;
	cin >> entregas;
	
	Kentregas =5.00;
	
	if ( entregas==1){
		totalcomentregas = (total+Kentregas);
		cout << "R$" << totalcomentregas <<endl;
	}
	
	cout << "e cartao de credito ou pix?" <<endl;
	cout << "1- cartão" <<endl;
	cout << "2- PIX" <<endl;
	cin >> pagamento;
	
	cartao =3.30;
	pix = 1.10;
	
	if (pagamento==1){
		pagamento = (total+cartao);
	}else if (pagamento==2){
		pagamento = (total+pix);
	}
}
