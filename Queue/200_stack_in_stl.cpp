#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;




int main() { 
  
	queue <int> que;
	que.push(5);
	que.push(10);
	que.push(15);

	cout<<" size of queue is = " << que.size() << endl;

	que.pop();

	cout<<" front of the queue is = " << que.front() << endl;
	
	cout << "empty or not !" << endl;
	
	if( que.empty()) {
		cout << "que is empty " << endl;
	}
	else {
		cout << "queue is not empty " << endl;
	}
	
	
	que.pop();
	que.pop();

	cout << "empty or not !" << endl;
	
	if(que.empty()) {
		cout << "que is empty " << endl;
	}
	else {
		cout << "queue is not empty " << endl;
	}



}

