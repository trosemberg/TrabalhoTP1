#include "entidades.h"
#include <iostream>
using namespace std;


void Usuario::SetUsuario(string Nome, string Apelido, string Senha, string Telefone){
    this->nome.SetNome(Nome);
    this->apelido.SetApelido(Apelido);
    this->senha.SetSenha(Senha);
    this->telefone.SetTelefone(Telefone);
}


void Livro::SetLivro(string Titulo, string Nome, string Data, string Codigo, string Genero){
    this->titulo.SetTitulo(Titulo);
    this->nome.SetNome(Nome);
    this->data.SetData(Data);
    this->codigo.SetCodigo(Codigo);
    this->genero.SetGenero(Genero);
}

