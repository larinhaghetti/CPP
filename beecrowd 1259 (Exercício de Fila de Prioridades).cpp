#include<iostream>
#include<queue>
using namespace std;

int main(){
	priority_queue<int>pares;
	priority_queue<int>impares;
	
	int qtd;
	cin >> qtd;
	
	for(int i = 0; i < qtd; i++){
		
		int numerolido;
		cin >> numerolido;
		
		if(numerolido % 2 == 0){ //Verificar se é par
			pares.push(-numerolido); //Coloquei negativo para multiplicar depois por -1 e mostrar do menor para o maior.
		}
		else{ //Ímpar
			impares.push(numerolido);
		}	
	}
	while(!pares.empty()){ //Se a fila pares não estiver vazia, mostrar o topo e tirar do topo.
		cout << pares.top()*(-1) << endl; //Multiplicado por -1 para aparecer do menor pro maior.
		pares.pop();
	}
	
	while(!impares.empty()){ //Se a fila ímpares não estiver vazia, mostrar o topo e tirar do topo.
		cout << impares.top() << endl;
		impares.pop();
	}
}
