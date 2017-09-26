#include "testes.h"

// Definições de métodos.
/* Aqui sem encontram as constantes de valor invalido e valido para cada teste
 que projetamos. As Variveis valor valido e invalido estao declaradas no teste.h porem nesse trecho de codigo nós
 declaramos os valores delas todas juntas para ser mais facil de alterar se necessario*/

    const string TUNome::VALOR_VALIDO = "Tomas Rosemberg";
    const string TUNome::VALOR_INVALIDO = "Maria Radasdadasdasdsadffsda";

    const string TUApelido::VALOR_VALIDO = "Abcde";
    const string TUApelido::VALOR_INVALIDO = "abc";

    const string TUCodigo::VALOR_VALIDO = "00001";
    const string TUCodigo::VALOR_INVALIDO = "00";

    const string TUTelefone::VALOR_VALIDO = "(61)-981680000";
    const string TUTelefone::VALOR_INVALIDO = "(99)999999999";

    const string TUSenha::VALOR_VALIDO = "abcd";
    const string TUSenha::VALOR_INVALIDO = "aaaa";

    const string TUTitulo::VALOR_VALIDO = "A Alma encantadora";
    const string TUTitulo::VALOR_INVALIDO = "Maria  Ra";

    const string TUData::VALOR_VALIDO = "20/09/95";
    const string TUData::VALOR_INVALIDO = "01/13/95";

    const string TUTexto::VALOR_VALIDO = "oi tudo bem, como vai voce";
    const string TUTexto::VALOR_INVALIDO = "oi tudo bem? como vai voce, eu vou bem e voce";

    const string TUGenero::VALOR_VALIDO = "Epopeia";
    const string TUGenero::VALOR_INVALIDO = "ola";

    const string TUUsuario::Nome = "Tomas Rosemberg";
    const string TUUsuario::Apelido = "Abcde";
    const string TUUsuario::Senha = "abcd";
    const string TUUsuario::Telefone = "(61)-981680000";

    const string TULivro::Titulo = "A Alma encantadora";
    const string TULivro::Nome = "Tomas Rosemberg";
    const string TULivro::Data=  "20/09/95";
    const string TULivro::Codigo = "00001";
    const string TULivro::Genero = "Epopeia";

    const string TUResenha::VALOR_VALIDO = "oi tudo bem, como vai voce";

