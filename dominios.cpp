#include "dominios.h"
#include <iostream>
using namespace std;
//Definições de constantes.
const string Genero::Epopeia = "Epopeia";
const string Genero::Novela = "Novela";
const string Genero::Conto = "Conto";
const string Genero::Ensaio = "Ensaio";
const string Genero::Romance = "Romance";

//Definições de métodos.

//Definições dos métodos de Nome
/*A função Nome::Validar funciona da seguinte forma:
Primeiro iniciamos uma variavel Nomegrande=1, tal variavel será setada para zero se o tamanho da do nome utilizado for menor ou igual a 15 caracteres
conforme foi definido pelo trabalho.Desta forma utilizamos um for que vai interando a string para analisarmos cada posição dela, da posição inicial
ate a posição onde se encontraria o "\0" caso a string tenha o tamanho maximo permitido.O primeiro if analisa se encontrou um "\0"(que indica o final da string)
ate a posição 15 do vetor, se não for encontrado lança a exceção pois a string sera maior que o permitido. O segundo e terceiro if servem para analisar
se a posição atual do vetor na iteração é uma letra, uma espaço ou um ponto, e se não for nenhuma destas opções será lançada a exceção.

 A função Nome::SetNome apenas o Nome para o nome desejado se o nome desejado comprir as especificações do função Nome::Validar.*/
void Nome::Validar(string Nome) throw (invalid_argument){
    int Nomegrande = 1;
    for (int i = 0; i<TamanhoMax;i++){
        if (Nome[i]=='\0'){
            Nomegrande = 0;
            break;
        }
        else if (((Nome[i]<Amai) && (Nome[i]!=Ponto) && (Nome[i]!=Espaco))){
             throw invalid_argument("Argumento invalido.");
       // }
       // else if (Nome[i]==Espaco && Nome[i+1]==Espaco ){
    //    throw invalid_argument("Argumento invalido.");
        }else if (((Nome[i]>Zmai) && (Nome[i]<Amin)) || (Nome[i]>Zmin) ){
            throw invalid_argument("Argumento invalido.");
        }
    }
   if(Nomegrande == 1){
    throw invalid_argument("Argumento invalido.");
   }
}

void Nome::SetNome(string Nome) throw (invalid_argument){
    Validar(Nome);
    this->Nome = Nome;
}
// Fim das Definições dos metodos de Nome

//----------------------------------------------------------------------------------------------------------------------------------

//Definições dos metodos de Apelido
/* A função Apelido::Validar funciona da seguinte forma, como o apelido tem que ter necessariamente 5 letras, o primeiro if serve para checar se Apelido possui
5 bytes de tamanho, ou seja, é um vetor de 5 caracteres, se não for,será lançada exceção pois significa que a string tem tamanho diferente do definido.
Apos passar por essa verificação, ha uma iteração durante toda a string checando cada caracter para ver se ele pertence a faixa de letras definidas pela table ASCII,
se algum caracter nao for letra, será lançada a exceção.
A função Apelido::SetApelido seta o Apelido do objeto passado para o Apelido desejado apenas se o Apelido desejaco comprir os requisitos da Função
Apelido::Validar. */
void Apelido::Validar(string Apelido) throw (invalid_argument){
    // Lança exceção se valor for menor que o limite definido.
    if(Apelido.length() != (TamanhoMax)){
       throw invalid_argument("Argumento invalido.");
    }
    for (int i = 0; i<TamanhoMax;i++){
        if ((Apelido[i]<Amai) || (Apelido[i]>Zmin) ){
            throw invalid_argument("Argumento invalido.");
        }else if ((Apelido[i]>Zmai) && (Apelido[i]<Amin)){
            throw invalid_argument("Argumento invalido.");
        }
    }

}

void Apelido::SetApelido(string Apelido) throw (invalid_argument){
    Validar(Apelido);
    this->Apelido = Apelido;
}
//Fim das Definições dos metodos de Apelido

//----------------------------------------------------------------------------------------------------------------------------------

//Definições dos metodos de Codigo
/*A função Codigo::Validar funciona da seguinte forma, primeiro checa se o Codigo possui tamanho de 5 bytes ,ou seja, um vetor de 5 caracteres, pois se não for indica
que o codigo não possui 5 números conforme foi especificado no trabalho. Se Codigo[5] for o caracter '\0', ocorre a iteração do vetor Codigo checando cada caracter para
certificar que ele se encontra na faixa destinada a numeros de acordo com a tabela ASCII, se algum caracter não for um número, será lançada a exceção de argumento
inválido.
A função Codigo::SetCodigo atualiza o valor do Codigo do objeto passado apenas se o codigo passado for aceito pela função Codigo::Validar*/
void Codigo::Validar(string Codigo) throw (invalid_argument){
    if(Codigo.length() != (TamanhoMax)){
        throw invalid_argument("Argumento invalido.");
    }
    for (int i = 0; i<TamanhoMax;i++){
        if ((Codigo[i]<Zero) || (Codigo[i]>Nove) ){
            throw invalid_argument("Argumento invalido.");
        }
    }

}

