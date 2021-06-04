#include "header.h"

struct node* create_root( )
{
    struct node *nov;
    nov = (struct node*)malloc(sizeof(struct node));
    nov->left = nov->right = NULL;
    printf("\n root data  = ");
    scanf("%d",&nov->data);
    
    //nov->data = data ; 

    return nov;
}

struct node* insert (struct node* root , int data )
{
    if ( root == NULL )
        return create_root();
        else 
        {
            if (data > root->data)
                root->right = insert(root->right , data );
                else 
                root->left = insert(root->left , data);

                return root;
        }
}

void prefixe(struct node *root)
{
    if ( root != NULL )
     {
            printf("\n->%d",root->data);
            prefixe(root->left);
            prefixe(root->right);
    }
}

void infixe(struct node *root)
{
    if ( root != NULL )
     {
            prefixe(root->left);
            printf("\n->%d",root->data);
            prefixe(root->right);
    }
}

void posfixe(struct node *root)
{
    if ( root != NULL )
     {
            prefixe(root->left);
            prefixe(root->right);
            printf("\n->%d",root->data);
    }
}

int calculsomme(struct node *root )
{
    if ( root != NULL )
    {
        return root->data + calculsomme(root->left) + calculsomme(root->right);
    }
    else
    return 0 ;
}

int recherche (struct node *root , int x)
{
    if ( root != NULL)
    {        
        if ( root->data < x )
            {
                return recherche(root->right , x);
            }
            else if ( root->data > x )
                return recherche (root->left , x);
                else
                    return 1;
    }
    else return 0 ;
}

int compare ( struct node * root , struct node * root2)
{
    if ( root == NULL )
    {
        if ( root2 == NULL )
        return 0 ;
        else 
        return 1 ;
    }
    else 
    {
        if ( root2 == NULL ) 
        return 1 ;
        else 
        {
            if ( root->data != root2->data )
            return 1 ;
            else 
            return (compare(root->left , root2->left)||compare(root->right , root2->right));
        }
    }
}