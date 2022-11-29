class Solution(object):
    def addToArrayForm(self, num, k):
        temp = 0
        for n in num:
            temp = temp* 10
            temp = temp+ n
        temp += k
        
        temp = str(temp)
        ans = []
        for ch in temp:
            ans.append(int(ch))
            
        return ans
        
