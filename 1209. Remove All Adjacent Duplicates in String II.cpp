class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> stack;
        for(char ch : s)
        {
            if(!stack.empty() && stack.top().first==ch)
                stack.top().second++;
            else
                stack.push({ch,1});
            if(stack.top().second == k)
                stack.pop();
        }
        string result="";
        while(!stack.empty())
        {
            int size=stack.top().second;
            while(size--)
            {
                result.push_back(stack.top().first);
            }
            stack.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
