#include <iostream>
using namespace std;

struct Conta {
    int numero;
    double saldo;

    void depositar(double valor) {
        saldo += valor;
        cout << "Depósito de " << valor << " realizado com sucesso." << endl;
    }

    void sacar(double valor) {
        if (saldo >= valor) {
            saldo -= valor;
            cout << "Saque de " << valor << " Realizado com sucesso." << endl;
        } else {
            cout << "Saldo insuficiente." << endl;
        }
    }

    void exibir() {
        cout << "Número da conta: " << numero << endl;
        cout << "Saldo atual: " << saldo << endl;
    }

    void transferir(double valor, Conta& destino) {
        if (saldo >= valor) {
            saldo -= valor;
            destino.depositar(valor);
            cout << "Transferência de " << valor << " realizada com sucesso para a conta " << destino.numero << endl;
        } else {
            cout << "Saldo insuficiente para transferência." << endl;
        }
    }
};

int main() {
    Conta conta1, conta2;
    conta1.numero = 1;
    conta1.saldo = 1000;
    conta2.numero = 2;
    conta2.saldo = 500;

    
    conta1.exibir();
    conta2.exibir();

    conta1.depositar(200);
    conta1.exibir();

    conta1.sacar(300);
    conta1.exibir();

    conta1.transferir(400, conta2);
    conta1.exibir();
    conta2.exibir();

    return 0;
}

