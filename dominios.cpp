#include "dominios.h"
#include <iostream>
using namespace std;
//Defini��es de constantes.
const string Genero::Epopeia = "Epopeia";
const string Genero::Novela = "Novela";
const string Genero::Conto = "Conto";
const string Genero::Ensaio = "Ensaio";
const string Genero::Romance = "Romance";

//Defini��es de m�todos.

//Defini��es dos m�todos de Nome
/*A fun��o Nome::Validar funciona da seguinte forma:
Primeiro iniciamos uma variavel Nomegrande=1, tal variavel ser� setada para zero se o tamanho da do nome utilizado for menor ou igual a 15 caracteres
conforme foi definido pelo trabalho.Desta forma utilizamos um for que vai interando a string para analisarmos cada posi��o dela, da posi��o inicial
ate a posi��o onde se encontraria o "\0" caso a string tenha o tamanho maximo permitido.O primeiro if analisa se encontrou um "\0"(que indica o final da string)
ate a posi��o 15 do vetor, se n�o for encontrado lan�a a exce��o pois a string sera maior que o permitido. O segundo e terceiro if servem para analisar
se a posi��o atual do vetor na itera��o � uma letra, uma espa�o ou um ponto, e se n�o for nenhuma destas op��es ser� lan�ada a exce��o.

 A fun��o Nome::SetNome apenas o Nome para o nome desejado se o nome desejado comprir as especifica��es do fun��o Nome::Validar.*/
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
// Fim das Defini��es dos metodos de Nome

//----------------------------------------------------------------------------------------------------------------------------------

