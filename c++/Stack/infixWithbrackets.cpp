#include<iostream>
#include<stack>
using namespace std;

// Function to determine the priority of operators
int proi(char ch)
{
    if (ch == '+' || ch == '-') return 1; // '+' and '-' have priority 1
    if (ch == '*' || ch == '/') return 2; // '*' and '/' have priority 2
    return 0; // '(' has priority 0 for precedence comparison
}

// Function to perform arithmetic operations
int solve(int v1, int v2, char op)
{
    if(op == '+') return v1 + v2;
    if(op == '-') return v1 - v2;
    if(op == '*') return v1 * v2;
    return v1 / v2; // Division
}

int main()
{
    string str = "3+5+(2*3)/2-4";
    stack<int> val; // Stack to store values
    stack<char> op; // Stack to store operators

    for(int i = 0; i < str.length(); i++)
    {
        // If current character is a digit
        if (str[i] >= '0' && str[i] <= '9')
        {
            int digit = str[i] - '0'; // Convert character to integer
            val.push(digit);
        }
        // If current character is an opening parenthesis
        else if (str[i] == '(')
        {
            op.push(str[i]);
        }
        // If current character is a closing parenthesis
        else if (str[i] == ')')
        {
            // Solve the expression within the parentheses
            while (op.top() != '(')
            {
                char ch = op.top();
                op.pop();
                int val2 = val.top(); val.pop();
                int val1 = val.top(); val.pop();
                int ans = solve(val1, val2, ch);
                val.push(ans);
            }
            op.pop(); // Pop the '(' from the stack
        }
        // Current character is an operator
        else
        {
            // Process all operators in `op` stack with higher or equal precedence
            while (!op.empty() && op.top() != '(' && proi(op.top()) >= proi(str[i]))
            {
                char ch = op.top();
                op.pop();
                int val2 = val.top(); val.pop();
                int val1 = val.top(); val.pop();
                int ans = solve(val1, val2, ch);
                val.push(ans);
            }
            op.push(str[i]); // Push current operator to stack
        }
    }

    // Perform remaining operations in `op` stack
    while (!op.empty())
    {
        char ch = op.top();
        op.pop();
        int val2 = val.top(); val.pop();
        int val1 = val.top(); val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }

    cout << "Calculated Result: " << val.top() << endl;
    cout << "Expected Result: " << (3 + 5 + (2 * 3) / 2 - 4) << endl;
}
