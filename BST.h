// An integer binary search tree
#define globalspace 5
typedef struct treeNode {                                           
   struct treeNode *leftPtr; // pointer to left subtree 
   int data; // node value                               
   struct treeNode *rightPtr; // pointer to right subtree
}TreeNode; // end structure treeNode 
        
typedef TreeNode * TreeNodePtr; // synonym for TreeNode*
                    
typedef struct {
	int size,depth;
	TreeNodePtr root;
}BST;

// prototypes
void insertNode( BST *, int );
void preOrder(TreeNodePtr );
void postOrder(TreeNodePtr );
void printTree(TreeNodePtr );
void printTreePrototype(TreeNodePtr , int );

void insertNode( BST *b, int value ){
	 TreeNodePtr t =b->root,new_node;
	 int inserted=0;
	new_node =(TreeNodePtr) malloc(sizeof( TreeNode));
	if(new_node){
		new_node->leftPtr=NULL;
		new_node->rightPtr=NULL;
		new_node->data=value;
		/*First Node*/
		if(!b->root)	b->root=new_node;
		else {
      while(!inserted){
        if(value <= t->data){
          if(t->leftPtr == NULL){
            t->leftPtr = new_node;
            inserted=1;
          }
          else t=t->leftPtr;
        }
        else{
          if(t->rightPtr){
            t = t->rightPtr;
          } 
          else{
            t->rightPtr = new_node;
            inserted=1;
          }
        } 
      }//end while		
     }//end else;
     b->size++;
    }
  
}//end function


void inOrder( TreeNodePtr treePtr )
{ 
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {        
        
      inOrder( treePtr->leftPtr ); //Recursion to the left
 
      printf("%3d", treePtr->data) ;  //print the value 
   
      inOrder( treePtr->rightPtr ); //Recursion to the right
   } // end if                          
} // end 

void printTreePrototype(TreeNodePtr treePtr, int space){
  if ( treePtr != NULL ) {  
      space += globalspace; //globalspace = 5
      printTreePrototype( treePtr->rightPtr, space); 
      printf("\n");
      for (int i = globalspace; i<space; i++){
        printf(" ");
      }
      printf("%3d\n", treePtr->data);   

      printTreePrototype( treePtr->leftPtr, space); 
   }                        
}

void printTree(TreeNodePtr treePtr){
  printTreePrototype(treePtr, 0); //use for set space value to 0 when search next data
}

void preOrder(TreeNodePtr treePtr){
  //C-L-R
  if(treePtr != NULL){
    printf("%3d", treePtr->data);
    preOrder(treePtr->leftPtr);
    preOrder(treePtr->rightPtr);
  }
}

void postOrder(TreeNodePtr treePtr){
  //L-R-C
  if(treePtr != NULL){
    postOrder(treePtr->leftPtr);
    postOrder(treePtr->rightPtr);
    printf("%3d", treePtr->data);
  }
}

void insertNode_R(TreeNodePtr * t,int value){
  if(t==NULL){
   (*t)=(TreeNodePtr) malloc(sizeof( TreeNode));
	 if(t){
		(*t)->leftPtr=NULL;
		(*t)->rightPtr=NULL;
	  (*t)->data=value;
   }
  }
  else{
     if((*t)->data>=value){ /* left*/
        /*Fill in here */
       
     }
     else {/*right*/
         /*Fill in here */
   }
  }
}