// Teste da Classe Nome
void TUNome::SetUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){

    try{
        nome->SetNome(VALOR_VALIDO);
        if (nome->GetNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->SetNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNome::run(){
    SetUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// termina teste da classe Nome

//----------------------------------------------------------------------------------------------------------------------------------

// Teste da Classe Apelido
void TUApelido::SetUp(){
    apelido = new Apelido();
    estado = SUCESSO;
}

void TUApelido::tearDown(){
    delete apelido;
}

void TUApelido::testarCenarioSucesso(){

    try{
        apelido->SetApelido(VALOR_VALIDO);
        if (apelido->GetApelido() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUApelido::testarCenarioFalha(){
    try{
        apelido->SetApelido(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUApelido::run(){
    SetUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// termina teste da classe Apelido

//----------------------------------------------------------------------------------------------------------------------------------

// Teste da Classe código
void TUCodigo::SetUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->SetCodigo(VALOR_VALIDO);
        if (codigo->GetCodigo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->SetCodigo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUCodigo::run(){
    SetUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// termina teste da classe Código

//----------------------------------------------------------------------------------------------------------------------------------

//Teste da classe Telefone
void TUTelefone::SetUp(){
    telefone = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete telefone;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        telefone->SetTelefone(VALOR_VALIDO);
        if (telefone->GetTelefone() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        telefone->SetTelefone(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUTelefone::run(){
    SetUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// termina teste da classe Telefone

//----------------------------------------------------------------------------------------------------------------------------------

//Teste da classe Senha
void TUSenha::SetUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->SetSenha(VALOR_VALIDO);
        if (senha->GetSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->SetSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUSenha::run(){
    SetUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// termina teste da classe Senha

//----------------------------------------------------------------------------------------------------------------------------------

// Teste da Classe Titulo
void TUTitulo::SetUp(){
    titulo = new Titulo();
    estado = SUCESSO;
}

void TUTitulo::tearDown(){
    delete titulo;
}

void TUTitulo::testarCenarioSucesso(){

    try{
        titulo->SetTitulo(VALOR_VALIDO);
        if (titulo->GetTitulo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTitulo::testarCenarioFalha(){
    try{
        titulo->SetTitulo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUTitulo::run(){
    SetUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// termina teste da classe Titulo

//----------------------------------------------------------------------------------------------------------------------------------

// Teste da Classe código
void TUData::SetUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->SetData(VALOR_VALIDO);
        if (data->GetData() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->SetData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUData::run(){
    SetUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// termina teste da classe Código

//----------------------------------------------------------------------------------------------------------------------------------

// Teste da Classe Texto
void TUTexto::SetUp(){
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown(){
    delete texto;
}

void TUTexto::testarCenarioSucesso(){
    try{
        texto->SetTexto(VALOR_VALIDO);
        if (texto->GetTexto() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha(){
    try{
        texto->SetTexto(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUTexto::run(){
    SetUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// termina teste da classe Texto

//----------------------------------------------------------------------------------------------------------------------------------

// Teste da Classe Genero
void TUGenero::SetUp(){
    genero = new Genero();
    estado = SUCESSO;
}

void TUGenero::tearDown(){
    delete genero;
}

void TUGenero::testarCenarioSucesso(){
    try{
        genero->SetGenero(VALOR_VALIDO);
        if (genero->GetGenero() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUGenero::testarCenarioFalha(){
    try{
        genero->SetGenero(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUGenero::run(){
    SetUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
// termina teste da classe Genero

//----------------------------------------------------------------------------------------------------------------------------------

// Teste da Entidade Usuario
void TUUsuario::SetUp(){
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown(){
    delete usuario;
}

void TUUsuario::testarCenarioSucesso(){
    try{
        usuario->SetUsuario(Nome,Apelido,Senha,Telefone);
        if (usuario->GetUsuarioNome() != Nome){
            estado = FALHA;
        }else if (usuario->GetUsuarioApelido() != Apelido){
            estado = FALHA;
        }else if (usuario->GetUsuarioSenha() != Senha){
            estado = FALHA;
        }else if (usuario->GetUsuarioTelefone() != Telefone){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}


int TUUsuario::run(){
    SetUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
// termina teste da classe Usuario

//----------------------------------------------------------------------------------------------------------------------------------

// Teste da Entidade Livro
void TULivro::SetUp(){
    livro = new Livro();
    estado = SUCESSO;
}

void TULivro::tearDown(){
    delete livro;
}

void TULivro::testarCenarioSucesso(){
    try{
        livro->SetLivro(Titulo, Nome, Data, Codigo, Genero);
        if (livro->GetLivroTitulo() != Titulo){
            estado = FALHA;
        }else if (livro->GetLivroNome() != Nome){
            estado = FALHA;
        }else if (livro->GetLivroData() != Data){
            estado = FALHA;
        }else if (livro->GetLivroCodigo() != Codigo){
            estado = FALHA;
        }else if (livro->GetLivroGenero() != Genero){
            estado = FALHA;
        }
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}


int TULivro::run(){
    SetUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
// termina teste da classe Livro

//----------------------------------------------------------------------------------------------------------------------------------

// Teste da Classe Texto
void TUResenha::SetUp(){
    resenha = new Resenha();
    estado = SUCESSO;
}

void TUResenha::tearDown(){
    delete resenha;
}

void TUResenha::testarCenarioSucesso(){
    try{
        resenha->SetResenha(VALOR_VALIDO);
        if (resenha->GetResenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}



int TUResenha::run(){
    SetUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
// termina teste da classe Texto