void Codigo::SetCodigo(string Codigo) throw (invalid_argument){
    Validar(Codigo);
    this->Codigo = Codigo;
}
// Fim das Definições dos metodos de Código

//----------------------------------------------------------------------------------------------------------------------------------

//Definiões dos metodos de Telefone
/* A Função Telefone::Validar funciona para validar se o Telefone passado segue as especificações pedidas no trabalho.
O Primeiro if checa se o tamanho do telefone condiz com o requerido, lançando uma exceção se não. O segundo,terceiro e quarto if servem para checar se o Telefone
passado começa com parentese, depois vem dois numeros (DDD), fecha o parentese e possui um hifén, se essas condições não forem satisfeitas , será lançada a exceção.
Por ultimo checa se a partir do hifen o telefone é composto apenas por números.
A função Telefone::SetTelefone atualiza o valor do telefone apenas se ele condizer com as especificações determinadas na função Telefone::Validar */
void Telefone::Validar(string Telefone) throw (invalid_argument){
    if(Telefone.length()!= (TamanhoMax)){
        throw invalid_argument("Argumento invalido.");
    }
    else if((Telefone[AbrePpos]!= AbrePascii) || (Telefone[FechaPpos]!=FechaPascii) || (Telefone[Hifenapos]!=Hifenascii)){
        throw invalid_argument("Argumento invalido.");
    }else if ((Telefone[DDD1]<Zero) || (Telefone[DDD1]>Nove) ){
        throw invalid_argument("Argumento invalido.");
    }else if ((Telefone[DDD2]<Zero) || (Telefone[DDD2]>Nove) ){
        throw invalid_argument("Argumento invalido.");
    }
    for (int i = NumCel; i<TamanhoMax;i++){
        if ((Telefone[i]<Zero) || (Telefone[i]>Nove) ){
            throw invalid_argument("Argumento invalido.");
        }
    }

}

void Telefone::SetTelefone(string Telefone) throw (invalid_argument){
    Validar(Telefone);
    this->Telefone = Telefone;
}
//Fim das Definições dos metodos de Telefone

//----------------------------------------------------------------------------------------------------------------------------------

//Definições dos metodos de Senha
/* A Função Senha::Validar funciona da seguinte forma, primeiramente testamos se a Senha possui o tamanho definido pelas especificações, se não possuir a exceção é
lançada. Após isso testa se a Senha é composta apenas por letras usando como base as faixas de valores onde as letras se encontram na tabela ASCII. Por ultimo
itera duas vezes o vetor checando se se possui letras repetidas. A iteração ocorre do seguinte modo, primeiro compara Senha[0] com as depois posições do vetor, se
Senha[0] for diferente de todas elas, nenhuma exceção sera lançada e parte-se para o mesmo teste com Senha[1] e assim sucessivamente.
A função Senha::Set seta a Senha do objeto passado para a senha desejada, se e somente se, a senha desejada foi avaliada pela função Senha::Validar e nenhuma
exceção for lançada*/
void Senha::Validar(string Senha) throw (invalid_argument){
    if(Senha.length() != (TamanhoMax)){
       throw invalid_argument("Argumento invalido.");
    }
    for (int i = 0; i < TamanhoMax ; i++){
        if ((Senha[i]<Amai) || (Senha[i]>Zmin) ){
            throw invalid_argument("Argumento invalido.");
        }else if ((Senha[i]>Zmai) && (Senha[i]<Amin)){
            throw invalid_argument("Argumento invalido.");
        }
    }
    for(int i = 0; i < TamanhoMax-1 ; i++){
        for (int j = i+1; j<TamanhoMax; j++){
            if (Senha[i] == Senha[j]){
                throw invalid_argument("Argumento invalido.");
            }
        }
    }

}

void Senha::SetSenha(string Senha) throw (invalid_argument){
    Validar(Senha);
    this->Senha = Senha;
}
//Fim das Definições dos metodos de Senha

//----------------------------------------------------------------------------------------------------------------------------------

//Definições dos metodos de Titulo
/* A função Titulo::Validar checa se o titulo esta dentro do dos padrões exigidos no trabalho. O primeiro if server para checar se o titulo segue as especificações
de tamanho, pois se extrapolar o limite de caracteres sera lançada a exceção. O segundo if server para checar se o titulo é constituido por letras, numeros
ou pontuação conforme a faixa determinada pela tabela ASCII e o terceiro if checa a presença de dois espaços consecutivos, que se ocorrer resultará em uma
exceção.
A função Titulo::Set seta o titulo do objeto passado para a titulo desejado, se e somente se, o titulo desejado foi avaliado pela função Titulo::Validar e nenhuma
exceção for lançada*/
void Titulo::Validar(string Titulo) throw (invalid_argument){
    int Titulogrande = 1;
    for (int i = 0; i<TamanhoMax;i++){
        if (Titulo[i]=='\0'){
            Titulogrande = 0;
            break;
        }
        else if (((Titulo[i]<Espaco) && (Titulo[i]>Tio))){
            throw invalid_argument("Argumento invalido.");
        }else if (Titulo[i]==Espaco && Titulo[i+1]==Espaco ){
            throw invalid_argument("Argumento invalido.");
        }
    }
   if(Titulogrande == 1){
    throw invalid_argument("Argumento invalido.");
   }
}

