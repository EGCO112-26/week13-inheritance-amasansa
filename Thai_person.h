class Thai_person{
	private: 
		long nat_id;
		string blood;
	public: 
		Thai_person(int=0,string = "invalid");
		void display_Thai();
};

Thai_person::Thai_person(int n,string b){
	nat_id = n;
	blood = b;
	cout<<"Thai person constructor"<<endl;
}

void Thai_person::display_Thai(){
	cout<<"Show Thai person info"<<endl;
	cout<<"National id: "<<nat_id<<endl;
	cout<<"Blood type: "<<blood<<endl;
	cout<<endl;
}