#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <time.h>

typedef char UTF8;
typedef unsigned char BYTE;

int linhamento, prof;

int alinhamento(int l){
    int lin;
    scanf("%d", &lin);
    if(lin == 1){
        return 1;
    }else if(lin == 2){
        return 2;
    }else {
        return 3;
    }
}

int profissao(int p){
    int pro;
    scanf("%d", &pro);
    if(pro == 1){
        return 1;
    }else if(pro == 2){
        return 2;
    }else {
        return 3;
    }
}

int game(char x) {
    int a, b, c, d, i, jokenpo;
    printf("\n============    Aqui a nossa aventura começa!    ============\n");
    printf("\n\n\nUm evento começa no salão principal do reino. \n");
    scanf("%d", &a);
    if(a == 1){
        printf("\n");
        printf("\nescolha: %d\n", a);
    }else if(a == 2){
        printf("\n");
    }else if(a == 3){
        printf("\n");
    }

    printf("Evento 2\n");
    if(linhamento == 1){
        scanf("%d", &b);
        if(b == 1){
            printf("\n");
            printf("\nescolha: %d\n", a);
        }else if(b == 2){
            printf("\n");
        }else if(b == 3){
            printf("\n");
        } 
    }else if(linhamento == 2){
        scanf("%d", &b);
        if(b == 1){
            printf("\n");
            printf("\nescolha: %d\n", a);
        }else if(b == 2){
            printf("\n");
        }else if(b == 3){
            printf("\n");
        }
    }else if(linhamento == 3){
        scanf("%d", &b);
        if(b == 1){
            printf("\n");
            printf("\nescolha: %d\n", a);
        }else if(b == 2){
            printf("\n");
        }else if(b == 3){
            printf("\n");
        }
    }

    printf("Evento 3\n1. Volta a opção anterior\n2. (AÇÃO)\n3. Profissão alterada\n");
    scanf("%d", &c);
    if(c == 1){
        printf("\n");
        if(linhamento == 1){
            scanf("%d", &b);
            if(b == 1){
                printf("\n");
                printf("\nescolha: %d\n", a);
            }else if(b == 2){
                printf("\n");
            }else if(b == 3){
                printf("\n");
            } 
        }else if(linhamento == 2){
            scanf("%d", &b);
            if(b == 1){
                printf("\n");
                printf("\nescolha: %d\n", a);
            }else if(b == 2){
                printf("\n");
            }else if(b == 3){
                printf("\n");
            }
        }else if(linhamento == 3){
            scanf("%d", &b);
            if(b == 1){
                printf("\n");
                printf("\nescolha: %d\n", a);
            }else if(b == 2){
                printf("\n");
            }else if(b == 3){
                printf("\n");
            }
        }
    }else if(c == 2){
        printf("\n");
        printf("escolha: %d\n", b);
        /*historinha*/
    }else if(c == 3){
        printf("\n");
        if(prof == 1){
            printf("Marchou com seus exércitos para a batalha\n");
        }else if(prof == 2){
            printf("Pegou o livro que continha o feitiço e se dirigiu para o local\n");
        }else if(prof == 3){
            printf("Equipou-se com seus melhores equipamentos para a missão\n");
        }
    }

    printf("\nJOKENPÔ!\n1. Pedra\n2. Papel\n3. Tesoura\n");
    srand(time(NULL));
    jokenpo = rand() % 3;
    scanf("%d", &d);
    if(d == 1 && d == jokenpo){
        printf("Você venceu a tesoura!\n");

        printf("Você chegou no último estágio do jogo, aqui você enfrentera a poderosa controladora do tempo, que planeja destruir toda a existência!\n\n\tEla te deixou Três charadas para provar que a existência ainda vale a pena, se você acertar você salva tudo e todos!\n");
    }else if(d == 2 && d == jokenpo){
        printf("Você venceu a pedra!\n");

        printf("Você chegou no último estágio do jogo, aqui você enfrentera a poderosa controladora do tempo, que planeja destruir toda a existência!\n\n\tEla te deixou Três charadas para provar que a existência ainda vale a pena, se você acertar você salva tudo e todos!\n");
    }else if(d == 3 && d == jokenpo){
        printf("Você venceu o papel\n");

        printf("Você chegou no último estágio do jogo, aqui você enfrentera a poderosa controladora do tempo, que planeja destruir toda a existência!\n\n\tEla te deixou Três charadas para provar que a existência ainda vale a pena, se você acertar você salva tudo e todos!\n");
    }else {
        for(i = 0; i < 3; i++){
            printf("\nJOKENPÔ!\n\n1. Pedra\n2. Papel\n3. Tesoura\n");
            scanf("%d", &d);
            srand(time(NULL));
            jokenpo = rand() % 3;
            if(d == 1 && d == jokenpo){
                printf("Você venceu a tesoura!\n");
                i = 3;

                printf("Você chegou no último estágio do jogo, aqui você enfrentera a poderosa controladora do tempo, que planeja destruir toda a existência!\n\n\tEla te deixou Três charadas para provar que a existência ainda vale a pena, se você acertar você salva tudo e todos!\n");
            }else if(d == 2 && d == jokenpo){
                printf("Você venceu a pedra!\n");
                i = 3;

                printf("Você chegou no último estágio do jogo, aqui você enfrentera a poderosa controladora do tempo, que planeja destruir toda a existência!\n\n\tEla te deixou Três charadas para provar que a existência ainda vale a pena, se você acertar você salva tudo e todos!\n");
            }else if(d == 3 && d == jokenpo){
                printf("Você venceu o papel\n");
                i = 3;

                printf("Você chegou no último estágio do jogo, aqui você enfrentera a poderosa controladora do tempo, que planeja destruir toda a existência!\n\n\tEla te deixou Três charadas para provar que a existência ainda vale a pena, se você acertar você salva tudo e todos!\n");
            }
        printf("\n=~=~=~=~=~=~=~= GAME OVER! =~=~=~=~=~=~=~=\n");
        }
    }
    
    return 0;
}

