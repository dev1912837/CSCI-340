#ifndef MINHEAP_MINHEAP_H
#define MINHEAP_MINHEAP_H

#include "node.h"
#include <iostream>
#include <vector>
#include <queue>
#include<stack>
#include <algorithm>
#define NO_ITEMS 8

using namespace std;

template <typename T>
class minheap
{
    int minHeapSize;        //Specifies how many values the heap can hold
    T heap[];
    int capacity;
    int size;
public:
    minheap(int);        //Constructor
    void insert(T);        //Will insert a value into the heap of type T
    T deleteMin();        //Returns the minimum value from the heap and removes it
    void printLevel();    //Prints the heap in levels
    void printArray();    //Prints the heap in array order on a single line
};

template <typename T>
minheap<T>::minheap(int capacity)   //call tbe constructor can gets the size
{
    size =0;
    this->capacity = capacity;
    heap.resize(capacity);
}
template <typename T>
void minheap <T>::insert(T val) // inserts the value and push backs the heap 
{
    heap.push_back(val);
}



template <typename T>
T minheap <T> :: deleteMin() // delets the min
{
    T minElem = heap[0];
    for (int i = 0; i < minHeapSize; i++) // if i is greater than minheap size
    {
        minElem = min(minElem, heap[i]);  // sets to minElem
    }
    for( auto j : heap )
    {
        if( heap[j] == minElem )
        {
            delete heap[j];
            heap[j] == NULL;
        }
    }
    return minElem;
}
template <typename T>
void minheap<T>::printLevel() // prints the data by level
{
        stack<Node<T> *> root;
  
    
     int h = height(root); 
    int i; 
    for (i=1; i<=h; i++)  // if it grater than height root
    { 
        printLevel(root, i); 
        cout << "\n";
    } 
	
}
template <typename T>
void minheap<T>::printArray() // prints the array
{
    for( int i = 0; i < minHeapSize; i++ ) 
    {
        ( ( i != 0 ) && ( i % NO_ITEMS ) == 0 ) ? cout << '\n' : cout << heap[ i ] << ' ';
    }
}


#endif