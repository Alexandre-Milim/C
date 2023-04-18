
#include <iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int carro, tipoCombustivel, portas, nPessoas, bagageiro;
	float vCombustivel, vTotal;
	
	cout << "1- BMW" << endl;
	cout << "2- Audi" << endl;
	cout << "3- Fiat" << endl;
	cout << "4- Ferrari" << endl;
	cout << "R: ";
	cin >> carro;
	
	cout << "Informe o tipo de combustivel" << endl;
	cout << "1- Gasolina" << endl;
	cout << "2- Alcool" << endl;
	cout << "R: ";
	cin >> tipoCombustivel;
	
	if (carro == 1 && tipoCombustivel == 1){
		vCombustivel = 9.8;	
	}else if (carro == 1 && tipoCombustivel == 2){
		vCombustivel = 8.9;
	}else if (carro == 2 && tipoCombustivel == 1){
		vCombustivel = 12.8;	
	}else if (carro == 2 && tipoCombustivel == 2){
		vCombustivel = 10.9;
	}else if (carro == 3 && tipoCombustivel == 1){
		vCombustivel = 26.8;	
	}else if (carro == 3 && tipoCombustivel == 2){
		vCombustivel = 24.9;
	}else if (carro == 4 && tipoCombustivel == 1){
		vCombustivel = 13.8;	
	}else if (carro == 4 && tipoCombustivel == 2){
		vCombustivel = 12.9;
	}

	cout << "quantas portas tem o seu carro: " <<endl;
	cout << "R: ";
	cin >> portas;
	
	vTotal = vCombustivel;	
	
	if (portas == 4){
		vTotal = vTotal - 0.5;	
	}
	
	cout << "Quantas pessoas irão ir viajar?" << endl;
	cout << "R: ";
	cin >> nPessoas;
	
	if (nPessoas > 2){
		vTotal = vTotal - 1.2;	
	}
	
	cout << "Vai bagageiro na viajem? " << endl;
	cout << "1- Sim" << endl;
	cout << "2- Não" << endl;
	cout << "R: ";
	cin >> bagageiro;
	
	if (bagageiro == 1){
		vTotal = vTotal - 0.2;	
	}
	
	if (tipoCombustivel == 1){
		cout << "Seu carro é gasolina ele faria " << vCombustivel << " KM/L" << endl;
	}else if (tipoCombustivel == 2){
		cout << "Seu carro é alcool ele faria " << vCombustivel << " KM/L" <<endl;
	}
	
	cout << "Com os items adicionais ele fará " << vTotal << " KM/L";
}
	

