#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"
#include <stdexcept>
#include <string>
using namespace std;
/*Na classe usuario, que � constituida de Nome, Apelido, Senha e Telefone, se criou fun��es Set para alterar os valores destes objetos individualmente
e tambem criou-se uma fun��o SetUsuario para poder alterar todos os valores usando uma fun��o s� caso seja necessario. A fun��o SetUsuario � a unica nao definida
aqui em entidades.h pois ela � um pouco maior que o normal para ser delcarada inline*/
///Classe que armazena um Usuario. Um Usuario eh definido por um Nome, Apelido, Senha e Telefone
class Usuario{
private:
    Nome nome;
    Apelido apelido;
    Senha senha;
    Telefone telefone;

public:
    ///Cria um Usuario
    void SetUsuario(string Nome, string Apelido, string Senha, string Telefone);
    ///Armazena um Apelido em um Usuario
    void SetUsuarioApelido(string Apelido) throw (invalid_argument){
        this->apelido.SetApelido(Apelido);
    }
    ///Armazena uma Senha em um Usuario
    void SetUsuarioSenha(string Senha) throw (invalid_argument){
        this->senha.SetSenha(Senha);
    }
    ///Armazena um Telefone em um Usuario
    void SetUsuarioTelefone(string Telefone) throw (invalid_argument){
        this->telefone.SetTelefone(Telefone);
    }
    ///Retorna o Nome de um Usuario
    string GetUsuarioNome() const{
        return nome.GetNome();
    }
    ///Retorna o Apelido de um Usuario
    string GetUsuarioApelido() const{
        return apelido.GetApelido();
    }
    ///Retorna a Senha de um Usuario
    string GetUsuarioSenha() const{
        return senha.GetSenha();
    }
    ///Retorna o Telefone de um Usuario
    string GetUsuarioTelefone() const{
        return telefone.GetTelefone();
    }

};

/*Na classe Livro, que � constituida de Titulo,Nome do autor,Data Codigo e Genero, se criou fun��es Set para alterar os valores destes objetos individualmente
e tambem criou-se uma fun��o SetLivro para poder alterar todos os valores usando uma fun��o s� caso seja necessario. A fun��o SetLivro � a unica nao definida
aqui em entidades.h pois ela � um pouco maior que o normal para ser declarada inline*/
///Classe que armazena um Livro. Um Livro eh definido por um Titulo, Nome, Data, Codigo e Genero
class Livro{
private:
    Titulo titulo;
    Nome nome;
    Data data;
    Codigo codigo;
    Genero genero;

public:
    ///Cria um Livro
    void SetLivro(string Titulo, string Nome, string Data, string Codigo, string Genero);
    ///Armazena um Titulo em um Livro
    void SetTitulo(string Titulo){
        this->titulo.SetTitulo(Titulo);
    }
    ///Armazena um Nome em um Livro
    void SetNome(string Nome){
        this->nome.SetNome(Nome);
    }
    ///Armazena uma Data em um Livro
    void SetData(string Data){
        this->data.SetData(Data);
    }
    ///Armazena um Codigo em um Livro
    void SetCodigo(string Codigo){
        this->codigo.SetCodigo(Codigo);
    }
    ///Armazena um Genero em um Livro
    void SetGenero(string Genero){
        this->genero.SetGenero(Genero);
    }
    ///Retorna o Titulo de um Livro
    string GetLivroTitulo() const{
        return titulo.GetTitulo();
    }
    ///Retorna o Nome de um Livro
    string GetLivroNome() const{
        return nome.GetNome();
    }
    ///Retorna a Data de um Livro
    string GetLivroData() const{
        return data.GetData();
    }
    ///Retorna o Codigo de um Livro
    string GetLivroCodigo() const{
        return codigo.GetCodigo();
    }
    ///Retorna o Genero de um Livro
    string GetLivroGenero() const{
        return genero.GetGenero();
    }

};

///Classe que armazena uma Resenha. Uma Resenha eh um Texto de ate 40 caracteres
class Resenha{
private:
    Texto texto;
    // Defini��es de constantes para evitar numeros m�gicos.
    /* Os Valores definidos abaixo sao os valores encontrados na tabelaa ASCII
    para os caracteres. Desta forma Espa�o = 32 e "~" = 126, os valores entre espa�o e "~" sao aceitos*/
    const static int Tio   = 48;
    const static int Espaco = 32;

    // M�todo respons�vel por valida��o.

    void Validar(string) throw (invalid_argument);

public:
    // M�todos de acesso.

    ///Armazena uma string como uma Resenha
    void SetResenha(string Texto) throw (invalid_argument){
    this->texto.SetTexto(Texto);
    }

    ///Retorna uma Resenha
    string GetResenha() const {
        return texto.GetTexto();
    }
};


#endif // ENTIDADES_H
