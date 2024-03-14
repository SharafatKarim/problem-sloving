// Practice problem - Transform the Expression

// Reverse Polish Notation (RPN) is a mathematical notation where every operator follows all of its operands. For instance, to add three and four, one would write "3 4 +" rather than "3 + 4". If there are multiple operations, the operator is given immediately after its second operand; so the expression written "3 − 4 + 5" would be written "3 4 − 5 +" first subtract 4 from 3, then add 5 to that.

// Reverse polish notations are easier to parse for computers and you don't need parentheses to denote precedence of operations.

// Transform the algebraic expression with brackets into RPN form.

// You can assume that for the test cases below only single letters will be used, brackets [] will not be used and each expression has only one RPN form (no expressions like a*b*c)
// Input Format

//     The first line contains t, the number of test cases (less then 100).
//     Followed by t lines, containing an expression to be translated to RPN form, where the length of the expression is less then 400.

// Output Format

// The expressions in RPN form, one per line.
// Sample 1:
// Input
// Output

// 3
// (a+(b*c))
// ((a+b)*(z+x))
// ((a+t)*((b+(a+c))^(c+d)))

// abc*+
// ab+zx+*
// at+bac++cd+^*

// Did you like the problem?
// 1 user found this helpful
// ​

// 3
// (a+(b*c))
// ((a+b)*(z+x))
// ((a+t)*((b+(a+c))^(c+d)))

#include <bits/stdc++.h>
using namespace std;

void test()
{
    string s;
    cin >> s;
    // cout << s << endl;

    stack<char> st;
    for (auto i : s)
    {
        if (i == ')')
        {
            cout << st.top();
            st.pop();
        }
        else if (i == '(')
        {
            continue;
        }
        else if ('a' <= i && i <= 'z')
        {
            cout << i;
        }
        else 
        {
            st.push(i);
        }
    }
    cout << endl;
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
        test();

    return 0;
}