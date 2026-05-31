//*********************************************************************************
// File: BinarySearchTree.h
//
// Purpose: 
//
// Written By: Piter Garcia 
//*********************************************************************************

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

class MyBinarySearchTree
{
    private:
        struct MyNode
        {
           MyNode* left;
           MyNode* right;
           int data;
        }*root;
		
    public:
		//TRANSFORMERS
		//*********************************
		MyBinarySearchTree();
		~MyBinarySearchTree();
		
		//OBESRVERS
		bool IsFull() const;
		bool IsEmpty() const;
		bool Find(int data);
		bool Find(MyNode *, int data);
		void find(MyNode *&, int data);
		void find(int data);
		
		//TRANSFORMERS
		
		
		void Clear();
		void Clear(MyNode*);

		void DELETE(int data);
		void DELETE(MyNode*, int data);

        void inorder();
        void inorder(MyNode*);

        void preorder();
        void preorder(MyNode*);
		
		//***********************************

		//TRANSFORMERS:
		//*****************************************
        void postorder();
        void postorder(MyNode*);

        void add(int data);
		void add(MyNode*&, int data);
		//******************************************
};

