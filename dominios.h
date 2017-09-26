#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>
#include <string>
using namespace std;

// Declaração de classe.
///Classe que armazena um Nome de ate 15 caracteres, apenas com letras, espacos em branco e pontos
class Nome{
private:
    string Nome;
    const static int TamanhoMax   = 16; //15 letras mais um caracter para o '\0'

    // Definições de constantes para evitar numeros mágicos.
    /* Os Valores definidos abaixo sao os valores encontrados na tabelaa ASCII
    para os caracteres. Desta forma o "a" = 97, "z" = 122, "A" = 65, "Z" = 90, "." = 46 e " " = 32*/
    const static int Amin   = 97;
    const static int Zmin   = 122;
    const static int Amai   = 65;
    const static int Zmai   = 90;
    const static int Ponto = 46;
    const static int Espaco = 32;
    // Método responsável por validação.

    void Validar(string) throw (invalid_argument);

public:
    // Métodos de acesso.

    ///Recebe uma string e a armazena como um Nome, se os criterios de Nome forem satisfeitos
    void SetNome(string) throw (invalid_argument);

    ///Retorna um Nome
    string GetNome() const {
        return Nome;
    }
};
//-----------------------------------------------------------------------------------------------------------------------------------
///Classe que armazena um Apelido de ate 5 letras
class Apelido{
private:
    string Apelido;
    const static int TamanhoMax   = 5; //5 letras

    // Definições de constantes para evitar numeros mágicos.
    /* Os Valores definidos abaixo sao os valores encontrados na tabelaa ASCII
    para os caracteres. Desta forma o "a" = 97, "z" = 122, "A" = 65, "Z" = 90, "." = 46 e " " = 32*/
    const static int Amin   = 97;
    const static int Zmin   = 122;
    const static int Amai   = 65;
    const static int Zmai   = 90;
    // Método responsável por validação.

    void Validar(string) throw (invalid_argument);

public:
    // Métodos de acesso.

    ///Recebe uma string e armazena como um Apelido, se os criterios de Apelido forem satisfeitos
    void SetApelido(string) throw (invalid_argument);

    ///Retorna um Apelido
    string GetApelido() const {
        return Apelido;
    }
};
//----------------------------------------------------------------------------------------------------------------------------------
///Classe que armazena um Codigo de 5 algarismos de 0 a 9
class Codigo {
private:
    string Codigo;
    const static int TamanhoMax   = 5; //5 letras

    // Definições de constantes para evitar numeros mágicos.
    /* Os Valores definidos abaixo sao os valores encontrados na tabelaa ASCII
    para os caracteres. Desta forma o "0" = 48 e  "9" = 57*/
    const static int Zero   = 48;
    const static int Nove   = 57;
    // Método responsável por validação.

    void Validar(string) throw (invalid_argument);

public:
    // Métodos de acesso.

    ///Recebe uma string e armazena como um Codigo, se os criterios de Codigo forem satisfeitos
    void SetCodigo(string) throw (invalid_argument);

    ///Retorna um Codigo
    string GetCodigo() const {
        return Codigo;
    }
};
//----------------------------------------------------------------------------------------------------------------------------------
///Classe que armazena um Telefone no formato (XX) - XXXXXXXXX, onde X eh um algarismo de 0 a 9
class Telefone{
private:
    string Telefone;
    const static int TamanhoMax   = 14; //14 letras

    // Definições de constantes para evitar numeros mágicos.
    /* Os Valores definidos abaixo sao os valores encontrados na tabelaa ASCII
        para os caracteres. Desta forma o "0" = 48, "9" = 57, "(" = 40, ")" = 41 e "-" = 45.
    As contantes "Zero", "Nove", "AbrePasciii", "FechaPascii" e "Hifenascii" são os valores destas constantes na Tabela ASCII.
    As constantes "AbrePpos", "FechaPpos", "Hifenpos", "DDD1" e "DDD2" são constantes que definem a posição destes caracteres
    no vetor de string para seguir as especificações do trabalho. E a Constante "NumCel" é para especificar a primeira posição do numero de telefone no
    vetor de string*/
    const static int Zero   = 48;
    const static int Nove   = 57;
    const static int AbrePascii   = 40;
    const static int FechaPascii   = 41;
    const static int Hifenascii   = 45;
    const static int AbrePpos   = 0;
    const static int FechaPpos   = 3;
    const static int Hifenapos   = 4;
    const static int DDD1   = 1;
    const static int DDD2   = 2;
    const static int NumCel  = 5;
    // Método responsável por validação.

    void Validar(string) throw (invalid_argument);

public:
    // Métodos de acesso.

    ///Recebe uma string e armazena como um Telefone, se os criterios de Telefone forem satisfeitos
    void SetTelefone(string) throw (invalid_argument);

