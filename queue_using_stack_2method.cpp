//to implement queue using stack with costly enQueue()
#include<iostream>
#include<stack>
using namespace std;

//making a class with name Queue
//in Queue,element which is least recently added is removed first
class Queue{
	stack<int> s1,s2;//two stack initialized
	public:
		
		void enQueue(int x){
			//copying every element of s1 into s2
			while(!s1.empty()){
				s2.push(s1.top());
				s1.pop();
			}
			
			//inserting element
			s1.push(x);
			
			//after inserting, copying every element of s2 into s1
			while(!s2.empty()){
				s1.push(s2.top());
				s2.pop();
			}
		}
		int deQueue(){
			if(s1.empty() && s2.empty()){
				cout<<"Queue is empty"<<endl;
				return 0;
			}
			int req=s1.top();
			s1.pop();
			return req;
		}
};
int main(){
	Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);
	q.enQueue(4);
	
	cout<<q.deQueue()<<endl;
}
