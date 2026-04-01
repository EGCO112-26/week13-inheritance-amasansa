class Thai_person{
	private: 
	// protected:
		long nat_id;
	public: 
		Thai_person(long=0);

		~Thai_person() {
        cout << "Thai_person destructor nat_id=" << nat_id << endl;
    	}

    	void display_thai() {
        	cout << "National ID: " << nat_id << endl;
    	}

    	long get_nat_id() { 
        return nat_id; 
    }
};

Thai_person::Thai_person(long a)
{
	nat_id=a;
}