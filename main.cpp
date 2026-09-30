#include <iostream>

using namespace std;

int main(){
    int respost = 0;
    bool continuar = true;
    cout<<endl;
    cout << "New Cross Burguer" << endl;

    //criar um menu, através dos produtos, podendo inclusive cadastrar novos produtos, editar, excluir (desativas), consultar
    while(continuar){
        cout<<endl;
        cout<<"MENU"<<endl;
        cout<<"====================================="<< endl;
        cout<<"informe uma opcao"<<endl;
        cout<<"1 - Iniciar pedido"<<endl;
        cout<<"2 - Cancelar pedido"<<endl;
        cout<<"3 - Adicionar produtos"<<endl;
        cout<<"4 - Sair do sistema"<<endl;
        cin>>respost;

        switch (respost)
        {
        case 4:
            /* code */
            cout<<endl;
            cout<<"Saindo do sistema!!!\nAte mais!!"<<endl;
            cout<<endl;
            continuar=false;
            break;
        
        default:
            continue;
            break;
        }
    }

    return 0;
}