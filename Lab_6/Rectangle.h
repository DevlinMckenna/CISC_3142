#include<iostream>

using namespace std;




struct  Rectangle { 

       	double width;
      	double length;

	   void setLength(float x){length = x;}
		  void setWidth(float x){width = x;}
	

	          float perimeter(){
	         	 float p;
                 	 p = 2*width + 2*length;	      
	    	 	 return p;
      		  }

  		  float area(){
	        	  float a;
  			  a = width*length;	
      	        	  return a;
      		  }

      		  void show(){
		      cout<<"width is "<< width<<endl; 
      		      cout<<"length is "<< length<<endl;
		      cout<<"area is "<< area() << endl;
		      cout<<"perimeter is "<<perimeter()<<endl<<endl;
      
      		  }

		  int sameRectangle(Rectangle x){
		  	if (width==x.width && length==x.length){return 1;}
				else {return 0;}
		  }


};

