//
//  List.hpp
//  LinkedList
//
//  Created by Tibor Fekete on 04/07/2020.
//  Copyright © 2020 Tibor Fekete. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>

template <typename T>
struct node
{
  T data;
  node *next;
};

template <class T>
class List
{
private:
    node<T> *head, *tail;
    
public:
    List();
    void display();
    void insertStart(T value);
    void insertPosition(int pos, T value);
    void insertEnd(T value);
    void deleteFirst();
    void deletePosition(int pos);
    void deleteEnd();
};

#endif /* List_hpp */



