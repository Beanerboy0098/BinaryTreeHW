class BinaryTree
{
    private:
        int payload;
        BinaryTree* leftChild;
        BinaryTree* rightChild;
    
    public:
        BinaryTree(int payload);
        int countNodes();
        void add(int payload);
        void displayInOrder();
        void displayPreOrder();
        void displayPostOrder();
};