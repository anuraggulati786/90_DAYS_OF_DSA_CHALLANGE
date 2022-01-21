 #include<iostream>
using namespace std;

void copy_string(char name1[],char name2[]) {
	for(int i = 0; name1[i] != '\0'; i++) {
		name2[i] = name1[i];
	}
}                                              // O(n)

int main() {
	char name1[10] = "Anurag";
	char name2[100] = "";
	
	cout<<"after copying the string 1 to string 2 our string 2 is be like :"<<endl;
	copy_string(name1 , name2);
	cout<<name2<<endl;
}


// for recursive  more optimized way yes it is so...we can do a small change it 

#include<iostream>
using namespace std;

int  copy_string(char name1[],char name2[],int i) {
	name2[i] = name1[i];
	
	if(name1[i] == '\0') {
		return;
	}
	                                               //  O(long n)
   copy_string(name1 , name2 , i++);
}

int main() {
	char name1[10] = "Anurag";
	char name2[100] = "";
	int i=0;
	cout<<"after copying the string 1 to string 2 our string 2 is be like :"<<endl;
	copy_string(name1 , name2,i);
	cout<<name2;
	
}
