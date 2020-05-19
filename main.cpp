#include <bits/stdc++.h>

using namespace std;

int main()
{
    float ticketmedio;
    int qtcompras;
    int atrasado;
    char metodo;
    int scorecompras;
    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------"<< endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" << endl << endl;
    cout << "Quantas compras o cliente fez no ultimo ano?";
    cin >> qtcompras;
    cout << "Qual o ticket medio? ";
    cin >> ticketmedio;
    cout << "Quantas vezes o cliente atrasou o pagamento? " ;
    cin >> atrasado;
    cout << "A maioria das compras foi em dinheiro, cartao ou boleto (D/C/B)? ";
    cin >> metodo;
    cout << endl;
    if (ticketmedio <= 3000 && qtcompras <= 2){
        scorecompras = 20;
    }
    else{
        if (ticketmedio <=3000 && qtcompras >=2){
            scorecompras = 40;
        }
        else{
            scorecompras = 60;
        }
    }
    cout << "Score de volume de compras = " << scorecompras <<  " pontos " << endl << endl;

}

