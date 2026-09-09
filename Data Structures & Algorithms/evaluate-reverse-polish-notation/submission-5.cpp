class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        int num1 = 0, num2 = 0;
        for(int i =0; i < tokens.size(); i++)
        {
            
            if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
             
                    num1 = nums.top();
                    nums.pop();
                    num2 = nums.top();
                    nums.pop();

                

                if(tokens[i] == "+")
                {
                    nums.push(num1 + num2);
                }
                else if(tokens[i] == "-")
                {
                    nums.push(num2 - num1);
                }
                else if(tokens[i] == "*")
                {
                    nums.push(num2 * num1);
                }
                else if(tokens[i] == "/")
                {
                    nums.push(num2 / num1);
                }
            }

            else
            {
                nums.push(stoi(tokens[i])); 
            }
        }

        return nums.top();
    }
};