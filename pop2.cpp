#include <iostream>  
#include <stack>  
int main()  
{  
                      std::stack<int> newstack;  
        newstack.push(69);  
        newstack.push(79);  
        newstack.push(80);  
        newstack.push(85);  
        newstack.push(90);  
        while (!newstack.empty () )  
        {  
            std::cout<< " " << newstack.top ();  
            newstack.pop();  
        }  
        return 0;  
}  
