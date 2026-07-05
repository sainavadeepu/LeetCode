class Solution {
public:
    bool vowel(char ch){
        ch=tolower(ch);
        return ch=='a' || ch=='e' || ch=='i'|| ch=='o'|| ch=='u';

    }
    string reverseVowels(string s) {
        int left=0;
        int n=s.size();
        int right=n-1;
        while(left<=right){
            while(left<right && !vowel(s[left])){
                left++;
            }
            while(left<right && !vowel(s[right])){
                right--;
            }
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;
        
    }
};