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

void push(Node *first,string url)
{
	Node *oldfirst=first;
	first=new Node();
	first->value=url;
	first->next=oldfirst;
}

string pop(Node *first)
{
	string popvalue=first->value;
	Node *oldfirst=first;
	first=first->next;
	delete oldfirst;
	return popvalue;
}

void delAll(Node *first)
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
	Node *forward=new Node();
	Node *back=new Node();
	string currenturl="";
	string cmd;
	while(cin>>cmd)
	{
		if(cmd=="VISIT")	
		{
			cin>>cmd;
			if(currenturl!="")
				push(back,currenturl);
			currenturl=cmd;	
			delAll(forward);
		}
		else if(cmd=="BACK")
		{
			push(forward,currenturl);
			currenturl=pop(back);
		}
		else if(cmd=="FORWARD")
		{
			push(back,currenturl);
			currenturl=pop(forward);
		}
		cout<<currenturl<<endl;
	} 
}
