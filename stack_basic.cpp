#include<iostream>
#include<stack>
using namespace std;

int main()
{

stack<int> s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);

cout<<s.top()<<" "<<s.size();
//cout<<s.pop();


    return 0;
}