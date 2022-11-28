class Solution {
    public boolean isAnagram(String s, String t) 
    {
        char tempa1 []= s.toCharArray();
        char tempa2 []= t.toCharArray();
        Arrays.sort(tempa1);
        Arrays.sort(tempa2);
        s= new String(tempa1);
        t= new String(tempa2);
        return (s.equals(t));
    }
}
