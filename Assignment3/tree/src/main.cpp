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


    IntTree.insertNode(4);
    IntTree.insertNode(2);
    IntTree.insertNode(6);
    IntTree.insertNode(1);
    IntTree.insertNode(3);
    IntTree.insertNode(5);
    IntTree.insertNode(7);
    /*
    IntTree.insertNode(700017);
    IntTree.insertNode(601700);
    IntTree.insertNode(500107);
    IntTree.insertNode(417000);
    IntTree.insertNode(301007);
    IntTree.insertNode(110007);
    IntTree.insertNode(210700);
    */

    std::cout << "\n PreOrderTraversal: ";
    IntTree.preOrderTraversal();
    std::cout << "\n inOrderTraversal: ";
    IntTree.inOrderTraversal();
    std::cout << "\n postOrderTraversal: ";
    IntTree.postOrderTraversal();
    std::cout << "\n outputTree: \n";
    IntTree.outputTree();

    return 0;
}


