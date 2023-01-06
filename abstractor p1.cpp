#include<iostream>

using namespace std;

class School{
	
	public:
		
		virtual void Nofees() = 0;
};

class Government : public School{
	
	public:
		
		void Nofees(){
			
			cout<<"No fees in school";
		}
};

main(){
	
	Government obj;
	
	obj.Nofees();
}
