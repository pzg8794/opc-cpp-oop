//*********************************************************************************
// File: BinarySearchTree.h
//
// Purpose: 
//
// Written By: Piter Garcia 
//*********************************************************************************
#include "BaseballPlayers.h"

class MyBinarySearchTree
{
    private:
        struct MyNode
        {
           MyNode* left;
           MyNode* right;
           BaseballPlayer data;
        }*root;
		
    public:
		//TRANSFORMERS
		//*********************************
		MyBinarySearchTree();
		~MyBinarySearchTree();
		bool IsFull() const;
		bool IsEmpty() const;
		
		void Clear();
		void Clear(MyNode*);

        void inorder();
        void inorder(MyNode*);

        void preorder();
        void preorder(MyNode*);
		
		void InorderAllData();
		void InorderAllData(MyNode*);
		//***********************************

		//OBSERVERS:
		//***********************************
        double GetAvg(string name);
		double GetAvg(MyNode *&, string name);
		//************************************

		//TRANSFORMERS:
		//*****************************************
		void InorderAllData(ostream&  o);
		void InorderAllData(MyNode*, ostream&  o);

        void postorder();
        void postorder(MyNode*);

        void insert(BaseballPlayer);
		void insert(MyNode*&, BaseballPlayer);
		//******************************************
};

