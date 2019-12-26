

#define MAX_SIZE 100
class ArrayBST : public BinarySearchTree
{
	private:
		int element[MAX_SIZE];
	public:
		ArrayBST();
		~ArrayBST();
		
		void preorderTraversal();
		void add(int data);
		bool search (int data);
};


