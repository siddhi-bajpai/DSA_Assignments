#include<iostream>
#include<string.h>
using namespace std;
struct emp
	{
	long long int empid;
	string name;
	int key;
	};
class employee
{
	struct emp table[10];
public : 

employee() //constructor
{int i;
    for(i=0;i<10;i++)
    {
        int i;
        table[i].key=-1;
        table[i].empid=-1;
        table[i].name="";
    }
}


	void read_func() //read function
	{
	    int i;
		for(i=0;i<10;i++){
		cout<<"Enter name:";
		cin>>table[i].name;
		cout<<"Enter employee id:";
		cin>>table[i].empid;
		}
	}
	void search_id() //search function
	{
		int search_id;
		cout<<"Enter id:";
		cin>>search_id;
		
	}
	void key_func() //creating key
	{
	    int i;
	    for(i=0;i<10;i++)
	    {
	        table[i].key=table[i].empid%10;
	}
	}
};

int main()
{
	employee o;
	int size, i;
	cout<<"\nEnter size:";
	cin>>size;
	for(i=0;i<size;i++)
	{
		o.read_func();
	}


}
