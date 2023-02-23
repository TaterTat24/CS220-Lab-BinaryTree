/** 
* ================================================================
 * Name: Benjamin Tat
 * Section: T6
* Project: Test Program for BST library
* =================================================================
*/
#include "binaryTree.h"

#include <stdio.h>
int main() {
    // Creates an Empty Tree
    BSTnode* root = NULL;

    // Testing Insert
    root = insertBST(root,5);
    //root = insertBST(root,10);
    //root = insertBST(root,1);
    //root = insertBST(root,7);
    //root = insertBST(root,3);
    //root = insertBST(root,6);

    // Testing Traversals
    //printPreorderBST(root);printf("\n");
    //printPostorderBST(root);printf("\n");
    //printInorderBST(root);printf("\n");

    // Testing Binary Search
    //BSTnode* curNode = searchBST(root,10);
    //if (curNode == NULL) {
    //   printf("Error - Not found.\n");
    //} else {
    //   printf("found -> %d\n", curNode->data);
    //}

    // Testing Contains
    //printf("contains? -> %d\n", containsBST(root,3));

    // Testing Size
    //printf("size -> %d\n",sizeBST(root));

    // Testing Height
    //printf("height -> %d\n",heightBST(root));

    // Testing Delete
    //root = deleteNodeBST(root,6);
    //root = deleteNodeBST(root,3);
    //root = deleteNodeBST(root,5);
    //displayBST(root);

    // Testing Destroy
    //destroyBST(root);
    //displayBST(root);
}

