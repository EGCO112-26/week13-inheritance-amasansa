#include <iostream>
using namespace std;
#include "student.h"

int main(){
    MU_person m;
    m.display_person(); //call constructor
 
	// student m1(6613121,2,"Vivi");//,m2(112),m3;//student will have gpa info add.
    // m1.display_person(); //id
    // m1.display(); // id gpa name

    // student m1(6613118,3.9,"Atom");
    // student m2(6613112),m3,*p;
  
    // cout<<endl<<"======="<<endl;
  

    // p=new student(6613265,1.7,"Hok");
    // delete p;
  
    return 0;//destructor
}