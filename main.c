#include "header.h"

int main()
{
    struct node *root =NULL , *root2 = NULL ;
    root = insert(root , 5);
    insert(root , 15);
    insert(root , 12);
    insert(root , 2);
    insert(root , -1);
    insert(root , 3);

    root2 = insert(root2 , 5);
    insert(root2 , 15);
    insert(root2 , 12);
    insert(root2 , 2);
    insert(root2 , -1);
    insert(root2 , 3);
    prefixe(root2);
    printf("\nsomme = %d ",calculsomme(root2));
    printf("\nsearch = %d ",recherche(root2 , 3));

    return 0 ;
}