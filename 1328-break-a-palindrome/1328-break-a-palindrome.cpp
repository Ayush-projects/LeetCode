class Solution {
public:
   
    string breakPalindrome(string palindrome) {
        if(palindrome.length()<=1)
        {
            return "";
        }
        
        
        
       int count_a = count(palindrome.begin(), palindrome.end(), 'a');
        if(count_a == palindrome.length())
        {
             palindrome[palindrome.length()-1] = 'b';
            return palindrome;
        }
        for(int i=0; i<palindrome.length(); i++)
        {
            int count = 97;
            if(palindrome[i] !='a')
            {
                if(palindrome.length()%2==1 && i==(palindrome.length()/2))
                {
                    continue;
                }
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome[palindrome.length()-1]= 'b';
        return palindrome;
    }
};