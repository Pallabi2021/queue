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
        rear = 0;
        front = 0;
    }
    void isFull()
	{
		if(front==0 && rear==MAX_SIZE)
		cout<<"Full"<<endl;
		else
		cout<<"Not Full"<<endl;
	}
	void isEmpty()
	{
		if(front==rear)
		cout<<"Empty"<<endl;
		else
		cout<<"Not Empty"<<endl;
	}
    void insert(int item) 
	{
        if (rear==MAX_SIZE)
            cout << "\nQueue Overflow\n";
        else 
		{
			
            arr[rear++] = item;
            
        }
    }
    void Delete() 
	{
        if (front==rear and front==0)
            cout << "\nQueue underflow!";
       else  if (front==rear-1)
          {
          	front =0;
          	rear=0;
          }
        else 
		{
            cout<<"Deleted element is:"<<arr[front++]<<endl;
            
        }
    }

    void display() 
	{   
        for (i = front; i < rear; i++)
        {
        	cout<<arr[i]<<" ";
        
		}
            
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
