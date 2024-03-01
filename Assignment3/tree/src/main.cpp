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

    int SearchValue;
    std::cout << "Enter SearchValue: ";
    std::cin >> SearchValue;

    IntTree.SearchTree(SearchValue);

    //std::cout << "\n Search pointer: " << Search;
    

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


