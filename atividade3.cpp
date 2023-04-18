#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1,n2,faltas,media;
	
	cout << "INFORME SUAS FALTAS: ";
	cin >> faltas;
	
	cout << "INFORME SUA PRIMEIRA NOTA: ";
	cin >> n1;
	
	cout << "INFORME SUA SEGUNDA NOTA: ";
	cin >> n2;
	
	media = (n1+n2) /2;
	
	if (media >= 6){
		cout << "VOCE PASSSOU: " << media << " paraéns nega";
	}else {
		cout << "VOCE REPROVOU KKK: ";
	}
	
	if(faltas <=25 ){
	
	}else {
		cout << ",mas reprovou por faltas: ";
	}
}
