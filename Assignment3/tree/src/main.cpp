//==============================================================
// Filename    : 
// Authors     : 
// Group       :
// License     :  N.A. or opensource license like LGPL
// Description : 
//==============================================================
#include <iostream>
#include "../include/Tree.h"
#include "../include/TreeNode.h"

int main() {

    std::cout << "Creating tree";
    Tree<int> IntTree;

    IntTree.insertNode(9);
    IntTree.insertNode(8);
    IntTree.insertNode(7);
    IntTree.insertNode(11);
    IntTree.insertNode(5);
    IntTree.insertNode(4);
    IntTree.insertNode(10);

    std::cout << "\n PreOrderTraversal: ";
    IntTree.preOrderTraversal();
    std::cout << "\n inOrderTraversal: ";
    IntTree.inOrderTraversal();
    std::cout << "\n postOrderTraversal: ";
    IntTree.postOrderTraversal();

    return 0;
}
