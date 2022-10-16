//Queue
#include <bits/stdc++.h>
using namespace std;
#define test long long int t; cin>>t; while(t--)

// class node
// {
// public:

// 	int d;
// 	node *next;
// 	node(int data): data(d), next(NULL){}
// // };
// class node {
// public:
// 	int data;
// 	node* next;
// 	node(int d) {
// 		data = d;
// 		next = NULL;
// 	}
// };

class Queue
{
	int *a,n,cs,f,e;
public:
	Queue(int s = 5)
	{
		n=s;
		a = new int[s];
		cs = 0;
		f=0;
		e = n-1;
	}
	void push(int d)
	{
		if(cs<n)
		{
			e = (e+1)%n;
			a[e] = d;
			cs++;
		}
		else
			cout<<"\nOverflow\n";
	}
	void pop()
	{
		if(cs>0)
		{
			f =(f+1)%n;
			cs--;
		}
		else
		{
			cout<<"\nUnderflow\n";
		}
	}
	bool empty()
	{
		return cs == 0;
	}
	int front()
	{
		return a[f];
	}

	// node * head, *tail;
	// Queue():head(NULL), tail(NULL){}
	// void push(int d)
	// {
	// 	if(!head)
	// 	{
	// 		head=tail=new node(d);
	// 	}
	// 	else
	// 	{
	// 		node * n = new node(d);
	// 		tail->next= n;
	// 		tail = n;
	// 	}
	// }
	// void pop()
	// {
	// 	if(!head) return;
	// 	else if(head->next == NULL)
	// 	{
	// 		delete head;
	// 		head = tail = NULL;
	// 	}
	// 	else
	// 	{
	// 		node * n = head;
	// 		head = head->next;
	// 		delete n;
	// 	}
	// }	
	// int front()
	// {
	// 	return head->data;
	// }
	// bool empty()
	// {
	// 	return head==NULL;
	// }
};

// void queueRev(Queue &q)
// {
// 	//Base Case
// 	if(q.empty())
// 		return;

// 	//Recursive Case
// 	int d = q.front();
// 	q.pop();
// 	queueRev(q);
// 	q.push(d);
// }


class Stack()
{
	queue<int> q1;
	
	queue<int> q2;
public:
	void push(int d)
	{

	}


	void pop()
	{

	}
	int top()
	{
		if(!q1.empty() and q2.empty())
		{
			while(q1.size()>1)
			{
				int e = q1.front();
				q2.push(e);
				q1.pop();
			}
			int x = q1.front();
			q1.pop();
			q2.push(x);
			return x;
		}
	}
};


int main()
{
      #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
      #endif

       	//Push
        //Pop
        //Front
        //Empty
        
        // queue<int> q;
        // q.push(1);
        // q.push(2);
        // q.push(3);

        // while(!q.empty())
        // {
        // 	cout<<q.front()<<endl;

        // 	q.pop();
        // }

// Queue q;
// q.push(1);
// q.push(2);
// q.push(3);
// q.push(4);
// q.push(5);
// queueRev(q);
// while(!q.empty())
// {
// 	cout<<q.front()<<" ";
// 	q.pop();
// }



        return 0;
}