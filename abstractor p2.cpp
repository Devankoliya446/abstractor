#include<iostream>

using namespace std;

class Parent{
	
	protected:
		
		char name[100];
		int age;
		
	
	public:
		
		virtual void Childdetails(){
			
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
		}
}; 	

class Child : public Parent{
	
	public:
		
		void Childdetails(){
			
			cout<<"Enter name : ";
			cin>>name;
			
			cout<<"Enter age : ";
		 	cin>>age;
			
			cout<<"Name : "<<name<<endl;
			cout<<"Age : "<<age<<endl;
		}
};

main(){
	
	Parent *obj1;
	Child obj2;
	
	obj1  = &obj2;
	
	obj1->Childdetails();
}
