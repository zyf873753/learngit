#include<iostream>
#include<string>
using namespace std;

class Node
{
public:
	string value;
	Node *next;
	Node():value(""),next(NULL) {};
};

void push(Node *&first,string url)
{
	Node *oldfirst=first;
	first=new Node();
	first->value=url;
	first->next=oldfirst;
}

string pop(Node *&first)
{
	string popvalue=first->value;
	Node *oldfirst=first;
	first=first->next;
	delete oldfirst;
	return popvalue;
}

void delAll(Node *&first)
{
	while(first!=NULL)
	{
		Node *oldfirst=first;
		first=first->next;
		delete oldfirst;
	}
}

int main()
{
	Node *forward=NULL;//don't new
	Node *back=NULL;
	string currenturl="";
	string cmd;
	while(true)
	{
		cin>>cmd;
		if(cmd=="VISIT")	
		{
			cin>>cmd;
			if(currenturl!="")
				push(back,currenturl);
			currenturl=cmd;	
			delAll(forward);
			cout<<currenturl<<endl;
		}
		else if(cmd=="BACK")
		{
			if(back!=NULL) 
			{
				push(forward,currenturl);
				currenturl=pop(back);
				cout<<currenturl<<endl;
			}
			else //if back stack is empty,ignore the operation.
				cout<<"Ignored"<<endl;
		}
		else if(cmd=="FORWARD")
		{
			if(forward!=NULL)
			{
				push(back,currenturl);
				currenturl=pop(forward);
				cout<<currenturl<<endl;
			}
			else //if forward stack is empty,ignore the operation.
				cout<<"Ignored"<<endl;
		}
		else if(cmd=="QUIT")
			break;
	} 
}
