#ifndef MAXHEAP_MAXHEAP_H
#define MAXHEAP_MAXHEAP_H

#include "node.h"
#include <iostream>
#include <vector>
#include <queue>
#include<stack>
#include <algorithm>
#define NO_ITEMS 8

using namespace std;

template <typename T>
class maxheap
{
    int maxHeapSize;        //Specifies how many values the heap can hold
    T heap[];
    int capacity;
    int size;
public:
    maxheap(int);        //Constructor
    void insert(T);        //Will insert a value into the heap of type T
    T deleteMax();        //Returns the minimum value from the heap and removes it
    void printLevel();    //Prints the heap in levels
    void printArray();    //Prints the heap in array order on a single line
};

template <typename T>
maxheap<T>::maxheap(int capacity)
{
    size=1;
    capacity=10;
    heap= new int[capacity];
}

template <typename T>
void maxheap <T>::insert(T val)
{
    if (size == capacity){
        capacity++;
    }
    else {
        heap[size++]=val;

        int child =size-1;
        int parent=child/2;

        while(heap[parent]<heap[child] && parent >0){
            int t = heap[parent];
            heap[parent]=heap[child];
            heap[child]=t;

            child=parent;
            parent=child/2;
        }
    }
}

template <typename T>
T maxheap <T> :: deleteMax()
{
    T maxElem = heap[0];
    for (int i = 0; i < maxHeapSize; i++)
    {
        maxElem = max(maxElem, heap[i]);
    }
    for( auto j : heap )
    {
        if( heap[j] == maxElem )
        {
            delete heap[j];
            heap[j] == NULL;
        }
    }
    return maxElem;

}

template <typename T>
void maxheap<T>::printLevel()
{
        stack<Node<T> *> root;
  
    
     int h = height(root); 
    int i; 
    for (i=1; i<=h; i++) 
    { 
        printLevel(root, i); 
        cout << "\n";
    } 
	
}
template <typename T>
void maxheap<T>::printArray()
{
    for( int i = 0; i < maxHeapSize; i++ )
    {
        ( ( i != 0 ) && ( i % NO_ITEMS ) == 0 ) ? cout << '\n' : cout << heap[ i ] << ' ';
    }
}


#endif