    ///Retorna um Telefone
    string GetTelefone() const {
        return Telefone;
    }
};
//----------------------------------------------------------------------------------------------------------------------------------
///Classe que armazena uma Senha de 4 letras, e nao pode haver repeticao de letras
class Senha{
private:
    string Senha;
    const static int TamanhoMax   = 4; //4 letras
    // Definições de constantes para evitar numeros mágicos.
    /* Os Valores definidos abaixo sao os valores encontrados na tabelaa ASCII
    para os caracteres. Desta forma o "a" = 97, "z" = 122, "A" = 65, "Z" = 90, "." = 46 e " " = 32*/
    const static int Amin   = 97;
    const static int Zmin   = 122;
    const static int Amai   = 65;
    const static int Zmai   = 90;
    // Método responsável por validação.
    void Validar(string) throw (invalid_argument);

public:
    // Métodos de acesso.

    ///Recebe uma string e armazena como uma Senha, se os criterios de Senha forem satisfeitos
    void SetSenha(string) throw (invalid_argument);

    ///Retorna uma Senha
    string GetSenha() const {
        return Senha;
    }
};
//----------------------------------------------------------------------------------------------------------------------------------
///Classe que armazena um Titulo, que deve ser composto de 20 caracteres nao podendo haver espaco em branco duplicado
class Titulo{
private:
    string Titulo;
    const static int TamanhoMax   = 21; //20 letras e 1 caracter para o '\0'

    // Definições de constantes para evitar numeros mágicos.
    /* Os Valores definidos abaixo sao os valores encontrados na tabelaa ASCII
    para os caracteres. Desta forma Espaço = 32 e "~" = 126, os valores entre espaço e "~" sao aceitos*/
    const static int Tio   = 48;
    const static int Espaco = 32;
    // Método responsável por validação.

    void Validar(string) throw (invalid_argument);

public:
    // Métodos de acesso.

    ///Recebe uma string e armazena como um Titulo, se os criterios de Titulo forem satisfeitos
    void SetTitulo(string) throw (invalid_argument);

    ///Retorna um Titulo
    string GetTitulo() const {
        return Titulo;
    }
};
//----------------------------------------------------------------------------------------------------------------------------------
///Classe que armazena uma Data no formato DD/MM/AA, com DD entre 01 e 31, MM entre 01 e 12 e AA entre 00 e 99
class Data{
private:
    string Data;
    const static int TamanhoMax   = 8; //8caracteres no seguinte formato DD/MM/AA onde DD é dia, MM é mes e AA ano, e a "/" conta como caracter
    // Definições de constantes para evitar numeros mágicos.
    /* Os Valores definidos abaixo sao os valores encontrados na tabelaa ASCII
    para os caracteres. Desta forma o "0" = 48 e  "9" = 57. As contantes D1,D2,B1,B2,M1,M2,A1 e A2 são referentes as posiçoes no vetor data
    sendo o Vetor Data definido como [D1,D2,B1,M1,M2,B2,A1,A2], de onde D1 e D2 são referentes ao dia, B1 e B2 as barras de separação, M1 e M2 ao mes
    e A1 e A2 ao ano*/
    const static int Zero   = 48;
    const static int Um   = 49;
    const static int Dois   = 50;
    const static int Tres   = 51;
    const static int Nove   = 57;
    const static int Barra  = 47;
    const static int D1   = 0;
    const static int D2   = 1;
    const static int B1   = 2;
    const static int M1   = 3;
    const static int M2   = 4;
    const static int B2   = 5;
    const static int A1   = 6;
    const static int A2   = 7;
    // Método responsável por validação.

    void Validar(string) throw (invalid_argument);

public:
    // Métodos de acesso.

    ///Recebe uma string e armazena como uma Data, se os criterios de Data forem satisfeitos
    void SetData(string) throw (invalid_argument);

    ///Retorna uma Data
    string GetData() const {
        return Data;
    }
};
//----------------------------------------------------------------------------------------------------------------------------------
///Classe que armazena um Texto de ate 40 caracteres
class Texto{
private:
    string Texto;
    const static int TamanhoMax   = 41; //40 letras e 1 caracter para o '\0'

    // Definições de constantes para evitar numeros mágicos.
    /* Os Valores definidos abaixo sao os valores encontrados na tabelaa ASCII
    para os caracteres. Desta forma Espaço = 32 e "~" = 126, os valores entre espaço e "~" sao aceitos*/
    const static int Tio   = 48;
    const static int Espaco = 32;
    // Método responsável por validação.

    void Validar(string) throw (invalid_argument);

public:
    // Métodos de acesso.

    ///Recebe uma string e armazena como um Texto, se os criterios de Texto forem satisfeitos
    void SetTexto(string) throw (invalid_argument);

    ///Retorna um Texto
    string GetTexto() const {
        return Texto;
    }
};
//----------------------------------------------------------------------------------------------------------------------------------
///Classe que armazena um Genero literario, que pode ser: Epopeia, Novela, Conto, Ensaio ou Romance
class Genero{
private:
    string Genero;
    const static string Epopeia;
    const static string Novela;
    const static string Conto;
    const static string Ensaio;
    const static string Romance;

    void Validar(string) throw (invalid_argument);

public:
    // Métodos de acesso.

    ///Recebe uma string e armazena como um Genero literario, se os criterios de Genero forem satisfeitos
    void SetGenero(string) throw (invalid_argument);

    ///Retorna um Genero literario
    string GetGenero() const {
        return Genero;
    }
};
//----------------------------------------------------------------------------------------------------------------------------------
#endif // DOMINIOS_H_INCLUDED
