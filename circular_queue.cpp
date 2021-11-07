#include <iostream>
#include<conio.h>
#include<stdlib.h>
#define MAX_SIZE 5
using namespace std;
class queue 
{
    int i;
    int arr[MAX_SIZE];
    int rear;
    int front;
    public:
    queue() 
	{
        rear = -1;
        front = -1;
    }
    void isFull()
	{
		if(front==rear and rear!=-1)
			cout<<"Full"<<endl;
		else
			cout<<"Not Full"<<endl;
	}
	void isEmpty()
	{
		if(front==-1)
		cout<<"Empty"<<endl;
		else
		cout<<"Not empty"<<endl;
	}
	void insert(int item) 
	{
		
        if ((front==rear+1) || (front==-1 && rear==MAX_SIZE-1))
            cout << "\nQueue overflow\n";
        else 
		{
			if(front==rear && front==-1)
			{
				front++;
			    rear++;
			}
		    arr[rear]=item;
            rear=(rear+1)%MAX_SIZE;			           
        } 
		       
    }
    void Delete() 
	{
        if (front==-1 && rear==-1)
            cout << "\nQueue underflow!";
        else 
		{
			if((front+1)%MAX_SIZE ==rear%MAX_SIZE)
			{
				front=-1;
			    rear=-1;
			    return;
			}
		    front=(front+1)%MAX_SIZE;		           
        }   
        
    }
    void display()
    {
        if (front==-1 && rear==-1){
        	cout << "\nQueue underflow!";
        	return;
		}
            
    	i=front;
    	do{
    		cout<<arr[i]<<" ";
    		i=(i+1)%MAX_SIZE;
		}while(i!=rear);
	}
};
int main() 
{
    queue obj=queue();
	int m=1,item;
	while(m)
	{
	    cout<<"\n1 to check full"<<endl;
		cout<<"2 to check empty"<<endl;	
		cout<<"3 to insert"<<endl;
		cout<<"4 to delete"<<endl;
		cout<<"5 to display"<<endl;
		cout<<"0 to close"<<endl;
		cin>>m;
		system("CLS");
		switch(m)
        {
        	case 1:
				obj.isFull();
				break;
			case 2:
				obj.isEmpty();
				break;
            case 3:
            	cout<<"Enter item:";
				cin>>item;
                obj.insert(item);
                obj.display();
                break;
            case 4:
                obj.Delete();
                obj.display();
                break;
            case 5:
                obj.display();
                break;
            case 0:
				cout<<"Closing"<<endl;
				break;
			default:
				cout<<"Choice is wrong"<<endl;
            
        }
    } 
    return 0;
}
