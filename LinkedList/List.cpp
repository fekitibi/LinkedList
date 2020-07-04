//
//  List.cpp
//  LinkedList
//
//  Created by Tibor Fekete on 04/07/2020.
//  Copyright © 2020 Tibor Fekete. All rights reserved.
//

#include "List.hpp"
#include <iostream>

template <class T>
List<T>::List()
{
    head = NULL;
    tail = NULL;
}

template <class T>
void List<T>::insertEnd(T value)
{
    node<T> *temp = new node<T>;
    temp->data = value;
    temp->next = NULL;
    if(head==NULL)
    {
       head=temp;
       tail=temp;
       temp=NULL;
    }
    else
    {
       tail->next=temp;
       tail=temp;
    }
    
}

template <class T>
void List<T>::display()
{
    node<T> *temp;
    temp=head;
    while(temp!=NULL)
    {
      std::cout<<temp->data<<"\t";
      temp=temp->next;
    }
    
    std::cout<<std::endl;
}

template <class T>
void List<T>::insertStart(T value)
{
    node<T> *temp=new node<T>;
    temp->data=value;
    if(head==NULL)
    {
       head=temp;
       tail=temp;
       temp=NULL;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}

template <class T>
void List<T>::insertPosition(int pos, T value)
{
    node<T> *pre=new node<T>;
    node<T> *cur=new node<T>;
    node<T> *temp=new node<T>;
    cur=head;
    for(int i=1;i<=pos;i++)
    {
      pre=cur;
      cur=cur->next;
    }
    temp->data=value;
    pre->next=temp;
    temp->next=cur;
}

template <class T>
void List<T>::deleteFirst()
{
    node<T> *temp=new node<T>;
    temp=head;
    head=head->next;
    delete temp;
}

template <class T>
void List<T>::deleteEnd()
{
    node<T> *current=new node<T>;
    node<T> *previous=new node<T>;
    current=head;
    while(current->next!=NULL)
    {
      previous=current;
      current=current->next;
    }
    tail=previous;
    previous->next=NULL;
    delete current;
}

template <class T>
void List<T>::deletePosition(int pos)
{
    node<T> *current=new node<T>;
    node<T> *previous=new node<T>;
    current=head;
    for(int i=1;i<=pos;i++)
    {
      previous=current;
      current=current->next;
    }
    previous->next=current->next;
    delete current;
}

// Add supported data types here or move the c++ file into the header file
template class List<int>;
template class List<double>;
template class List<bool>;
template class List<char>;
