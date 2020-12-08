#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    
    cout << "Please enter an equation: "; // cout the promopt
     string in = "";
    getline(cin, in); // getting data inserted 

    stack<char> P;
    char open[3] = {'{', '(', '['}; // to check the data that been enter
    char close[3] = {'}', ')', ']'};

    for (unsigned i = 0; i < in.length(); i++) // messures the length of input
    {
        if (in[i] == '{' || in[i] == '[' || in[i] == '(') //check the data 
        {
            P.push(in[i]); // if it matches one of those it will puch back
        }
        else
        {
            for (unsigned j = 0; j < 3; j++)  // if its less than 3
            {
                if (in[i] == close[j])   
                {
                    if (P.top() == open[j]) // if it matches it will pop
                    {
                        P.pop();
                    }
                }
            }
        }
    }
    cout << in;
    if (P.empty()) //if the statement matches it will cout its balance
        cout << " is balanced" << endl; 
    else        // if it doesn't
        cout << " is not balanced" << endl;
        


}
