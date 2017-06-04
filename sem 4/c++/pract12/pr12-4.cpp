#include<iostream>

using namespace std;

class bird

{

protected:
    
	char name[20],color[20];

public:
    
	virtual void get_speed()=0;
    
	virtual void display()=0;

};

class flying:public bird

{
    
	float speed_to_walk;
    
public:
 
       void get_speed()
        
	{
            
		cout<<"flying bird class"<<endl;

                cout<<"enter the name of bird"<<endl;

                cin>>name;

            	cout<<"enter the color of bird"<<endl;
   
            cin>>color;

              cout<<"enter the speed of bird"<<endl;

              cin>>speed_to_walk;
        
        }
        
        void display()
        
  	{
            
		cout<<"flying bird class\n";
            
		cout<<"name of bird\t"<<name<<endl;
            
		cout<<"name of color\t"<<color<<endl;
            
		cout<<"speed of bird\t"<<speed_to_walk<<endl;

        }

};

class non_flying:public bird

{
    
	float speed_to_walk;
    
public:
        
	void get_speed()
        
	{
            
		cout<<"non flying bird class"<<endl;
            
		cout<<"enter the name of bird"<<endl;
            
		cin>>name;
            
		cout<<"enter the color of bird"<<endl;
            
		cin>>color;
            
		cout<<"enter the speed of bird"<<endl;
            
		cin>>speed_to_walk;
        
	}
        
	void display()
        
	{
            
		cout<<"non flying bird class\n";
            
		cout<<"name of bird\t"<<name<<endl;
            
		cout<<"name of color\t"<<color<<endl;
            
		cout<<"speed of bird\t"<<speed_to_walk<<endl;
        
	}

};

int main()

{
    
	flying x;
    
	cout<<"obj x"<<endl<<endl;
    
	x.get_speed();
    
	x.display();
    
	non_flying y;
    
	y.get_speed();
    
	y.display();


        return 0;

}
