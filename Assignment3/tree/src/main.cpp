//==============================================================
// Filename    : main.cpp
// Authors     : Lucas & Jasper
// Group       : 8
// License     :  N.A. or opensource license like LGPL
// Description : Main file for 3.2
//==============================================================
#include <iostream>
#include "../include/Tree.h"
#include "../include/TreeNode.h"

int main() {

    std::cout << "Creating tree";
    Tree<int> IntTree;


    IntTree.insertNode(41);
    IntTree.insertNode(22);
    IntTree.insertNode(63);
    IntTree.insertNode(14);
    IntTree.insertNode(35);
    IntTree.insertNode(56);
    IntTree.insertNode(77);
    IntTree.insertNode(88);
    IntTree.insertNode(39);

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


