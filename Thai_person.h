#ifndef THAI_PERSON_H
#define THAI_PERSON_H
#include <iostream>
using namespace std;
class Thai_person
{
	private: 
	// protected:
		long nat_id;
	public: 
		Thai_person(long=0);
		~Thai_person() {}
    	void display_thai() 
		{
        	cout <<"National ID: " <<nat_id <<endl;
    	}
    	long get_nat_id(){ return nat_id; }
};

inline Thai_person::Thai_person(long a)
{
	nat_id=a;
}

#endif