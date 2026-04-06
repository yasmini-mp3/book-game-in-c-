#include <iostream>
#include <locale.h>
#ifdef _WIN32
#include <windows.h>
#endif
using namespace std;

void mostrarBarra(int vidaAtual, int vidaMaxima)
{                                                                // void so mostra no console, nao devolve valor nenhum, por isso nao tem return
    int barraTamanho = 20;                                       // Tamanho da barra de vida
    int preenchimento = (vidaAtual * barraTamanho) / vidaMaxima; // Calcula o preenchimento da barra
    cout << "HP: [";
    for (int i = 0; i < barraTamanho; i++)
    {
        if (i < preenchimento)
        {
            cout << "█"; // Parte preenchida da barra
        }
        else
        {
            cout << " "; // Parte vazia da barra
        }
    }
    cout << "] " << vidaAtual << "/" << vidaMaxima << endl; // Exibe a vida atual e máxima
}
   // comando para compilar quando for apresentar o trabalho: g++ ~/Downloads/book-game/code-game/codigo-jogo.cpp && ./a.out
int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(65001); // UTF-8 no terminal Windows
    SetConsoleCP(65001);
#endif
    setlocale(LC_ALL, "Portuguese");

    int chance;
    int libertouPrimeiro = 0; // sobre o aluno da sala laranja
    int tentouAcalmar = 0;    // sobre o aluno gritando
    int decisao;
    int dia;
    int vidaProta = 10;
    int vidaBoss = 16;
    int aliados = 0;
    int danoProta = 1;
    bool faca = false;
    bool chaveboss = false; // adicionado pra garantir que o personagem chegue ao boss
    srand(time(NULL));

    cout << "Você é um estudante universitário. Na sua universidade desaparecimentos de alunos tem se tornado frequentes, mas sem explicação alguma.";
    cout << "Todos os alunos estão preocupados e muitas faltas estão ocorrendo, mas isso não te fez faltar hoje. Por que justo hoje? Você está caminhando por um lugar vazio do campus durante seu intervalo, mas ouve um barulho atrás de você. Quando se vira, só vê um vulto te nocauteando. Ao acordar você não consegue enxergar nada por conta da iluminação, mas sente um forte cheiro ruim.";
    cout << "Enquanto sua visão se acostuma com a escuridão você percebe que está amarrado em uma maca de uma forma que é muito fácil de escapar, à sua volta há partes robóticas em teste e um caminho no esgoto está na sua frente.\n";
    cout << "você se desamarra?\n";
    cout << "1 - Desamarrar.\n";
    cout << "2 - Esperar.\n";
    cin >> decisao;
    switch (decisao)
    {
    case 1:
        decisao = 1;
        break;
    case 2:
        cout << "Por algum motivo, de forma peculiar você decide esperar até algo acontecer.\nA espera paciente não resulta em nada, além de um tédio imensurável... Não aparenta que alguém irá te salvar.\n";
        cout << "você irá se desamarrar?\n 1 - Desamarrar \n 2 - Esperar mais\n";
        cin >> decisao;
        decisao = decisao + 100;
        switch (decisao)
        {
        case 101:
            cout << "Ao se desamarrar você segue em direção ao esgoto buscando uma saída desse lugar. Enquanto andava você se depara com uma bifurcação.\nDe um lado você sente um ar frio e mais escuridão, do outro você sente um ar quente e no fundo o que parece ser uma luz não natural.\n ";
            decisao = 1;
            break;
        case 102:
            cout << "Suas atitudes peculiares já me divertiram o bastante, mas gostaria de continuar minha história.\nO que acha?\n";
            cout << "1- fugir \n2- fugir \n3 - ficar...\n";
            cin >> decisao;
            decisao = decisao + 200;
            switch (decisao)
            {
            case 201:
                cout << "Ah, Que ótimo que bom que nos entendemos! Onde eu estava mesmo... Lembrei!\n";
                decisao = 1;
                break;
            case 202:
                cout << "Ah, Que ótimo que bom que nos entendemos! Onde eu estava mesmo... Lembrei!\n";
                decisao = 1;
                break;
            case 203:
                cout << "Eu tentei ser gentil. Mas não  me resta escolha! Vejamos seu final:\nNesta sua "
                        "grande aventura"
                        " de esperar algo mágico acontecer seu sequestrador finalmente volta, visívelmente irritado.\nDiz-te que você se tornou inutíl em seu planos ele pega uma faca e crava em seu peito dezenas de vezes.  ";
                cout << "Enquanto você se afoga com seu sangue, tudo fica escuro e você morre\n Final oculto: Morte por percistência.\n As vezes percistir não é a resposta.";
                break;
            }

            break;
        }
    }
    dia = 2;
    cout << "\n--- Dia " << dia << " ---\n"
         << endl;

    if (decisao == 1)
    {
        cout << "Ao se desamarrar você segue em direção ao esgoto buscando uma saída desse lugar. Enquanto andava você se depara com uma bifurcação.\n";
        cout << "De um lado você sente um ar frio e mais escuridão, do outro você sente um ar quente e no fundo o que parece ser uma luz não natural.\n Por qual caminho você deseja seguir?\n1 - Frio e escuro \n2 - Quente iluminado\n";
        cin >> decisao;
        if (decisao == 1)
        {
            cout << "Você prefere não se arriscar e ir atrás de um lugar que provavelmente não está vazio. \n";
            cout << "Ao andar você sente a água de esgoto molhando mais a sua roupa e ouve barulhos de ratos passando por você, mas está escuro demais para ver eles.\n";
            cout << "Um vento frio vindo do caminho à sua frente te dá arrepios, mas após uma caminhada você encontra outra divisão.\n Atrás de você, a bifurcação de antes, sendo possível ver a iluminação que você fugiu. \n";
        }
        else if (decisao == 2)
        {
            cout << "Indo atrás da luz você caminha por pouco tempo na água suja do esgoto até começar a ver uma lâmpada fluorescente de tom alaranjado que não segue o caminho principal.\n";
            cout << "Ela ilumina uma sala semelhante à que você estava 'preso', mas agora é outra pessoa ainda desmaiada e com seu braço substituído por uma prótese robótica.\n Você reconhece o aluno de um cartaz de desaparecido pela universidade.\n";
            cout << "Você pretende libertar o aluno?\n 1 - Sim\n 2 - Não\n";
            cin >> libertouPrimeiro;
            if (libertouPrimeiro == 1)
            {
                cout << "Você encontra uma faca na sala e a usa para libertar o aluno das amarras.\n Enquanto você o libertava ele acorda com medo, mas entende que você o ajudou e te segue para achar a saída.\n";
                aliados = 1;
                cout << "A faca utilizada parece ser útil, gostaria de levá-la consigo?\n 1 - Sim\n 2 - Não\n";
                cin >> decisao;
                if (decisao == 1)
                {
                    faca = true;
                    cout << "Você decide levar a faca consigo, nunca se sabe quando ela será necessária.\n Após isso você segue o caminho que o túnel te leva.\n";
                }
                else if (decisao == 2)
                {
                    cout << "Você deixa a faca na mesa situada no canto da sala e vai embora, seguindo o caminho do túnel.\n";
                }
            }
            else if (tentouAcalmar == 2)
            {
                cout << "Por precaução, você prefere deixar o aluno preso e fugir enquanto ele ainda dorme.\n Ao se virar em direção a saída da sala você enxerga uma faca numa mesa.\n";
                cout << "Você quer pegar a faca?\n 1 - Sim\n 2 - Não";
                cin >> decisao;
                if (decisao == 1)
                {
                    faca = true;
                    cout << "Você decide levar a faca consigo, nunca se sabe quando ela será necessária.\n Após isso você segue o caminho que o túnel te leva.\n";
                }
                else if (decisao == 2)
                {
                    cout << "Você deixa a faca na mesa situada no canto da sala e vai embora, seguindo o caminho do túnel.\n";
                }
            }
        }
        cout << "Após tudo isso você se depara com três caminhos diferentes na sua frente.\n Um vai para a esquerda com o mesmo nível de luz no final que foi visto antes, mas dele é possível ouvir gritos que não há como distinguir o que está sendo dito.\n";
        cout << "O segundo caminho vai para o meio novamente iluminado pela lâmpada alaranjada, mas com barulhos de ferramentas vindo de dentro do túnel.\n O último caminho está escuro e com um cheiro muito pior do que o normal.\n";
        cout << "Por qual caminho você deseja seguir?\n 1 - Iluminado com gritos\n 2 - Iluminado com barulhos de ferramentas\n 3 - Escuro com cheiro forte\n";
        cin >> decisao;
        switch (decisao)
        {
        case 1:
            cout << "Você se preocupa com quem quer que esteja gritando e vai até a fonte do barulho.\n Ao chegar na sala iluminada você percbe ser uma sala parecida com a que você veio.\n Ela é aberta com invenções tecnológicas e no meio a fonte do barulho.\n";
            if (libertouPrimeiro == 1 or libertouPrimeiro == 2)
            {
                cout << "No meio há outro aluno desaparecido, agora gritando desesperadamente por ter sua perna trocada por uma prótese robótica.\n";
            }
            else
            {
                cout << "No meio há o que parece ser um dos alunos desaparecidos gritando de desespero por ter sua perna substituída por uma prótese robótica.\n";
            }
            cout << "Ele te olha desesperadamente, mostrando que não tem certeza de quem fez isso com ele.\n Você deseja tentar acalmar ele?\n 1 - Sim\n 2 - Não\n";
            cin >> tentouAcalmar;
            if (tentouAcalmar == 1 and aliados == 1)
            {
                chance = rand() % 3;
                if (chance == 2)
                {
                    aliados = 2;
                    cout << "Você, com a presença de seu outro aliado, consegue acalmar e libertar o outro aluno.\n Assim você conseguiu mais um companheiro.\n";
                }
                else
                {
                    cout << "Você não conseguiu acalmar o aluno que continua esperneando e se debatendo na maca.\n";
                }
            }
            else if (tentouAcalmar == 1 and aliados == 0)
            {
                chance = rand() % 5;
                if (chance == 4)
                {
                    aliados = 2;
                    cout << "Você consegue acalmar e libertar o aluno.\n Assim você conseguiu um companheiro.\n";
                }
                else
                {
                    cout << "Você não conseguiu acalmar o aluno que continua esperneando e se debatendo na maca.\n";
                }
            }
            else if (tentouAcalmar == 2)
            {
                cout << "Você decide que tentar acalmar ele nesse estado pode ser perigoso e se vira para ir embora da sala.\n";
            }
            cout << "Com tudo possível para ser feito na sala já decidido, você resolve voltar para o início da divisão.\n";
            cout << "Agora com os caminhos restantes qual você pretende seguir?\n 2 - Iluminado com barulhos de ferramentas\n 3 - Escuro com cheiro forte\n";
            cin >> decisao;
            switch (decisao)
            {
            case 2:
                decisao = 7;
                chaveboss = true;
                break;
            case 3:
                cout << "Você segue mais uma vez o caminho quieto e escuro, por mais que o cheiro seja ruim, ainda não é insuportável.\n Depois de um tempo andando pelos rios de água suja você encontra uma sala igual a que você estava amarrado.\n";
                cout << "A sala está toda apagada com algumas partes robóticas na parede, mas o lugar onde deveria estar somente o corpo de um aluno preso tem um pano acobertando tudo.\n É possível compreender que ele não resistiu os experimentos.\n Você não acha uma saída nesse lugar então decide voltar para a divisão.\n";
                cout << "Agora com o caminho restante você só pode seguir em direção ao barulho de ferramentas.\n";
                decisao = 7;
                chaveboss = true;
                break;
            }
        case 2:
            decisao = 7;
            chaveboss = true;
            break;
        case 3:
            cout << "Você segue mais uma vez o caminho quieto e escuro, por mais que o cheiro seja ruim, ainda não é insuportável.\n Depois de um tempo andando pelos rios de água suja você encontra uma sala igual a que você estava amarrado.\n";
            cout << "A sala está toda apagada com algumas partes robóticas na parede, mas o lugar onde deveria estar somente o corpo de um aluno preso tem um pano acobertando tudo.\n É possível compreender que ele não resistiu os experimentos.\n Você não acha uma saída nesse lugar então decide voltar para a divisão.\n";
            cout << "Agora com os caminhos restantes qual você pretende seguir?\n 1 - Iluminado com gritos\n 2 - Iluminado com barulhos de ferramentas\n";
            cin >> decisao;
            switch (decisao)
            {
            case 1:
                cout << "Você se preocupa com quem quer que esteja gritando e vai até a fonte do barulho.\n Ao chegar na sala iluminada você percbe ser uma sala parecida com a que você veio.\n Ela é aberta com invenções tecnológicas e no meio a fonte do barulho.\n";
                if (libertouPrimeiro == 1 or libertouPrimeiro == 2)
                {
                    cout << "No meio há outro aluno desaparecido, agora gritando desesperadamente por ter sua perna trocada por uma prótese robótica.\n";
                }
                else
                {
                    cout << "No meio há o que parece ser um dos alunos desaparecidos gritando de desespero por ter sua perna substituída por uma prótese robótica.\n";
                }
                cout << "Ele te olha desesperadamente, mostrando que não tem certeza de quem fez isso com ele.\n Você deseja tentar acalmar ele?\n 1 - Sim\n 2 - Não\n";
                cin >> tentouAcalmar;
                if (tentouAcalmar == 1 and aliados == 1)
                {
                    chance = rand() % 3;
                    if (chance == 2)
                    {
                        aliados = 2;
                        cout << "Você, com a presença de seu outro aliado, consegue acalmar e libertar o outro aluno.\n Assim você conseguiu mais um companheiro.\n";
                    }
                    else
                    {
                        cout << "Você não conseguiu acalmar o aluno que continua esperneando e se debatendo na maca.\n";
                    }
                }
                else if (tentouAcalmar == 1 and aliados == 0)
                {
                    chance = rand() % 5;
                    if (chance == 4)
                    {
                        aliados = 2;
                        cout << "Você consegue acalmar e libertar o aluno.\n Assim você conseguiu um companheiro.\n";
                    }
                    else
                    {
                        cout << "Você não conseguiu acalmar o aluno que continua esperneando e se debatendo na maca.\n";
                    }
                }
                else if (tentouAcalmar == 2)
                {
                    cout << "Você decide que tentar acalmar ele nesse estado pode ser perigoso e se vira para ir embora da sala.\n";
                }
                cout << "Com tudo possível para ser feito na sala já decidido, você resolve voltar para o início da divisão.\n";
                cout << "Agora com o caminho restante você só pode seguir em direção ao barulho de ferramentas.\n";
                decisao = 7;
                chaveboss = true;
                break;
            case 2:
                decisao = 7;
                chaveboss = true;
                break;
            }
        }
    }
    if (chaveboss == true)
    {
        cout << "Você segue o caminho e encontra um homem de cabelo longo preto usando luvas, um jaleco, óculos de proteção e um serrote.\nReto no fim da sala é possível ver uma escada grande que vai até o teto onde uma tampa de esgoto é vista.\n";
        cout << "Ele se vira em direção à você(s) e diz:\nNão acredito que um erro ao amarrar me causaria tanto problema. Como você chegou até aqui? Agora isso não importa, vou ter que achar outras cobaias para meu experimento.\nApós falar isso ele corre em sua direção com o serrote na mão e tenta te atacar.\n";

        bool serrote = true;
        int acaoBatalha;         // organizar as ações do jogador durante a batalha
        danoProta = 1 + aliados; // recalcula COM os aliados que foram coletados na historia, cada aliado contribui com +1 de dano
        for (int turno = 1; turno <= 100; turno++)
        {

            if (vidaProta <= 0 || vidaBoss <= 0)
            {
                break;
            }

            cout << "\n--- TURNO " << turno << " ---\n";
            cout << "Sua vida:  ";
            mostrarBarra(vidaProta, 10);
            cout << "Boss:  ";
            mostrarBarra(vidaBoss, 16);


            cout << "\nO que você faz?\n";
            cout << "1 - Bloqueio\n";
            cout << "2 - Esquivo\n";
            cin >> acaoBatalha;

            int danoBoss = serrote ? 2 : 1;
            int danoRecebido = danoBoss;

            switch (acaoBatalha)
            {
            case 1:
                danoRecebido -= 1;
                cout << "Você bloqueou parte do dano!\n";
                break;

            case 2:
            {
                int chance = rand() % 100;
                if (chance < 40)
                {
                    danoRecebido = 0;
                    cout << "Você esquivou completamente!\n";
                }
                else
                {
                    cout << "Você falhou na esquiva!\n";
                }
                break;
            }

            default:
                cout << "Você hesitou...\n";
                break;
            }

            vidaProta -= danoRecebido;
            cout << "Você recebeu " << danoRecebido << " de dano.\n";

            if (vidaProta <= 0)
            {
                break;
            }

            cout << "\nAgora é sua vez! Deseja atacar?\n";
            cout << "1 - Sim\n";
            cout << "2 - Não\n";
            cin >> acaoBatalha;

            switch (acaoBatalha)
            {
            case 1:
            {
                int chanceBoss = rand() % 100;

                if (chanceBoss < 30)
                {
                    cout << "O Boss esquivou!\n";
                }
                else
                {
                    vidaBoss -= danoProta;
                    cout << "Você acertou o Boss!\n";
                }
                break;
            }

            case 2:
                cout << "Você não atacou...\n";
                break;

            default:
                cout << "Você ficou indeciso...\n";
                break;
            }

            int evento = rand() % 10;
            if (evento == 0 && serrote)
            {
                serrote = false;
                cout << "\nO Boss deixou o serrote cair! Agora causa menos dano!\n";
            }
        }
        // temos que adicionar algo a mais para o final do game... algo para o final da história =)
        // isso só esta para testar tudo
        if (vidaProta > 0 && vidaBoss <= 0)
        {
            cout << "\nVocê venceu!\n";
        }
        else if (vidaProta <= 0)
        {
            cout << "\nVocê foi derrotado...\n";
        }
        else
        {
            cout << "\nA luta terminou sem vencedor.\n";
        }
    }
    return 0;
}