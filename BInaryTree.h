#ifdef BINARYTREE_h
#define BINARYTREE_h
class BinarySearchTree{
private:
public:
	virtual void preorderTransversal()=0;
	virtual void add(int data)=0;
	virtual bool search(int data)=0;
	

};

