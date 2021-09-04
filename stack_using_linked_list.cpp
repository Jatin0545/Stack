#include<iostream>
using namespace std;

//making a class Node which has data and a pointer
class Node{
	public:
	int data;
	Node* next;
};
//to check if the stack is empty or not;
//if it is empty then return 1,otherwise return 0
int isEmpty(Node* top){
	if(top==NULL){
		cout<<"stack is empty"<<endl;
		return 1;
	}
	else{
		return 0;
	}
}
//to check if stack is full. Generally stack if full in severe cases
//for us writing these simple codes,stack is never full
//if it gets full,then return 1
//otherwise 0
int isFull(Node* top){
	Node* temp=new Node();
	if(temp==NULL){
		cout<<"stack is full"<<endl;
		return 1;
	}
	else{
		return 0;
	}
	
}
//to add elements at the front
//the time complexity is also O(1) beacuse there is no traversal
int push(Node** top,int value){
	if(isFull(*top)){
		cout<<"stack overflow"<<endl;
	}
	else{
		Node* newnode=new Node();
		newnode->data=value;
		newnode->next=*top;
		*top=newnode;
	}
	
}
//to pop the elements at front
//so that most recently added gets out first when
//pop function is called,this is what is stack.
//the time complexity is also O(1) beacuse there is no traversal
int pop(Node** top){
	if(isEmpty(*top)){
		cout<<"stack underflow"<<endl;
		
	}
	else{
		Node* temp=*top;
		*top=(*top)->next;
		int x=temp->data;
		delete temp;
		return x;
	}
}
//to print the elements of stack
int print(Node* n){
	Node* temp=n;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	Node* top=NULL;
	push(&top,1);
	push(&top,2);
	push(&top,3);
	push(&top,4);
    cout<<"Stack is : ";
    print(top);
    
    int node=pop(&top);
    cout<<"after popping : "<<node<<endl;
    cout<<"now updated stack : ";
    print(top);
    int node1=pop(&top);
    cout<<"after popping : "<<node1<<endl;
}

