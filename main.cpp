#include <iostream>
#include "class/Product.hpp"
#include "class/ProductsList.hpp"

#include <string>

using namespace std;


void AddProduct(ProductsList* productList);
void menu(ProductsList* productList);
void menuDividers();

int main(){
    //inicio variaveis
    int response = 0;
    bool continuar = true;
    ProductsList productList = ProductsList(5);
    // Fim variaveis
    
    cout<<endl;
   
    //criar um menu, através dos produtos, podendo inclusive cadastrar novos produtos, editar, excluir (desativas), consultar
    do{
        menuDividers(); 
        cout << "New Cross Burguer" << endl;
        cout<<"====================================="<< endl;
        cout<<"informe uma opcao"<<endl;
        cout<<"1 - Iniciar pedido"<<endl;
        cout<<"2 - Cancelar pedido"<<endl;
        cout<<"3 - Gerenciar Menu"<<endl;
        cout<<"4 - Sair do sistema"<<endl;
        cin>>response;

        switch (response)
        {
        case 3:
            menu(&productList);
            break;
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
    }while(continuar);

    return 0;
}


void menu(ProductsList* productList){
    int responseMenu=0;

    menuDividers();
    cout<<"Menu - Produtos cadastrados"<<endl;
    cout<<"****************************************"<< endl;
    cout<< "listar produtos"<<endl;
    cout<< endl;
    cout<<"_________________________________________"<< endl;
    cout<<"informe uma opcao"<<endl;
    cout<<"_________________________________________"<< endl;
    cout<<"1 - Cadastrar um produto"<<endl;
    cout<<"2 - Editar um produto"<<endl;
    cout<<"3 - Remover um produto"<<endl; 
    cout<<"4 - Consultar um produto"<<endl;
    cout<<"5 - Voltar ao menu principal"<<endl;
    cin >> responseMenu; 

    switch (responseMenu)
    {
    case 1:
        AddProduct(productList);
        break;
    
    default:
        break;
    }
}

void AddProduct(ProductsList** productList){
    int response;
    char continuar;
    Product * product = new Product();
    string description;
    int barCode;
    double price;

    menuDividers();

    cout<<"Cadastrar produto "<<endl;
    cout<<"********************************** "<<endl;
    cout<<"Informe o nome do produto: "<<endl;
    cin>>description;
    cout<<"Informe o valor unitário do produto: "<<endl;
    cin>>price;
    cout<<"Informe o codigo do produto: "<<endl;
    cin>>barCode;

    // validação aqui
    // cout<<"Erro ao cadastrar o produto!!"<<endl;
    product->setDescription(description);
    product->setBarCode(barCode);
    product->setUnitPrice(price);
    
    product->print();

    cout<<"produto cadastrado com sucesso!"<<endl;
    cout<<"Aperte qualquer tecla para continuar..."<<endl;
    cin >> continuar;
        
    menu(* productList);          
     
}

void menuDividers(){
    cout<<"------------------------------------------------------------------"<<endl;
    cout<<endl;
}