//Defini��es dos metodos de Apelido
/* A fun��o Apelido::Validar funciona da seguinte forma, como o apelido tem que ter necessariamente 5 letras, o primeiro if serve para checar se Apelido possui
5 bytes de tamanho, ou seja, � um vetor de 5 caracteres, se n�o for,ser� lan�ada exce��o pois significa que a string tem tamanho diferente do definido.
Apos passar por essa verifica��o, ha uma itera��o durante toda a string checando cada caracter para ver se ele pertence a faixa de letras definidas pela table ASCII,
se algum caracter nao for letra, ser� lan�ada a exce��o.
A fun��o Apelido::SetApelido seta o Apelido do objeto passado para o Apelido desejado apenas se o Apelido desejaco comprir os requisitos da Fun��o
Apelido::Validar. */
void Apelido::Validar(string Apelido) throw (invalid_argument){
    // Lan�a exce��o se valor for menor que o limite definido.
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
//Fim das Defini��es dos metodos de Apelido

//----------------------------------------------------------------------------------------------------------------------------------

//Defini��es dos metodos de Codigo
/*A fun��o Codigo::Validar funciona da seguinte forma, primeiro checa se o Codigo possui tamanho de 5 bytes ,ou seja, um vetor de 5 caracteres, pois se n�o for indica
que o codigo n�o possui 5 n�meros conforme foi especificado no trabalho. Se Codigo[5] for o caracter '\0', ocorre a itera��o do vetor Codigo checando cada caracter para
certificar que ele se encontra na faixa destinada a numeros de acordo com a tabela ASCII, se algum caracter n�o for um n�mero, ser� lan�ada a exce��o de argumento
inv�lido.
A fun��o Codigo::SetCodigo atualiza o valor do Codigo do objeto passado apenas se o codigo passado for aceito pela fun��o Codigo::Validar*/
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
// Fim das Defini��es dos metodos de C�digo

//----------------------------------------------------------------------------------------------------------------------------------

//Defini�es dos metodos de Telefone
/* A Fun��o Telefone::Validar funciona para validar se o Telefone passado segue as especifica��es pedidas no trabalho.
O Primeiro if checa se o tamanho do telefone condiz com o requerido, lan�ando uma exce��o se n�o. O segundo,terceiro e quarto if servem para checar se o Telefone
passado come�a com parentese, depois vem dois numeros (DDD), fecha o parentese e possui um hif�n, se essas condi��es n�o forem satisfeitas , ser� lan�ada a exce��o.
Por ultimo checa se a partir do hifen o telefone � composto apenas por n�meros.
A fun��o Telefone::SetTelefone atualiza o valor do telefone apenas se ele condizer com as especifica��es determinadas na fun��o Telefone::Validar */
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
//Fim das Defini��es dos metodos de Telefone

//----------------------------------------------------------------------------------------------------------------------------------

//Defini��es dos metodos de Senha
/* A Fun��o Senha::Validar funciona da seguinte forma, primeiramente testamos se a Senha possui o tamanho definido pelas especifica��es, se n�o possuir a exce��o �
lan�ada. Ap�s isso testa se a Senha � composta apenas por letras usando como base as faixas de valores onde as letras se encontram na tabela ASCII. Por ultimo
itera duas vezes o vetor checando se se possui letras repetidas. A itera��o ocorre do seguinte modo, primeiro compara Senha[0] com as depois posi��es do vetor, se
Senha[0] for diferente de todas elas, nenhuma exce��o sera lan�ada e parte-se para o mesmo teste com Senha[1] e assim sucessivamente.
A fun��o Senha::Set seta a Senha do objeto passado para a senha desejada, se e somente se, a senha desejada foi avaliada pela fun��o Senha::Validar e nenhuma
exce��o for lan�ada*/
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
//Fim das Defini��es dos metodos de Senha

//----------------------------------------------------------------------------------------------------------------------------------

//Defini��es dos metodos de Titulo
/* A fun��o Titulo::Validar checa se o titulo esta dentro do dos padr�es exigidos no trabalho. O primeiro if server para checar se o titulo segue as especifica��es
de tamanho, pois se extrapolar o limite de caracteres sera lan�ada a exce��o. O segundo if server para checar se o titulo � constituido por letras, numeros
ou pontua��o conforme a faixa determinada pela tabela ASCII e o terceiro if checa a presen�a de dois espa�os consecutivos, que se ocorrer resultar� em uma
exce��o.
A fun��o Titulo::Set seta o titulo do objeto passado para a titulo desejado, se e somente se, o titulo desejado foi avaliado pela fun��o Titulo::Validar e nenhuma
exce��o for lan�ada*/
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
// Fim das Defini��es dos metodos de Titulo

//----------------------------------------------------------------------------------------------------------------------------------

//Defini��es dos metodos de Data
/*A fun��o Data::Validar checa se o a data se encontra dentro dos padr�es exigidos no trabalho, sendo este formado o seguinte [D1,D2,B1,M1,M2,B2,A1,A2].
O primeiro if serve para checar se a data possui a quantidade de caracteres certa, se n�o tiver a exce��o � lan�ada. O segundo if serve para checar se as posi��es
B1 e B2 s�o o caracter '/'. O terceiro if serve para checar se as posi��es D1, D2, M1, M2, A1 e A2 s�o constituidos de n�meros.
O quarto e quinto if servem para checar se os dias e meses se encontram no formato desejado, sendo os dias entre 1 e 31 e o mes entre 1 e 12
A fun��o Data::SetData seta a data do Objeto passado desde que a data siga os padr�es definidos pela fun��o Data:Validar*/
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
// Fim das Defini��es dos metodos de Data

//----------------------------------------------------------------------------------------------------------------------------------

//Defini��es dos metodos de Texto
/*A fun��o Texto::Validar checa se o texto esta dentro do dos padr�es exigidos no trabalho. O primeiro if server para checar se o texto segue as especifica��es
de tamanho, pois se extrapolar o limite de caracteres sera lan�ada a exce��o. O segundo if server para checar se o texto � constituido por letras, numeros
ou pontua��o conforme a faixa determinada pela tabela ASCII.
A fun��o Texto::Set seta o texto do objeto passado para a texto desejado, se e somente se, o texto desejado foi avaliado pela fun��o Texto::Validar e nenhuma
exce��o for lan�ada */
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
// Fim das Defini��es dos metodos de Texto

//----------------------------------------------------------------------------------------------------------------------------------

//Defini��es dos metodos de Genero
/* A fun��o Genero::Validar testa se a string Genero recebida � igual a um dos g�neros determinado pelas especifica��es do trabalho, sendo eles Epopeia,Novela,Conto
Ensaio e Romance. Se nao for nenhuma dessas op��es ser� lan�ado a exce��o.
A fun��o Genero::SetGenero atualiza o o Genero se a fun��o validar n�o lan�ar nenhuma exce��o*/
void Genero::Validar(string Genero) throw (invalid_argument){
    if((Genero.compare(Epopeia)!= 0) && (Genero.compare(Novela)!= 0) && (Genero.compare(Conto)!= 0) && (Genero.compare(Ensaio)!= 0) && (Genero.compare(Romance)!= 0)){
      throw invalid_argument("Argumento invalido.");
    }
}

void Genero::SetGenero(string Genero) throw (invalid_argument){
    Validar(Genero);
    this->Genero = Genero;
}
// Fim das Defini��es dos metodos de Genero

//----------------------------------------------------------------------------------------------------------------------------------
