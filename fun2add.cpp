#include<iostream>
using namespace std;
void print(int num){
	cout<<num<<endl;
	return;
}
int add(int n1,int n2){
	int sum=n1+n2;
	return sum;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<add(a,b);
	return 0;
}


