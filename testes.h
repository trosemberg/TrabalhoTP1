#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <iostream>


// Declara��o de classe.
///Teste de unidade da classe Nome
/*!Verifica se a string que sera armazenada por Nome satisfaz os criterios do teste. Esses criterios estao especificados na documentacao de Nome
*/
class TUNome{
private:
    // Refer�ncia para o objeto a ser testado.

    Nome *nome;
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    // Estado do teste.
    int estado;

    // Declara��es de m�todos.

    void SetUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    ///Funcao que inicia o teste de unidade
    int run();
};
//----------------------------------------------------------------------------------------------------------------------------------
///Teste de unidade da classe Apelido
/*!Verifica se a string que sera armazenada por Apelido satisfaz os criterios do teste. Esses criterios estao especificados na documentacao de Apelido
*/
class TUApelido{
private:
    // Refer�ncia para o objeto a ser testado.

    Apelido *apelido;
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    // Estado do teste.
    int estado;

    // Declara��es de m�todos.

    void SetUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    ///Funcao que inicia o teste de unidade
    int run();
};
//----------------------------------------------------------------------------------------------------------------------------------
///Teste de unidade da classe Codigo
/*!Verifica se a string que sera armazenada por Codigo satisfaz os criterios do teste. Esses criterios estao especificados na documentacao de Codigo
*/
class TUCodigo {
private:
    // Refer�ncia para o objeto a ser testado.

    Codigo *codigo;
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    // Estado do teste.
    int estado;

    // Declara��es de m�todos.

    void SetUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    ///Funcao que inicia o teste de unidade
    int run();
};
//----------------------------------------------------------------------------------------------------------------------------------
///Teste de unidade da classe Telefone
/*!Verifica se a string que sera armazenada por Telefone satisfaz os criterios do teste. Esses criterios estao especificados na documentacao de Telefone
*/
class TUTelefone{
private:
    // Refer�ncia para o objeto a ser testado.

    Telefone *telefone;
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    // Estado do teste.
    int estado;

    // Declara��es de m�todos.

    void SetUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    ///Funcao que inicia o teste de unidade
    int run();
};
//----------------------------------------------------------------------------------------------------------------------------------
///Teste de unidade da classe Senha
/*!Verifica se a string que sera armazenada por Senha satisfaz os criterios do teste. Esses criterios estao especificados na documentacao de Senha
*/
class TUSenha{
private:
    // Refer�ncia para o objeto a ser testado.

    Senha *senha;
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    // Estado do teste.
    int estado;

    // Declara��es de m�todos.

    void SetUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    ///Funcao que inicia o teste de unidade
    int run();
};
//----------------------------------------------------------------------------------------------------------------------------------
///Teste de unidade da classe Titulo
/*!Verifica se a string que sera armazenada por Titulo satisfaz os criterios do teste. Esses criterios estao especificados na documentacao de Titulo
*/
class TUTitulo{
private:
    // Refer�ncia para o objeto a ser testado.

    Titulo *titulo;
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    // Estado do teste.
    int estado;

    // Declara��es de m�todos.

    void SetUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    ///Funcao que inicia o teste de unidade
    int run();
};
//----------------------------------------------------------------------------------------------------------------------------------
///Teste de unidade da classe Data
/*!Verifica se a string que sera armazenada por Data satisfaz os criterios do teste. Esses criterios estao especificados na documentacao de Data
*/
class TUData{
private:
    // Refer�ncia para o objeto a ser testado.

    Data *data;
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    // Estado do teste.
    int estado;

    // Declara��es de m�todos.

    void SetUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    ///Funcao que inicia o teste de unidade
    int run();
};
//----------------------------------------------------------------------------------------------------------------------------------
///Teste de unidade da classe Texto
/*!Verifica se a string que sera armazenada por Texto satisfaz os criterios do teste. Esses criterios estao especificados na documentacao de Texto
*/
class TUTexto{
private:
    // Refer�ncia para o objeto a ser testado.

    Texto *texto;
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    // Estado do teste.
    int estado;

    // Declara��es de m�todos.

    void SetUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    ///Funcao que inicia o teste de unidade
    int run();
};
//----------------------------------------------------------------------------------------------------------------------------------
///Teste de unidade da classe Genero
/*!Verifica se a string que sera armazenada por Genero satisfaz os criterios do teste. Esses criterios estao especificados na documentacao de Genero
*/
class TUGenero{
private:
    // Refer�ncia para o objeto a ser testado.

    Genero *genero;
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    // Estado do teste.
    int estado;

    // Declara��es de m�todos.

    void SetUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    ///Funcao que inicia o teste de unidade
    int run();
};
//----------------------------------------------------------------------------------------------------------------------------------
///Teste de unidade da classe Usuario
/*!Verifica se as strings que serao armazenadas por Usuario satisfazem os criterios do teste. Esses criterios estao especificados na documentacao de Usuario
*/
class TUUsuario{
private:

    // Defini��es de constantes para evitar numeros m�gicos.
    const static string Nome;
    const static string Apelido;
    const static string Senha;
    const static string Telefone;

    // Refer�ncia para o objeto a ser testado.
    Usuario *usuario;



    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void SetUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    ///Funcao que inicia o teste de unidade
    int run();
};
//----------------------------------------------------------------------------------------------------------------------------------
///Teste de unidade da classe Livro
/*!Verifica se as strings que serao armazenadas por Livro satisfazem os criterios do teste. Esses criterios estao especificados na documentacao de Livro
*/
class TULivro{
private:

    // Defini��es de constantes para evitar numeros m�gicos.
    const static string Titulo;
    const static string Nome;
    const static string Data;
    const static string Codigo;
    const static string Genero;


    // Refer�ncia para o objeto a ser testado.

    Livro *livro;

    // Estado do teste.

    int estado;

    // Declara��es de m�todos.

    void SetUp();
    void tearDown();
    void testarCenarioSucesso();


public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    ///Funcao que inicia o teste de unidade
    int run();
};
//----------------------------------------------------------------------------------------------------------------------------------
///Teste de unidade da classe Resenha
/*!Verifica se a string que sera armazenada por Resenha satisfaz os criterios do teste. Esses criterios estao especificados na documentacao de Resenha
*/
class TUResenha{
private:
    // Refer�ncia para o objeto a ser testado.
    //os unicos valores que nao serao aceitos como validos serao vogais acentuadas e "c cedilha"
    Resenha *resenha;
    const static string VALOR_VALIDO;
    // Estado do teste.
    int estado;

    // Declara��es de m�todos.

    void SetUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    // Defini��es de constantes para reportar resultado do teste.

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    ///Funcao que inicia o teste de unidade
    int run();
};



#endif // TESTES_H_INCLUDED
