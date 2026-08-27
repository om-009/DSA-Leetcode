class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;

        while(i < j){
            while (i < j && !isalnum(s[i])) {//skip spaces
                i++;
            }

            while (i < j && !isalnum(s[j])) {
                j--;
            }

            if (tolower(s[i]) != tolower(s[j])) {//Aman,aplan...panama
                return false;
            }
            i++;
            j--;
        }
    return true;
    }
};