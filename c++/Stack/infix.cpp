#include<iostream>
#include<stack>
using namespace std;

// Function to determine the priority of operators
int proi(char ch)
{
    // '+' and '-' have priority 1
    if(ch == '+' || ch == '-') return 1;
    // '*' and '/' have priority 2
    else return 2;
}

// Function to perform arithmetic operations
int solve(int v1, int v2, char op)
{
    if(op == '+') return v1 + v2; // addition
    else if(op == '-') return v1 - v2; // subtraction
    else if(op == '*') return v1 * v2; // multiplication
    else return v1 / v2; // division
}

int main()
{
    string str = "2+9*4/8-3"; // input expression
    stack<int> val; // stack to store values
    stack<char> op; // stack to store operators

    // Loop through each character in the expression
    for(int i = 0; i < str.length(); i++)
    { 
        // Check if current character is a digit
        if(str[i] >= 48 && str[i] <= 57) 
        {
            int digit = str[i] - 48; // Convert character to integer
            val.push(digit); // Push digit to the value stack
        }
        else 
        {  
            // Check if the operator stack is empty or has lower priority
            if(op.size() == 0 || proi(op.top()) < proi(str[i]))
            {
                op.push(str[i]); // Push the operator onto the stack
            }
            else
            { 
                // While operator stack has operators of higher or equal priority
                while(op.size() > 0 && proi(op.top()) >= proi(str[i]))
                {
                    // Pop operator and two values from stack to perform calculation
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    
                    // Perform the operation and push result back onto the value stack
                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                op.push(str[i]); // Push current operator onto the stack
            }
        }
    } 

    // Perform remaining operations in the stack
    while(op.size() > 0)
    {
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        
        // Perform the operation and push result back onto the value stack
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }

    // Print the final result
    cout << val.top() << endl;
    cout << 2 + 9 * 4 / 8 - 3; // Expected output for verification
}
