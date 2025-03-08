#include <iostream>
using namespace std;
int main(){
    char operacao, continuar;
    int num1 , num2;

    do
    {
        cout <<"Calculadora simples.\n";
        cout <<"Escolhe uma operacao para efetuar o calculo de dois valore (+,-,*,/): ";
        cin >> operacao;

        cout << "Digite o primeiro valor: ";
        cin>>num1;
        cout <<endl;
        cout << "Digite o outro valor: ";
        cin>>num2;
        cout <<endl;

        switch (operacao)
        {
        case '+':
            cout << "Resultado: "<<num1+num2<<endl;
            break;
        case '-':
            cout << "Resultado: "<<num1-num2<<endl;
            break;
        case '*':
            cout << "Resultado: "<<num1*num2<<endl;
            break;
        case '/':
            if(num2!=0){
                cout << "Resultado: "<< num1/num2<<endl;
            }else{
                cout << "Erro a divisao por zero nao e permitida!"<<endl;
            }
            break;
        default:
            cout << "Opcao invalida!"<<endl;
            break;
        }

        cout << "Deseja continuar com os calculos(s/n): ";
        cin>>continuar;
    } while (continuar=='s'|| continuar=='S');
    cout << "Obrigado por usar a nossa calculadora!";
    
    return 0;
}