#include <iostream>
#include <string.h>
#include "Book.h"

Book(){
			this->id=1;
			this->bname="Default";
			this->price=1000;
		}
		
Book (int id,string name,double price){
			this->id=id;
			this->bname=name;
			this->price=price;
		}
	
	//getter	
		int getId (){
			return id;
		}
		
		string getName (){
			return bname;
		}
		
		double getPrice (){
			return price;
		}
	//setter
		void setId (int id){
			this->id=id;
		}
		void setName (string name){
			this->bname=name;
		}
		void setPrice (double price){
			this->price=price;
		}
		
	//function
	
		public void calculateTotal (int qty){
		
		int sum=0;
		sum= this->price*qty;
		cout<<"Total price of book for quatity "<<qyt<<" is "<<sum<<endl;
		
		}
