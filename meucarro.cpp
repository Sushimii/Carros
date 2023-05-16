#include <iostream>
using namespace std;
//Criando classe de nome : "carro"
class Carro
{
    //Classe de formato publico
    public:
    
    //Variavel "cor" do tipo string pertencente a classe "Carro"
    string Cor;
    //Variavel "Modelo" do tipo string pertencente a classe "Carro"
    string Modelo;
    //Variavel "VelMax" do tipo float pertencente a classe "Carro"
    float VelMax;
    //Metodo void com nome de "Buzinar"
    void Buzinar();
};
//Codigo principal
int main()
{
//Adicionaod um valor a classe "Carro"
Carro MeuCarro;

//Adicionando valor na varivael "cor" percentente a classe carro   
MeuCarro.Cor = "Rosa";
//Adicionando valor na varivael "Modelo" percentente a classe carro
MeuCarro.Modelo = "Delorean";
//Adicionando valor na varivael "VelMax" percentente a classe carro
MeuCarro.VelMax = 150.0f;

//Chamando o metodo buzinar
MeuCarro.Buzinar();
//Tela mostrando o valor da variavel "cor" pertecente ao objeto "MeuCarro"
cout << MeuCarro.Cor << endl;
//Tela mostrando o valor da variavel "VelMax" pertecente ao objeto "MeuCarro"
cout << MeuCarro.VelMax << endl;
//Tela mostrando o valor da variavel "Modelo" pertecente ao objeto "MeuCarro"
cout << MeuCarro.Modelo << endl;
}
//Metodo Buzinar
void Carro::Buzinar(){
    //Mensagem que irá aparecer caso o metodo "buzinar" seja chamado
    cout << "Bi,Bi!!!" << endl;
}