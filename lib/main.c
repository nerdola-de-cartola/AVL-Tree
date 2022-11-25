#include "avl.h"

int main(){
    int opcao;
    int key;
    int percurso;
    int size_new_tree;
    int i;

    struct Node *root = createTree();
    struct Node *new_tree = createTree();

    do{
        printf("\n\n------------------------------------- Menu -------------------------------------\n");
        printf("01 - inserir No.\n");
        printf("02 - excluir No.\n");
        printf("03 - mostrar arvore.\n");
        printf("04 - fazer percurso.\n");
        printf("05 - tamanho da arvore.\n");
        printf("06 - proucurar No especifico.\n");
        printf("07 - destruir arvore.\n");
        printf("08 - altura maxima da arvore.\n");
        printf("09 - mesclar (merge), duas arvores.\n");

        printf("00 - para parar o programa.\n");
        printf("\nDigite uma opcao: ");

        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("digite a chave a ser inserida: ");
                scanf("%d", &key);

                insert(&root, key);

                break;
            case 2:
                printf("digite a chave do no a ser excluida: ");
                scanf("%d", &key);

                delete(&root, key);

                break;
            case 3:
                printf("\n");
                printTree(root, 0);

                break;
            case 4:
                printf("\ndigite a forma do percurso.\n");

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
            case 5:
                printf("\nTamanho: %d", sizeTree(root));

                break;
            case 6:
                printf("\ndigite a chave: \n");
                scanf("%d", &key);

                if(searchTree(root, key) != NULL)
                    printf("Chave %d presente na arvore", key);
                else 
                    printf("Chave %d nao esta na arvore", key);

                break;
            case 7:
                destroy(&root);

                break;
            case 8:
                printf("\nAltura maxima da arvore e: %d.\n", absoluteHeight(root));

                break;
            case 9:
                printf("\nDigite a quantidade de elementos da árvore que será mesclada: ");
                scanf("%d", &size_new_tree);

                printf("\nDigite os elementos da árvore que será mesclada: ");
                for(i = 0; i < size_new_tree; i++) {
                    insert(&new_tree, key);
                    scanf("%d", &key);
                }

                printf("\nArvore original.\n");
                printTree(root, 0);

                printf("\nArvore que sera mesclada.\n");
                printTree(new_tree, 0);

                if(new_tree != NULL)
                    new_tree = merge(root, new_tree);

                printf("\nArvore ja mesclada.\n");
                printTree(new_tree, 0);

                destroy(&new_tree);

                break;
        }
    }while(opcao != 0);

}
