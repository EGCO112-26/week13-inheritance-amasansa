#ifndef NODE_H
#define NODE_H
#include "student.h"

class NODE : public student 
{
    NODE* next;
public:
    NODE(int id,string name,float gpa); 
    void show_node();
    void insert(NODE*&);
    NODE* move_next();
    ~NODE();
};
#endif