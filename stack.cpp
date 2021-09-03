#include<iostream>
#include<stack>//here we have included stack library

using namespace std;

int main(){
	stack<int> s;//this statement will create a stack named s of type int
	//and push is used to insert elements at the top of stack,
	s.push(1);//so the stack will be 1
	s.push(2);//stack will be 2 1
	s.push(3);//3 2 1 =final stack
	s.pop();//pop is used to delete the topmost element.This always reduces size of stack by 1
	//below statements is used to print the stack 
	//empty() returns whether stack is empty or not
	//top() returns reference to the topmost element
	cout<<"the stack is :";
	while(!s.empty()){
		cout<<" "<<s.top();
		s.pop();
	}
	
}
