#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED


//Include
#include <stdio.h>
#include <stdlib.h>


//sturctures
struct node
{
    int data ; 
    struct node *left , *right;
};

//functions 
void prefixe(struct node *root);
void infixe(struct node *root);
void posfixe(struct node *root);
struct node* insert (struct node* root , int data );
struct node* create_root( );
int calculsomme(struct node *root );
int recherche (struct node *root , int x);



#endif