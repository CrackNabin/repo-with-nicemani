//
// LinkedListBST.cpp
// Binary Tree
#ifndef LinkedBST_h
#define LinkedBST_h


class Node{

};

class LinkedBST : public BinarySearchTree
{
private:
    Node *root;
public:
    void preorderTraversal();
    void add(int data);
    bool search(int data);
};

#endif /*LinkedBST_h*/


