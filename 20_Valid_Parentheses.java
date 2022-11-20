class Solution {
    public boolean isValid(String s) 
    {
        char [] ch = s.toCharArray();
        Stack <Character> stack=new Stack<Character>();
        for(char c : ch )
        {
            if(c=='(' || c=='{' || c== '[' )
            {
                stack.push(c);
                continue;
            }
            else if(stack.empty())
                return false;
            char top=stack.pop();
            if(top=='(' && c!=')' ) return false;
            if(top=='{' && c!='}' ) return false;
            if(top=='[' && c!=']' ) return false;
        }
        return stack.empty();
    }
}
