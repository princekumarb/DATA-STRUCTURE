#include <iostream>  
#include <stack>  
int main()  
{  
    std::stack<int> newstack;  
    newstack.push(24);  
    newstack.push(80);  
    newstack.top () +=20;  
    std::cout <<"newstack.top() is modified to" <<newstack.top ();  
    return 0;  
}  
