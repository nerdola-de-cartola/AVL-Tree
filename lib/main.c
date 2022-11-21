#include "avl.c"

int main(){
    int opcao;
    int key;
    int percurso;

    struct Node *temp = NULL;
    struct Node *root = NULL;



    do{
        printf("\n\n------------------------------------- Menu -------------------------------------\n");
        printf("01 - inserir No.\n");
        printf("02 - excluir No.\n");
        printf("03 - mostrar arvore.\n");
        printf("04 - fazer percurso.\n");

        printf("00 - para parar o programa.\n");
        printf("\nDigite uma opcao: ");

        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("digite a chave a ser inserida: ");
                scanf("%d", &key);

                temp = createNode(key);
                root = insertNode(root, temp);

                break;
            case 2:
                printf("digite a chave do no a ser excluida: ");
                scanf("%d", &key);

                //removeNode(head, key);

                break;
            case 3:
                printf("\n");
                printTree(root, 0);

                break;
            case 4:
                printf("digite a forma do percurso.\n");

                printf("1 - pre ordem.\n");
                printf("2 - in ordem.\n");
                printf("3 - pos ordem.\n");

                scanf("%d", &percurso);

                    switch(percurso){
                        case 1:
                            prefix(root);
                            break;
                        case 2:
                            infix(root);
                            break;
                        case 3:
                            postfix(root);
                            break;
                    }
                break;
        }
    }while(opcao != 0);

}
