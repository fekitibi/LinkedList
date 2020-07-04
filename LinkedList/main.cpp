//
//  main.cpp
//  LinkedList
//
//  Created by Tibor Fekete on 04/07/2020.
//  Copyright © 2020 Tibor Fekete. All rights reserved.
//

#include <iostream>
#include "List.hpp"

int main(int argc, const char * argv[]) {
    
    List<int> *list = new List<int>();
    
    list->insertStart(333);
    
    list->insertEnd(54);
    list->insertEnd(62);
    list->insertEnd(75);
    list->insertEnd(89);
    
    list->display();
    
    list->deleteFirst();
    
    list->display();
    
    list->deleteEnd();
    
    list->display();
    
    list->insertStart(77);
    
    list->display();
    
    list->insertPosition(2, 89);
    
    list->display();
    
    list->deletePosition(2);
    
    list->display();
    
    delete list;
    
    return 0;
}
