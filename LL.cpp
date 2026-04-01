#include <iostream>
#include"NODE.h"
#include"LL.h"
using namespace std;
LL::LL()
{ //constructors
     hol=NULL;
     size=0;
}

LL::~LL()
{ //destructors
     NODE* t;
     while(hol!=NULL)
     {
          t=hol;
          hol=hol->move_next();
          delete t;   
     }
}

void LL::show_all() 
{
     NODE* t=hol;
     while(t!=NULL) 
     {
          cout <<"Node data:" <<t->get_id() <<endl; 
          t=t->move_next();
     }
     cout <<endl;
}

void LL::add_node(NODE *&A)
{
     A->insert(hol);
     hol=A;
     size++;
}