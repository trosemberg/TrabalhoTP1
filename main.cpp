// Exemplos desenvolvidos para ilustrar a sintaxe da linguagem.

#include <iostream>
#include <cstring>

#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{   TUNome Teste_Nome;
    cout << "Teste do Nome: ";
    switch(Teste_Nome.run()){
        case TUNome::SUCESSO: cout << "SUCESSO"<<endl;
                                break;
        case TUNome::FALHA  : cout << "FALHA"<<endl;
                                break;
    }

    TUApelido Teste_Apelido;
    cout << "Teste do Apelido: ";
    switch(Teste_Apelido.run()){
        case TUApelido::SUCESSO: cout << "SUCESSO"<<endl;
                                break;
        case TUApelido::FALHA  : cout << "FALHA"<<endl;
                                break;
    }

    TUCodigo Teste_Codigo;
    cout << "Teste do Codigo: ";
    switch(Teste_Codigo.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO"<<endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA"<<endl;
                                break;
    }

    TUTelefone Teste_Telefone;
    cout << "Teste do Telefone: ";
    switch(Teste_Telefone.run()){
        case TUTelefone::SUCESSO: cout << "SUCESSO"<<endl;
                                break;
        case TUTelefone::FALHA  : cout << "FALHA"<<endl;
                                break;
    }

    TUSenha Teste_Senha;
    cout << "Teste da Senha: ";
    switch(Teste_Senha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO"<<endl;
                                break;
        case TUSenha::FALHA  : cout << "FALHA"<<endl;
                                break;
    }

    TUTitulo Teste_Titulo;
    cout << "Teste do Titulo: ";
    switch(Teste_Titulo.run()){
        case TUTitulo::SUCESSO: cout << "SUCESSO"<<endl;
                                break;
        case TUTitulo::FALHA  : cout << "FALHA"<<endl;
                                break;
    }

    TUData Teste_Data;
    cout << "Teste da Data: ";
    switch(Teste_Data.run()){
        case TUData::SUCESSO: cout << "SUCESSO"<<endl;
                                break;
        case TUData::FALHA  : cout << "FALHA"<<endl;
                                break;
    }

    TUTexto Teste_Texto;
    cout << "Teste do Texto: ";
    switch(Teste_Texto.run()){
        case TUTexto::SUCESSO: cout << "SUCESSO"<<endl;
                                break;
        case TUTexto::FALHA  : cout << "FALHA"<<endl;
                                break;
    }

    TUGenero Teste_Genero;
    cout << "Teste do Genero: ";
    switch(Teste_Genero.run()){
        case TUGenero::SUCESSO: cout << "SUCESSO"<<endl;
                                break;
        case TUGenero::FALHA  : cout << "FALHA"<<endl;
                                break;
    }


    TUUsuario Teste_Usuario;
    cout << "Teste do Usuario: ";
    switch(Teste_Usuario.run()){
        case TUGenero::SUCESSO: cout << "SUCESSO"<<endl;
                                break;
        case TUGenero::FALHA  : cout << "FALHA"<<endl;
                                break;
    }

    TULivro Teste_Livro;
    cout << "Teste do Livro: ";
    switch(Teste_Livro.run()){
        case TUGenero::SUCESSO: cout << "SUCESSO"<<endl;
                                break;
        case TUGenero::FALHA  : cout << "FALHA"<<endl;
                                break;
    }

    TUResenha Teste_Resenha;
    cout << "Teste da Resenha: ";
    switch(Teste_Resenha.run()){
        case TUGenero::SUCESSO: cout << "SUCESSO"<<endl;
                                break;
        case TUGenero::FALHA  : cout << "FALHA"<<endl;
                                break;
    }
    return 0;
}
