#include <bits/stdc++.h>

using namespace std;

int main()
{
    float ticketmedio;
    int qtcompras;
    int atrasado;
    string metodo;
    int scorecompras;
    int scoreatraso;
    int scorepagamento;
    int total;
    cout << "SISTEMA DE PERFIL DE CLIENTE" << endl;
    cout << "--------------------------------"<< endl;
    cout << "INFORME OS DADOS DO ULTIMO ANO" << endl << endl;
    cout << "Quantas compras o cliente fez no ultimo ano?";
    cin >> qtcompras;
    cout << "Qual o ticket medio? ";
    cin >> ticketmedio;
    cout << endl;
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
                if(ticketmedio > 3000){
            scorecompras = 60;
                }
                else{
                    scorecompras = 0;
                }
        }
    }
    cout << "Score de volume de compras = " << scorecompras <<  " pontos " << endl << endl;
    if (atrasado = 1){
        scoreatraso = 15;
    }
    else{
        if(atrasado = 0){
            scoreatraso = 30;
        }
        else{
            if(atrasado > 1 || qtcompras == 0){
                scoreatraso = 0;
            }
        }
    }
    cout << "Score de inadimplencia = " << scoreatraso << " pontos" << endl;
    if (metodo == "D"){
        scorepagamento = 5;
    }
    else{
        if (metodo == "C" || metodo == "B"){
            scorepagamento = 10;
        }
    }
    cout << "Score de forma de pagamento = " << scorepagamento << " pontos" << endl << endl;
    total = scorepagamento + scoreatraso + scorecompras;
    if(total >= 0 && total <= 25){
            cout << "Classificacao final = CLIENTE BRONZE" ;
    }
    else{
        if(total > 25 && total <= 75){
            cout << "Classificacao final = CLIENTE PRATA" ;
    }
    else{
        if(total > 75){
            cout << "Classificacao final = CLIENTE OURO" ;
    }
    }
    }
}


