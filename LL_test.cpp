#include <iostream>
#include <cstdlib>
using namespace std;
#include "student.h"
#include "NODE.h"
#include "LL.h"

int main(int argc, char *argv[]) 
{
    LL A;
    int i;
    NODE *t;

    for(i=1;i<argc;i+=3) 
    {
        string n=argv[i+2];
        cout <<"adding " <<atoi(argv[i]) <<endl;
        t=new NODE(atoi(argv[i]),n,atof(argv[i+1])); 
        
        A.add_node(t); 
    }

    // cout << endl;
    A.show_all();

    return 0;
}