#include <iostream>
using namespace std;
#include "NODE.h"

NODE::NODE(int x,string n,float g):student(x,g,n) 
{ 
    next=NULL;
}

NODE::~NODE() 
{
    cout <<"Node " <<id <<" is being deleted" <<endl;
}

NODE* NODE::move_next() 
{
    return next;
}

void NODE::show_node() 
{
    display(); 
}

void NODE::insert(NODE*& x) 
{
    this->next=x;
}