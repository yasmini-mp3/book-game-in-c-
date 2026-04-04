#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");

    int dia, decisao, danoboos, danoprota, vidaprota, vidabqss;


	cout<<"VocC* C) um estudante universitC!rio. Na sua universidade desaparecimentos de alunos tem se tornado frequentes, mas sem explicaC'C#o alguma.";
	cout<<"Todos os alunos estC#o preocupados e muitas faltas estC#o ocorrendo, mas isso nC#o te fez faltar hoje. Por que justo hoje? VocC* estC! caminhando por um lugar vazio do campus durante seu intervalo, mas ouve um barulho atrC!s de vocC*. Quando se vira, sC3 vC* um vulto te nocauteando. Ao acordar vocC* nC#o consegue enxergar nada por conta da iluminaC'C#o, mas sente um forte cheiro ruim.";
	cout<<"Enquanto sua visC#o se acostuma com a escuridC#o vocC* percebe que estC! amarrado em uma maca de uma forma que C) muito fC!cil de escapar, C  sua volta hC! partes robC3ticasem teste e um caminho no esgoto estC! na sua frente.\n";
	cout<<"vocC* se desamarra?\n";
	cout<<"1 - Desamarrar.\n";
	cout<<"2 - Esperar.\n";
	cin>>decisao;
    switch (decisao) {
        case 1:  decisao = 1
        break;
        case 2:
            cout << "Por algum motivo, de forma peculiar você decide esperar até algo acontecer.\nA espera paciente não resulta em nada, além de um tédio imensurável... Não aparenta que alguém irá te salvar.\n";
            cout << "você irá se desamarrar?\n 1 - Desamarrar \n 2 - Esperar mais\n";
            cin>>decisao;
            decisao =  decisao + 100;
           switch (decisao) {
               case 101:
               cout << "Ao se desamarrar você segue em direção ao esgoto buscando uma saída desse lugar. Enquanto andava você se depara com uma bifurcação.\nDe um lado você sente um ar frio e mais escuridão, do outro você sente um ar quente e no fundo o que parece ser uma luz não natural.\n ";
               decisao = 1;
               break; 
               case 102:
               cout << "Suas atitudes peculiares já me divertiram o bastante, mas gostaria de continuar minha história.\nO que acha?\n";
               cout << "1- fugir \n2- fugir \n3 - ficar...\n";
               cin >> decisao;
               decisao = decisao + 200;
               switch (decisao) {
                    case  201:
                    cout << "Ah, Que ótimo que bom que nos entendemos! Onde eu estava mesmo... Lembrei!\n";
                    decisao = 1;
                    break;
                    case  202:
                    cout << "Ah, Que ótimo que bom que nos entendemos! Onde eu estava mesmo... Lembrei!\n";
                    decisao = 1;
                    break;
                    case  203:
                    cout << "Eu tentei ser gentil. Mas não  me resta escolha! Vejamos seu final:\nNesta sua ""grande aventura"" de esperar algo mágico acontecer seu sequestrador finalmente volta, visívelmente irritado.\nDiz-te que você se tornou inutíl em seu planos ele pega uma faca e crava em seu peito dezenas de vezes.  ";
                    cout << "Enquanto você se afoga com seu sangue, tudo fica escuro e você morre\n Final oculto: Morte por percistência.\n As vezes percistir não é a resposta.";
                    break;
               }
               
            break;
           }
}
            dia == 2;
        if (decisao == 1){
            cout<<"Ao se desamarrar você segue em direção ao esgoto buscando uma saída desse lugar. Enquanto andava você se depara com uma bifurcação.\n";
            cout<<"De um lado você sente um ar frio e mais escuridão, do outro você sente um ar quente e no fundo o que parece ser uma luz não natural.\n Por qual caminho você deseja seguir?\n1 - Frio e escuro \n2 - Quente iluminado\n";
            cin>> decisao;
            switch (decisao) {
                case 1:
                cout << "Você prefere não se arriscar e ir atrás de um lugar que provavelmente não está vazio.\nAo andar você sente a água de esgoto molhando mais a sua roupa e ouve barulhos de ratos passando por você, mas está escuro demais para ver eles.\nUm vento frio vindo do caminho à sua frente te dá arrepios, mas após uma caminhada você encontra outra divisão.\nAtrás de você, a bifurcação de antes, sendo possível ver a iluminação que você fugiu.";     
                
                
                
                
            }
        }
  return 0;

}