int creat_character(char x) {
    int breed, goal, niche, body;

    printf("\nEscolha sua raça: \n");
    printf("\n1. Humano\n2. Anão\n3. Elfo\n");
    scanf("%d", &breed);
    if(breed == 1) {
        printf("\nVocê é um Humano!\n");

        printf("\nEscolha seu alinhamento: \n");
        printf("\n1. Mal\n2. Neutro\n3. Bom\n");
        /*scanf("%d", &lineage);*/
        linhamento = alinhamento(breed);
        if(linhamento == 1) {
            printf("\nVocê é mal!\n");

            printf("\nEscolha sua profissão: \n");
            printf("\n1. Guerreiro\n2. Mago\n3. Ladino\n");
            /*scanf("%d", &profession);*/
            prof = profissao(linhamento);
            if(prof == 1) {
                printf("\nVocê é um guerreiro!\n");

                printf("\nEscolha seu objetivo: \n");
                printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal (você não pode destruir o mal)\n");
                scanf("%d", &goal);
                if(goal == 1) {
                    printf("\nVocê quer governar o reino!\n");
                }else if(goal == 2) {
                    printf("\nVocê quer ficar rico!\n");
                }else if(goal == 3) {
                    printf("\nVocê quer destruir o mal!\n");
                }

                printf("\nMeio em que veio: \n");
                printf("\n1. Urbano\n2. Rural\n3. Tribal\n");
                scanf("%d", &niche);
                if(niche == 1) {
                    printf("\nVocê veio do meio urbano!\n");
                }else if(niche == 2) {
                    printf("\nVocê veio do meio rural!\n");
                }else if(niche == 3) {
                    printf("\nVocê veio do meio tribal!\n");
                }

                printf("\nEscolhe seu estilo de corpo: \n");
                printf("\n1. Grande\n2. Médio\n3. Pequeno\n");
                scanf("%d", &body);
                if(body == 1) {
                    printf("\nVocê é grande!\n");
                }else if(body == 2) {
                    printf("\nVocê é médio!\n");
                }else if(body == 3) {
                    printf("\nVocê é pequeno!\n");
                }
                /*AQUI VEM A HISTÓRIA PRÉVIA DO PERSONAGEM*/
                printf("Você era um gerreiro da guarda real, que foi corrompido por sues prisioneiros magos em uma de suas expedições, onde ficou encantado com o poder da magia das trevas e as incríveis coisas que você pode fazer com isso. E agora você utiliza de seus conhecimentos de combate para alcançar seus tenebrosos objetivos!\n");
                game(x);

                return 0;
            }else if(prof == 2) {
                printf("\nVocê é um mago!\n");

                printf("\nEscolha seu objetivo: \n");
                printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal (você não pode destruir o mal)\n");
                scanf("%d", &goal);
                if(goal == 1) {
                    printf("\nVocê quer governar o reino!\n");
                }else if(goal == 2) {
                    printf("\nVocê quer ficar rico!\n");
                }else if(goal == 3) {
                    printf("\nVocê quer destruir o mal!\n");
                }

                printf("\nMeio em que veio: \n");
                printf("\n1. Urbano\n2. Rural\n3. Tribal\n");
                scanf("%d", &niche);
                if(niche == 1) {
                    printf("\nVocê veio do meio urbano!\n");
                }else if(niche == 2) {
                    printf("\nVocê veio do meio rural!\n");
                }else if(niche == 3) {
                    printf("\nVocê veio do meio tribal!\n");
                }

                printf("\nEscolhe seu estilo de corpo: \n");
                printf("\n1. Grande\n2. Médio\n3. Pequeno\n");
                scanf("%d", &body);
                if(body == 1) {
                    printf("\nVocê é grande!\n");
                }else if(body == 2) {
                    printf("\nVocê é médio!\n");
                }else if(body == 3) {
                    printf("\nVocê é pequeno!\n");
                }
                /*MAGO, MAL, HUMANO*/
                printf("Devota dos deuses afogados, você foi deixada com os Navis, para aprender sua religião e se tornar a Suma sacerdotisa. Você drena energia do desespero e medo dos que naufragam nos mares.\n");
                game(x);

                return 0;
            }else if(prof == 3) {
                printf("\nVocê é ladino!\n");

                printf("\nEscolha seu objetivo: \n");
                printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal (você não pode destruir o mal)\n");
                scanf("%d", &goal);
                if(goal == 1) {
                    printf("\nVocê quer governar o reino!\n");
                }else if(goal == 2) {
                    printf("\nVocê quer ficar rico!\n");
                }else if(goal == 3) {
                    printf("\nVocê quer destruir o mal!\n");
                }

                printf("\nMeio em que veio: \n");
                printf("\n1. Urbano\n2. Rural\n3. Tribal (você não pode vir de meio tribal)\n");
                scanf("%d", &niche);
                if(niche == 1) {
                    printf("\nVocê veio do meio urbano!\n");
                }else if(niche == 2) {
                    printf("\nVocê veio do meio rural!\n");
                }else if(niche == 3) {
                    printf("\nVocê veio do meio tribal!\n");
                }

                printf("\nEscolhe seu estilo de corpo: \n");
                printf("\n1. Grande\n2. Médio\n3. Pequeno\n");
                scanf("%d", &body);
                if(body == 1) {
                    printf("\nVocê é grande!\n");
                }else if(body == 2) {
                    printf("\nVocê é médio!\n");
                }else if(body == 3) {
                    printf("\nVocê é pequeno!\n");
                }
                /*LADINO, MAL, HUMANO*/
                printf("Após ver seu pai ser morto de forma covarde pelos soldados de Liduyn, você teve que crescer e aprender a vida sozinho, sendo obrigado a furtar e roubar para sobreviver. Um dia, logo após um furto, você encontrou uma criatura alta num beco e essa criatura lhe sugeriu roubar e matar pessoas famosas em troca de dinheiro e recompensas.\n");
                game(x);

                return 0;
            }
        }else if(linhamento == 2) {
            printf("\nVocê é neutro!\n");

            printf("\nEscolha sua profissão: \n");
            printf("\n1. Guerreiro\n2. Mago\n3. Ladino\n");
            /*scanf("%d", &profession);*/
            prof = profissao(linhamento);
            if(prof == 1) {
                printf("\nVocê é um guerreiro!\n");
            }else if(prof == 2) {
                printf("\nVocê é um mago!\n");
            }else if(prof == 3) {
                printf("\nVocê é ladino!\n");

                printf("\nEscolha seu objetivo: \n");
                printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal\n");
                scanf("%d", &goal);
                if(goal == 1) {
                    printf("\nVocê quer governar o reino!\n");
                }else if(goal == 2) {
                    printf("\nVocê quer ficar rico!\n");
                }else if(goal == 3) {
                    printf("\nVocê quer destruir o mal!\n");
                }

                printf("\nMeio em que veio: \n");
                printf("\n1. Urbano\n2. Rural\n3. Tribal (você não pode vir de meio tribal)\n");
                scanf("%d", &niche);
                if(niche == 1) {
                    printf("\nVocê veio do meio urbano!\n");
                }else if(niche == 2) {
                    printf("\nVocê veio do meio rural!\n");
                }else if(niche == 3) {
                    printf("\nVocê veio do meio tribal!\n");
                }

                printf("\nEscolhe seu estilo de corpo: \n");
                printf("\n1. Grande\n2. Médio\n3. Pequeno\n");
                scanf("%d", &body);
                if(body == 1) {
                    printf("\nVocê é grande!\n");
                }else if(body == 2) {
                    printf("\nVocê é médio!\n");
                }else if(body == 3) {
                    printf("\nVocê é pequeno!\n");
                }
                /*LADINO, HUMANO, NEUTRO*/
                printf("Criada por uma pai bêbado que vivia pedindo esmola nas ruas, você teve que aprender desde pequna a cuidar do vocês dois. Após ver seu pai enlouquecer você abandonou ele foi procurar meios melhores de vida, até que encontrou a Guilda dos Ratos, uma sociedade secreta de ladrões\n");
                game(x);

                return 0;
            }

            printf("\nEscolha seu objetivo: \n");
            printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal\n");
            scanf("%d", &goal);
            if(goal == 1) {
                printf("\nVocê quer governar o reino!\n");
            }else if(goal == 2) {
                printf("\nVocê quer ficar rico!\n");
            }else if(goal == 3) {
                printf("\nVocê quer destruir o mal!\n");
            }

            printf("\nMeio em que veio: \n");
            printf("\n1. Urbano\n2. Rural\n3. Tribal\n");
            scanf("%d", &niche);
            if(niche == 1) {
                printf("\nVocê veio do meio urbano!\n");
            }else if(niche == 2) {
                printf("\nVocê veio do meio rural!\n");
            }else if(niche == 3) {
                printf("\nVocê veio do meio tribal!\n");
            }

            printf("\nEscolhe seu estilo de corpo: \n");
            printf("\n1. Grande\n2. Médio\n3. Pequeno\n");
            scanf("%d", &body);
            if(body == 1) {
                printf("\nVocê é grande!\n");
            }else if(body == 2) {
                printf("\nVocê é médio!\n");
            }else if(body == 3) {
                printf("\nVocê é pequeno!\n");
            }
            /*MAGO OU GUERREIRO, HUMANO, NEUTRO*/
            printf("Você foi criado por seu tio, um famoso Guerreiro do exército de Liduyn, ele te ensinou a arte de batalha e fez lhe ensinou coisas sobre as grandes pessoas do reino\n");
            game(x);

            return 0;
        }else if(linhamento == 3) {
            printf("\nVocê é bom!\n");

            printf("\nEscolha sua profissão: \n");
            printf("\n1. Guerreiro\n2. Mago\n3. Ladino (você não pode ser um ladino)\n");
            /*scanf("%d", &profession);*/
            prof = profissao(linhamento);
            if(prof == 1) {
                printf("\nVocê é um guerreiro!\n");
            }else if(prof == 2) {
                printf("\nVocê é um mago!\n");
            }else if(prof == 3) {
                printf("\nVocê é ladino!\n");
            }

            printf("\nEscolha seu objetivo: \n");
            printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal\n");
            scanf("%d", &goal);
            if(goal == 1) {
                printf("\nVocê quer governar o reino!\n");
            }else if(goal == 2) {
                printf("\nVocê quer ficar rico!\n");
            }else if(goal == 3) {
                printf("\nVocê quer destruir o mal!\n");
            }

            printf("\nMeio em que veio: \n");
            printf("\n1. Urbano\n2. Rural\n3. Tribal\n");
            scanf("%d", &niche);
            if(niche == 1) {
                printf("\nVocê veio do meio urbano!\n");
            }else if(niche == 2) {
                printf("\nVocê veio do meio rural!\n");
            }else if(niche == 3) {
                printf("\nVocê veio do meio tribal!\n");
            }

            printf("\nEscolhe seu estilo de corpo: \n");
            printf("\n1. Grande\n2. Médio\n3. Pequeno\n");
            scanf("%d", &body);
            if(body == 1) {
                printf("\nVocê é grande!\n");
            }else if(body == 2) {
                printf("\nVocê é médio!\n");
            }else if(body == 3) {
                printf("\nVocê é pequeno!\n");
            }
            /*AQUI VEM A HISTÓRIA PRÉVIA DO PERSONAGEM*/
            printf("Você é do reino do seu país e você é excepcional e segue absolutamente todas as regras e obedece todas as ordens, sem se preocupar com as consequências.");
            game(x);

            return 0;
        }
    }else if(breed == 2) {
        printf("\nVocê é um Anão!\n");  

        printf("\nEscolha seu alinhamento: \n");
        printf("\n1. Mal\n2. Neutro\n3. Bom\n");
        /*scanf("%d", &lineage);*/
        linhamento = alinhamento(breed);
        if(linhamento == 1) {
            printf("\nVocê é mal!\n");

            printf("\nEscolha sua profissão: \n");
            printf("\n1. Guerreiro\n2. Mago\n3. Ladino\n");
            /*scanf("%d", &profession);*/
            prof = profissao(linhamento);
            if(prof == 1) {
                printf("\nVocê é um guerreiro!\n");

                printf("\nEscolha seu objetivo: \n");
                printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal (você não pode destruir o mal)\n");
                scanf("%d", &goal);
                if(goal == 1) {
                    printf("\nVocê quer governar o reino!\n");
                }else if(goal == 2) {
                    printf("\nVocê quer ficar rico!\n");
                }else if(goal == 3) {
                    printf("\nVocê quer destruir o mal!\n");
                }

                printf("\nMeio em que veio: \n");
                printf("\n1. Urbano\n2. Rural\n3. Tribal\n");
                scanf("%d", &niche);
                if(niche == 1) {
                    printf("\nVocê veio do meio urbano!\n");
                }else if(niche == 2) {
                    printf("\nVocê veio do meio rural!\n");
                }else if(niche == 3) {
                    printf("\nVocê veio do meio tribal!\n");
                }

                printf("\nEscolhe seu estilo de corpo: \n");
                printf("\n1. Grande (Você não pode ser grande)\n2. Médio\n3. Pequeno\n");
                scanf("%d", &body);
                if(body == 1) {
                    printf("\nVocê é grande!\n");
                }else if(body == 2) {
                    printf("\nVocê é médio!\n");
                }else if(body == 3) {
                    printf("\nVocê é pequeno!\n");
                }
                /*AQUI VEM A HISTÓRIA PRÉVIA DO PERSONAGEM*/
                printf("Você é o mestre de guerra de um tirano conquistador e você trouxe inumeras vitórias para seu senhor mesmo que a consequência da guerra fosse caos, destuição e morte.\n");
                game(x);

                return 0;
            }else if(prof == 2) {
                printf("\nVocê é um mago!\n");

                printf("\nEscolha seu objetivo: \n");
                printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal (você não pode destruir o mal)\n");
                scanf("%d", &goal);
                if(goal == 1) {
                    printf("\nVocê quer governar o reino!\n");
                }else if(goal == 2) {
                    printf("\nVocê quer ficar rico!\n");
                }else if(goal == 3) {
                    printf("\nVocê quer destruir o mal!\n");
                }

                printf("\nMeio em que veio: \n");
                printf("\n1. Urbano\n2. Rural\n3. Tribal\n");
                scanf("%d", &niche);
                if(niche == 1) {
                    printf("\nVocê veio do meio urbano!\n");
                }else if(niche == 2) {
                    printf("\nVocê veio do meio rural!\n");
                }else if(niche == 3) {
                    printf("\nVocê veio do meio tribal!\n");
                }

                printf("\nEscolhe seu estilo de corpo: \n");
                printf("\n1. Grande (Você não pode ser grande)\n2. Médio\n3. Pequeno\n");
                scanf("%d", &body);
                if(body == 1) {
                    printf("\nVocê é grande!\n");
                }else if(body == 2) {
                    printf("\nVocê é médio!\n");
                }else if(body == 3) {
                    printf("\nVocê é pequeno!\n");
                }
                /*AQUI VEM A HISTÓRIA PRÉVIA DO PERSONAGEM*/
                printf("Protetor da ossada deus predatório, você é um dos participantes da Ossos de Pedra, um grupo de magos solitários que protegem os ossos de Daroni, o deus dragão. Cada um separadamente faz de tudo manipulando a magia que mana da ossada para assassinar os protetores das relíquias sagradas, antiga armadura de Darone, antes dele ser banido do Monte Coração.\n");
                game(x);

                return 0;
            }else if(prof == 3) {
                printf("\nVocê é ladino!\n");

                printf("\nEscolha seu objetivo: \n");
                printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal (você não pode destruir o mal)\n");
                scanf("%d", &goal);
                if(goal == 1) {
                    printf("\nVocê quer governar o reino!\n");
                }else if(goal == 2) {
                    printf("\nVocê quer ficar rico!\n");
                }else if(goal == 3) {
                    printf("\nVocê quer destruir o mal!\n");
                }

                printf("\nMeio em que veio: \n");
                printf("\n1. Urbano\n2. Rural\n3. Tribal (você não pode vir de meio tribal)\n");
                scanf("%d", &niche);
                if(niche == 1) {
                    printf("\nVocê veio do meio urbano!\n");
                }else if(niche == 2) {
                    printf("\nVocê veio do meio rural!\n");
                }else if(niche == 3) {
                    printf("\nVocê veio do meio tribal!\n");
                }

                printf("\nEscolhe seu estilo de corpo: \n");
                printf("\n1. Grande (Anões não podem ser grande)\n2. Médio\n3. Pequeno\n");
                scanf("%d", &body);
                if(body == 1) {
                    printf("\nVocê é grande!\n");
                }else if(body == 2) {
                    printf("\nVocê é médio!\n");
                }else if(body == 3) {
                    printf("\nVocê é pequeno!\n");
                }
                /*AQUI VEM A HISTÓRIA PRÉVIA DO PERSONAGEM*/
                printf("Almadiçoado por uma bruxa por conta de um pecado cometido por seus pais, suas costas foram marcadas com sange do demônio traiçoeiro. Durante o dia você age naturalmente, mas a noite o demônio cinzento toma conta e te faz realizar seus desejos mais tenebrosos, assassinando aqueles que te enfurecem.\n");
                game(x);

                return 0;
            }
        }else if(linhamento == 2) {
            printf("\nVocê é neutro!\n");

            printf("\nEscolha sua profissão: \n");
            printf("\n1. Guerreiro\n2. Mago\n3. Ladino\n");
            /*scanf("%d", &profession);*/
            prof = profissao(linhamento);
            if(prof == 1) {
                printf("\nVocê é um guerreiro!\n");
            }else if(prof == 2) {
                printf("\nVocê é um mago!\n");
            }else if(prof == 3) {
                printf("\nVocê é ladino!\n");
            }

            printf("\nEscolha seu objetivo: \n");
            printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal\n");
            scanf("%d", &goal);
            if(goal == 1) {
                printf("\nVocê quer governar o reino!\n");
            }else if(goal == 2) {
                printf("\nVocê quer ficar rico!\n");
            }else if(goal == 3) {
                printf("\nVocê quer destruir o mal!\n");
            }

            printf("\nMeio em que veio: \n");
            printf("\n1. Urbano\n2. Rural\n3. Tribal\n");
            scanf("%d", &niche);
            if(niche == 1) {
                printf("\nVocê veio do meio urbano!\n");
            }else if(niche == 2) {
                printf("\nVocê veio do meio rural!\n");
            }else if(niche == 3) {
                printf("\nVocê veio do meio tribal!\n");
            }

            printf("\nEscolhe seu estilo de corpo: \n");
            printf("\n1. Grande (Você não pode ser grande)\n2. Médio\n3. Pequeno\n");
            scanf("%d", &body);
            if(body == 1) {
                printf("\nVocê é grande!\n");
            }else if(body == 2) {
                printf("\nVocê é médio!\n");
            }else if(body == 3) {
                printf("\nVocê é pequeno!\n");
            }
            /*AQUI VEM A HISTÓRIA PRÉVIA DO PERSONAGEM*/
            printf("Você é do reino do seu país e você é excepcional e segue absolutamente todas as regras e obedece todas as ordens, sem se preocupar com as consequências.");
            game(x);

            return 0;
        }else if(linhamento == 3) {
            printf("\nVocê é bom!\n");

            printf("\nEscolha sua profissão: \n");
            printf("\n1. Guerreiro\n2. Mago\n3. Ladino (você não pode ser um ladino)\n");
            /*scanf("%d", &profession);*/
            prof = profissao(linhamento);
            if(prof == 1) {
                printf("\nVocê é um guerreiro!\n");
            }else if(prof == 2) {
                printf("\nVocê é um mago!\n");
            }else if(prof == 3) {
                printf("\nVocê é ladino!\n");
            }

            printf("\nEscolha seu objetivo: \n");
            printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal\n");
            scanf("%d", &goal);
            if(goal == 1) {
                printf("\nVocê quer governar o reino!\n");
            }else if(goal == 2) {
                printf("\nVocê quer ficar rico!\n");
            }else if(goal == 3) {
                printf("\nVocê quer destruir o mal!\n");
            }

            printf("\nMeio em que veio: \n");
            printf("\n1. Urbano\n2. Rural\n3. Tribal\n");
            scanf("%d", &niche);
            if(niche == 1) {
                printf("\nVocê veio do meio urbano!\n");
            }else if(niche == 2) {
                printf("\nVocê veio do meio rural!\n");
            }else if(niche == 3) {
                printf("\nVocê veio do meio tribal!\n");
            }

            printf("\nEscolhe seu estilo de corpo: \n");
            printf("\n1. Grande (Você não pode ser grande)\n2. Médio\n3. Pequeno\n");
            scanf("%d", &body);
            if(body == 1) {
                printf("\nVocê é grande!\n");
            }else if(body == 2) {
                printf("\nVocê é médio!\n");
            }else if(body == 3) {
                printf("\nVocê é pequeno!\n");
            }
            /*AQUI VEM A HISTÓRIA PRÉVIA DO PERSONAGEM*/
            printf("Você faz parte de um grupo que combate toda a injustiça, você viaja ao redor do mundo procurando por pessoas que estão sendo injustiçados e precisam de ajuda\n");
            game(x);

            return 0;
        }
    }else if(breed == 3) {
        printf("\nVocê é um Elfo!\n");

        printf("\nEscolha seu alinhamento: \n");
        printf("\n1. Mal\n2. Neutro\n3. Bom\n");
        /*scanf("%d", &lineage);*/
        linhamento = alinhamento(breed);
        if(linhamento == 1) {
            printf("\nVocê é mal!\n");

            printf("\nEscolha sua profissão: \n");
            printf("\n1. Guerreiro\n2. Mago\n3. Ladino\n");
            /*scanf("%d", &profession);*/
            prof = profissao(linhamento);
            if(prof == 1) {
                printf("\nVocê é um guerreiro!\n");

                printf("\nEscolha seu objetivo: \n");
                printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal (você não pode destruir o mal)\n");
                scanf("%d", &goal);
                if(goal == 1) {
                    printf("\nVocê quer governar o reino!\n");
                }else if(goal == 2) {
                    printf("\nVocê quer ficar rico!\n");
                }else if(goal == 3) {
                    printf("\nVocê quer destruir o mal!\n");
                }

                printf("\nMeio em que veio: \n");
                printf("\n1. Urbano\n2. Rural\n3. Tribal\n");
                scanf("%d", &niche);
                if(niche == 1) {
                    printf("\nVocê veio do meio urbano!\n");
                }else if(niche == 2) {
                    printf("\nVocê veio do meio rural!\n");
                }else if(niche == 3) {
                    printf("\nVocê veio do meio tribal!\n");
                }

                printf("\nEscolhe seu estilo de corpo: \n");
                printf("\n1. Grande\n2. Médio\n3. Pequeno\n");
                scanf("%d", &body);
                if(body == 1) {
                    printf("\nVocê é grande!\n");
                }else if(body == 2) {
                    printf("\nVocê é médio!\n");
                }else if(body == 3) {
                    printf("\nVocê é pequeno!\n");
                }
                /*AQUI VEM A HISTÓRIA PRÉVIA DO PERSONAGEM*/
                printf("Você foi roubado de sues pais muito jovem e foi criado por um grupo de saqueadores. Com eles você aprendeu a ser um mercenário e agora você procura por vilas fracas para saquearem e luxar com suas riquezas\n");
                game(x);

                return 0;
            }else if(prof == 2) {
                printf("\nVocê é um mago!\n");

                printf("\nEscolha seu objetivo: \n");
                printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal (você não pode destruir o mal)\n");
                scanf("%d", &goal);
                if(goal == 1) {
                    printf("\nVocê quer governar o reino!\n");
                }else if(goal == 2) {
                    printf("\nVocê quer ficar rico!\n");
                }else if(goal == 3) {
                    printf("\nVocê quer destruir o mal!\n");
                }

                printf("\nMeio em que veio: \n");
                printf("\n1. Urbano\n2. Rural\n3. Tribal\n");
                scanf("%d", &niche);
                if(niche == 1) {
                    printf("\nVocê veio do meio urbano!\n");
                }else if(niche == 2) {
                    printf("\nVocê veio do meio rural!\n");
                }else if(niche == 3) {
                    printf("\nVocê veio do meio tribal!\n");
                }

                printf("\nEscolhe seu estilo de corpo: \n");
                printf("\n1. Grande\n2. Médio\n3. Pequeno\n");
                scanf("%d", &body);
                if(body == 1) {
                    printf("\nVocê é grande!\n");
                }else if(body == 2) {
                    printf("\nVocê é médio!\n");
                }else if(body == 3) {
                    printf("\nVocê é pequeno!\n");
                }
                /*AQUI VEM A HISTÓRIA PRÉVIA DO PERSONAGEM*/
                printf("VOcê descobriu suas habilidades magicas quando foi capturado por cientisas do local onde você vivia. Após anos de cobaia você conseguiu finalmente libertar seu poder mágico e assassinar aqueles que se diziam seus mestres.\n");
                game(x);

                return 0;
            }else if(prof == 3) {
                printf("\nVocê é ladino!\n");

                printf("\nEscolha seu objetivo: \n");
                printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal (você não pode destruir o mal)\n");
                scanf("%d", &goal);
                if(goal == 1) {
                    printf("\nVocê quer governar o reino!\n");
                }else if(goal == 2) {
                    printf("\nVocê quer ficar rico!\n");
                }else if(goal == 3) {
                    printf("\nVocê quer destruir o mal!\n");
                }

                printf("\nMeio em que veio: \n");
                printf("\n1. Urbano\n2. Rural\n3. Tribal (você não pode vir de meio tribal)\n");
                scanf("%d", &niche);
                if(niche == 1) {
                    printf("\nVocê veio do meio urbano!\n");
                }else if(niche == 2) {
                    printf("\nVocê veio do meio rural!\n");
                }else if(niche == 3) {
                    printf("\nVocê veio do meio tribal!\n");
                }

                printf("\nEscolhe seu estilo de corpo: \n");
                printf("\n1. Grande\n2. Médio\n3. Pequeno\n");
                scanf("%d", &body);
                if(body == 1) {
                    printf("\nVocê é grande!\n");
                }else if(body == 2) {
                    printf("\nVocê é médio!\n");
                }else if(body == 3) {
                    printf("\nVocê é pequeno!\n");
                }
                /*AQUI VEM A HISTÓRIA PRÉVIA DO PERSONAGEM*/
                printf("Você já foi um elfo bondoso mas aconteceram terríveis coisas no seu passado e agora após você ter se tornado um devoto dos deuses afogados toda noite você recebe um sinal das águas de uma pessoa para assassinar e entregar como oferenda aos deuses afogados\n");
                game(x);

                return 0;
            }
        }else if(linhamento == 2) {
            printf("\nVocê é neutro!\n");

            printf("\nEscolha sua profissão: \n");
            printf("\n1. Guerreiro\n2. Mago\n3. Ladino\n");
            /*scanf("%d", &profession);*/
            prof = profissao(linhamento);
            if(prof == 1) {
                printf("\nVocê é um guerreiro!\n");
            }else if(prof == 2) {
                printf("\nVocê é um mago!\n");
            }else if(prof == 3) {
                printf("\nVocê é ladino!\n");

                printf("\nEscolha seu objetivo: \n");
                printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal\n");
                scanf("%d", &goal);
                if(goal == 1) {
                    printf("\nVocê quer governar o reino!\n");
                }else if(goal == 2) {
                    printf("\nVocê quer ficar rico!\n");
                }else if(goal == 3) {
                    printf("\nVocê quer destruir o mal!\n");
                }

                printf("\nMeio em que veio: \n");
                printf("\n1. Urbano\n2. Rural\n3. Tribal (você não pode vir de meio tribal)\n");
                scanf("%d", &niche);
                if(niche == 1) {
                    printf("\nVocê veio do meio urbano!\n");
                }else if(niche == 2) {
                    printf("\nVocê veio do meio rural!\n");
                }else if(niche == 3) {
                    printf("\nVocê veio do meio tribal!\n");
                }

                printf("\nEscolhe seu estilo de corpo: \n");
                printf("\n1. Grande\n2. Médio\n3. Pequeno\n");
                scanf("%d", &body);
                if(body == 1) {
                    printf("\nVocê é grande!\n");
                }else if(body == 2) {
                    printf("\nVocê é médio!\n");
                }else if(body == 3) {
                    printf("\nVocê é pequeno!\n");
                }
                /*AQUI VEM A HISTÓRIA PRÉVIA DO PERSONAGEM*/
                printf("Você ascendeu como assassino por contrato. Hoje você é escolhido para matar lordes, reis e nobres por enormes quantidades de ouro.\n");
                game(x);

                return 0;
            }

            printf("\nEscolha seu objetivo: \n");
            printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal\n");
            scanf("%d", &goal);
            if(goal == 1) {
                printf("\nVocê quer governar o reino!\n");
            }else if(goal == 2) {
                printf("\nVocê quer ficar rico!\n");
            }else if(goal == 3) {
                printf("\nVocê quer destruir o mal!\n");
            }

            printf("\nMeio em que veio: \n");
            printf("\n1. Urbano\n2. Rural\n3. Tribal\n");
            scanf("%d", &niche);
            if(niche == 1) {
                printf("\nVocê veio do meio urbano!\n");
            }else if(niche == 2) {
                printf("\nVocê veio do meio rural!\n");
            }else if(niche == 3) {
                printf("\nVocê veio do meio tribal!\n");
            }

            printf("\nEscolhe seu estilo de corpo: \n");
            printf("\n1. Grande\n2. Médio\n3. Pequeno\n");
            scanf("%d", &body);
            if(body == 1) {
                printf("\nVocê é grande!\n");
            }else if(body == 2) {
                printf("\nVocê é médio!\n");
            }else if(body == 3) {
                printf("\nVocê é pequeno!\n");
            }
            /*AQUI VEM A HISTÓRIA PRÉVIA DO PERSONAGEM*/
            printf("Você é filho de sacerdote patriarca que liderava a local onde vivia. Como sucessor você tem de aprender as táticas para se tornar o próximo grande chefe de liderança\n");
            game(x);

            return 0;
        }else if(linhamento == 3) {
            printf("\nVocê é bom!\n");

            printf("\nEscolha sua profissão: \n");
            printf("\n1. Guerreiro\n2. Mago\n3. Ladino (você não pode ser um ladino)\n");
            /*scanf("%d", &profession);*/
            prof = profissao(linhamento);
            if(prof == 1) {
                printf("\nVocê é um guerreiro!\n");
            }else if(prof == 2) {
                printf("\nVocê é um mago!\n");
            }else if(prof == 3) {
                printf("\nVocê é ladino!\n");
            }

            printf("\nEscolha seu objetivo: \n");
            printf("\n1. Governar o reino\n2. Ficar rico\n3. Destruir o mal\n");
            scanf("%d", &goal);
            if(goal == 1) {
                printf("\nVocê quer governar o reino!\n");
            }else if(goal == 2) {
                printf("\nVocê quer ficar rico!\n");
            }else if(goal == 3) {
                printf("\nVocê quer destruir o mal!\n");
            }

            printf("\nMeio em que veio: \n");
            printf("\n1. Urbano\n2. Rural\n3. Tribal\n");
            scanf("%d", &niche);
            if(niche == 1) {
                printf("\nVocê veio do meio urbano!\n");
            }else if(niche == 2) {
                printf("\nVocê veio do meio rural!\n");
            }else if(niche == 3) {
                printf("\nVocê veio do meio tribal!\n");
            }

            printf("\nEscolhe seu estilo de corpo: \n");
            printf("\n1. Grande\n2. Médio\n3. Pequeno\n");
            scanf("%d", &body);
            if(body == 1) {
                printf("\nVocê é grande!\n");
            }else if(body == 2) {
                printf("\nVocê é médio!\n");
            }else if(body == 3) {
                printf("\nVocê é pequeno!\n");
            }
            /*AQUI VEM A HISTÓRIA PRÉVIA DO PERSONAGEM*/
            printf("VOcê é um elfo noturno, um grupo específico de elfos que presa com equilíbrio, combatendo qualquer anomalia, raças que querem dominar ou civilizações emperialistas, presando sempre pelas e equíbrio.\n");
            game(x);

            return 0;
        }
    }

    return 0;
}

int menu(char x) {
    char m;
    scanf("%c", &m);
    printf("\n1. Criar personagem\n2. Iniciar jogo\n3. Sair do jogo\n");

    if(m == '1') {
        creat_character(m);
    }else if(m == '2') {
        game(m);
    }else if(m == '3') {
        exit(m);
    }else if(m != '1' || m != '2' || m != '3') {
        menu(m);
    }
    return 0;
}

int main() {
    setlocale(LC_ALL,"Portuguese_Brasil");

    char x;
    printf("=== Pressione alguma tecla ===\n");
    scanf("%c", &x);
    menu(x);

    return 0;
}