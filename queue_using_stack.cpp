//this program is to implement queue using stack with
//costly deQueue()
#include<iostream>
#include<stack>
using namespace std;

//making a class with name Queue
//in Queue,element which is least recently added is removed first
class Queue{
	stack<int> s1,s2; //two stack initialized
	public:
		//this function is to add element in queue
		void enQueue(int x){
			s1.push(x); //pushing element to first stack
		}
		
		//to remove element (its works same as dequeue in queue data structure)
		int deQueue(){
			//if both stacks are empty
			if(s1.empty() && s2.empty()){
				cout<<" Queue is empty "<<endl;
				return 0;
			}
			//if s2 is empty,copy stack1 into stack2
			//doing this,we get element which was added first at topmost position
			//in stack 2 
			if(s2.empty()){
				while(!s1.empty()){
					s2.push(s1.top());
					s1.pop();
				}
			}
			
			int req=s2.top();
			s2.pop();
			return req;
		}
};

int main(){
	Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	
	cout<<q.deQueue()<<endl;
	cout<<q.deQueue()<<endl;
}
