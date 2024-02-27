#include <iostream>

using namespace std;

bool func(int tam, int vet[], int *par, int *impar, int *negativos){
    int qtdPar = 0;
    int qtdImpar = 0;
    int cont = 0;

    for(int i = 0; i<tam; i++){
        cin>>vet[i];
        if(vet[i]%2==0){
            qtdPar++;
        }
        else{
        qtdImpar++;
        }
        if(vet[i]<0){
            cont++;
        }

    }
    *negativos = cont;
        *par = qtdPar;
        *impar = qtdImpar;
        cout << "Total de elementos pares = " << *par<<endl;
        cout << "Total de elementos impares = " << *impar<<endl;
        cout << "Total de elementos negativos = " << *negativos<<endl;
    if(*negativos==true){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int tam;
    cin >> tam;
    int *par, *impar, *negativos;
    int vet[tam];

    func(tam, vet, &par, &impar, &negativos);


    return 0;
}
