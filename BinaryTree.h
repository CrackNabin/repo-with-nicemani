//
//BinaryTree.h
#ifndef BinaryTree_h
#define BinaryTree_h

class BinarySearchTree{
public:
    virtual void preorderTraversal()=0;
    virtual void add(int data)=0;
    virtual bool search(int data)=0;
};

#endif
