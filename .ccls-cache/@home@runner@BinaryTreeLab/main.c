#include <stdio.h>
#include <stdlib.h>
#include "BST.h"

int main( int argc, char** argv )
{ 
   unsigned int i; // counter to loop from 1-10
   int item; // variable to hold random values
   BST b;

   
b.root= NULL;  b.size=0;// tree initially empty
for ( i = 1; i < argc; ++i ) { 
      insertNode( &b, atoi(argv[i]));
     //insertNode_R(b.root,atoi(argv[i]) );
  } // end for
    // traverse the tree preOrder
    printf("\nThe preOrder traversal is:\n");
    preOrder( b.root ); // เรียงลำดับ อัตโนมัติ
    printf("\n");

   // traverse the tree inOrder
    printf("\nThe inOrder traversal is:\n");
    inOrder( b.root ); // เรียงลำดับ อัตโนมัติ
    printf("\n");

   // traverse the tree postOrder
    printf("\nThe postOrder traversal is:\n");
    postOrder( b.root ); // เรียงลำดับ อัตโนมัติ
    printf("\n");

    printTree(b.root);
} // end main

