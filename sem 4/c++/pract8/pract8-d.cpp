#include<iostream>

using namespace std;

class dist

{
   
 float inches;
   
 int feet;

public:
    
dist(float f=0)
 
   {
        float x;
 
       x=f*3.280833;
     
   feet=x;
        
inches=(x-feet)*12.00;
   
 }
 
   void display()
  
  {
        cout<<"feet : "<<feet<<endl<<"inches : "<<inches<<endl;
  
  }

};

int main()

{
    dist dist1=2.35;
 
   dist1.display();
  
  return 0;

}

//1 feet= 12 inches
//1 meter=3.280833 feet
//1 meter=3.280833*12 inches
