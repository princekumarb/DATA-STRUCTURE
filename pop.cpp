#include <iostream>  
#include <stack>  
int main()  
{  
    std::stack<int> newstack;   
    newstack.push(11);  
    newstack.push(22);  
    newstack.push(33);  
    newstack.push(44);  
    std::cout << "Popping out elements?";  
    newstack.pop();  
    newstack.pop();  
    while (!newstack.empty () )  
    {  
        std::cout << " "<< newstack.top();  
        newstack.pop();  
    }  
    std::cout<<"\n";  
    return 0;  
}  
