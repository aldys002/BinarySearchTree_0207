#include <iostream>
#include <string>
using namespace std;

class Node
{
public : 
    string info;
    Node* leftchild;
    Node* rightchild;

    //Constructor for the node class
    Node(string i, Node* l, Node* r)
    {
        info = i;
        leftchild = l;
        rightchild = r;
    }
};

class BinaryTree 
{
public : 
   Node* ROOT;

   BinaryTree ()
   {
    ROOT = nullptr; // Inializing ROOT to null
   }

   void insert(string element) // Insert a node in the binary search tree
   {
      Node* newNode = new Node(element, nullptr, nullptr); // allocate memory for the new node
      newNode->info = element; // Assign value to the data field of the new node
      newNode->leftchild = nullptr; // make the left child of the new node point to null
      newNode->rightchild = nullptr; // make the right child of the new node point  to null

      Node* parent = nullptr;
      Node* currentNode = nullptr;
      search(element, parent, currentNode); //locate the node which will be the parent of the node to be 

      if (parent == nullptr) // if the parent is NULL (tree is empty)
      {
        ROOT = newNode; // Mark the new node as root
        return; // Exit
      }

      if (element < parent->info) // if the value in the data field of the new node is less than of the
      {
        parent->leftchild = newNode; // Make the left child of the parent point to the new node
      }

      else if (element > parent->info) // if the value in the data field of the new nodeis greater than that
      {
        parent->rightchild = newNode; // make the right child of the parent poin to the new node
      }
   }

   void search(string element, Node*& parent, Node*& currentNode)
   {
    // this function searches the currentNode of the specified Node as well as the current Node of its parent
    currentNode = ROOT;
    parent = NULL;
    while ((currentNode != NULL) && (currentNode->info != element))
    {
      parent = currentNode;
      if (element < currentNode->info)
          currentNode = currentNode->leftchild;
      else
        currentNode = currentNode->rightchild;  
    }
   }

   void inorder(Node* ptr)
   {
     if(ROOT == NULL)
   }

};