void Titulo::SetTitulo(string Titulo) throw (invalid_argument){
    Validar(Titulo);
    this->Titulo = Titulo;
}
// Fim das Definições dos metodos de Titulo

//----------------------------------------------------------------------------------------------------------------------------------

//Definições dos metodos de Data
/*A função Data::Validar checa se o a data se encontra dentro dos padrões exigidos no trabalho, sendo este formado o seguinte [D1,D2,B1,M1,M2,B2,A1,A2].
O primeiro if serve para checar se a data possui a quantidade de caracteres certa, se não tiver a exceção é lançada. O segundo if serve para checar se as posições
B1 e B2 são o caracter '/'. O terceiro if serve para checar se as posições D1, D2, M1, M2, A1 e A2 são constituidos de números.
O quarto e quinto if servem para checar se os dias e meses se encontram no formato desejado, sendo os dias entre 1 e 31 e o mes entre 1 e 12
A função Data::SetData seta a data do Objeto passado desde que a data siga os padrões definidos pela função Data:Validar*/
void Data::Validar(string Data) throw (invalid_argument){
    if(Data.length() != (TamanhoMax)){ // primeiro if
        throw invalid_argument("Argumento invalido.");
    }
    if ((Data[B1]!= Barra) || (Data[B2]!=Barra)){ //segundo if
        throw invalid_argument("Argumento invalido.");
    }
    for(int i = 0; i < TamanhoMax ; i=i+3){
        if((Data[i]<Zero) || (Data[i]>Nove) || (Data[i+1]<Zero) || (Data[i+1]>Nove)){ //terceiro if
          throw invalid_argument("Argumento invalido.");
        }
    }
    if((Data[D1] > Tres) || ((Data[D1] == Tres) &&(Data[D2]>Um)) || ((Data[D1] == Zero) &&(Data[D2] == Zero))){
        throw invalid_argument("Argumento invalido.");
    }else if((Data[M1] > Um) || ((Data[M1] == Um) && (Data[M2] > Dois)) || ((Data[M1] == Zero) && (Data[M2] == Zero))){
        throw invalid_argument("Argumento invalido.");
    }

}

void Data::SetData(string Data) throw (invalid_argument){
    Validar(Data);
    this->Data = Data;
}
// Fim das Definições dos metodos de Data

//----------------------------------------------------------------------------------------------------------------------------------

//Definições dos metodos de Texto
/*A função Texto::Validar checa se o texto esta dentro do dos padrões exigidos no trabalho. O primeiro if server para checar se o texto segue as especificações
de tamanho, pois se extrapolar o limite de caracteres sera lançada a exceção. O segundo if server para checar se o texto é constituido por letras, numeros
ou pontuação conforme a faixa determinada pela tabela ASCII.
A função Texto::Set seta o texto do objeto passado para a texto desejado, se e somente se, o texto desejado foi avaliado pela função Texto::Validar e nenhuma
exceção for lançada */
void Texto::Validar(string Texto) throw (invalid_argument){
    int Textogrande = 1;
    for (int i = 0; i<TamanhoMax;i++){
        if (Texto[i]=='\0'){
            Textogrande = 0;
            break;
        }
        else if (((Texto[i]<Espaco) && (Texto[i]>Tio))){
            throw invalid_argument("Argumento invalido.");
        }
    }
   if(Textogrande == 1){
    throw invalid_argument("Argumento invalido.");
   }
}

void Texto::SetTexto(string Texto) throw (invalid_argument){
    Validar(Texto);
    this->Texto = Texto;
}
// Fim das Definições dos metodos de Texto

//----------------------------------------------------------------------------------------------------------------------------------

//Definições dos metodos de Genero
/* A função Genero::Validar testa se a string Genero recebida é igual a um dos gêneros determinado pelas especificações do trabalho, sendo eles Epopeia,Novela,Conto
Ensaio e Romance. Se nao for nenhuma dessas opções será lançado a exceção.
A função Genero::SetGenero atualiza o o Genero se a função validar não lançar nenhuma exceção*/
void Genero::Validar(string Genero) throw (invalid_argument){
    if((Genero.compare(Epopeia)!= 0) && (Genero.compare(Novela)!= 0) && (Genero.compare(Conto)!= 0) && (Genero.compare(Ensaio)!= 0) && (Genero.compare(Romance)!= 0)){
      throw invalid_argument("Argumento invalido.");
    }
}

void Genero::SetGenero(string Genero) throw (invalid_argument){
    Validar(Genero);
    this->Genero = Genero;
}
// Fim das Definições dos metodos de Genero

//----------------------------------------------------------------------------------------------------------------------------------
