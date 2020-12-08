#include <iostream>
#include <random>
#include <string>
#include <iomanip>

using namespace std;

template<typename T> class List; 

template<typename T> class Node {
    friend class List <T>;            
    public:
        Node(const T& = T(), Node<T>* = nullptr);       
              // default constructor
    private:
        T data;                 
        Node<T> *next;          
};

// default constructor
template<typename T>
Node<T>::Node(const T& x, Node<T>* n) : data(x), next(n){ }





template < typename T > class List {
    public:
        List();       // default constructor
        bool findValue(T); //finds the value 
        void insertValue(T); // inserts the value
        void printList();  // print the value
        
    private:
        Node<T> *root;          
        
        bool findValue(Node<T> *, T);  //private version of find value
        void insertValue(Node<T> *&, T);  // private version of insert value
        void printList(Node<T> *);   // private version of print list
};

// PUBLIC CALLERS
//     CONSTRUCTOR
template<typename T>
List<T>::List( )   //sets the root to null
{ 
    root = nullptr;
}
// MAIN FUNCTIONS
template<typename T> 
bool List<T>::findValue(T value)  //finds the value using private  function
{ 
    return findValue(root,value);
}

template<typename T> 
void List<T>::insertValue(T value)   //inserts the value using private function
{    
    insertValue(root,value);
}

template<typename T> 
void List<T>::printList()     //prints the value using private value
{        
    printList(root);    
}

// PRIVATE CALLERS
template<typename T> 
bool List<T>::findValue(Node<T> * root, T value)  //finds the value from data
{ 
    Node<T> *node = root;  //sets node to root
    while(node != nullptr)  //if node is not NULL
    {
        if(node->data == value) //if its eqaul to node data it will return true
    {
            return true;
        }
        node = node->next;
    }
    return false;
}

template<typename T> 
void List<T>::insertValue(Node<T> *& node, T value)   // inserts the value from data
{ 
    Node<T> *mainRoot = node;  // sets mainroot to root
    if(node == nullptr)       // if node is a nullptr
    {
        node = new Node<T>(in); 
        return;
    }

    while(node->next != nullptr)  // while node next is not a null pointer it will set node to node next data
    {
        node = node->next;
    }
    node->next = new Node<T>(value);
    //RESET POSITION OF ROOT
    node = mainRoot;
}
template<typename T> 
void List<T>::printList(Node<T> * node)  //prints the list of the data
{ 
    Node<T> *count = node;  //sets the count to node
    int length = 0;  
    while(count != nullptr) //while the count is not equal to nullptr
    {
        length++; 
        count = count->next;  
    }
    cout << "List(" << length << "): ";  //couts the length
    
    while(node != nullptr) //while node is not equal to 0
    {
        cout << node->data;  
        if(node->next != nullptr)
    {
        cout << ", ";
    }
    node = node->next;
    }

    cout << endl << endl;
     
}