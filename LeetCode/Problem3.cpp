#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


    int lengthOfLongestSubstring(string s) {
        
        vector<int> lastIndex(256, -1);
        
        int left = 0;
        int maxLen = 0;
        
        for(int right = 0; right < s.length(); right++) {
            
            if(lastIndex[s[right]] >= left) {
                left = lastIndex[s[right]] + 1;
            }
            
            lastIndex[s[right]] = right;
            
            maxLen = max(maxLen, right - left + 1);
        }
        
        return maxLen;
    }

int main() {
    
    string s;
    cout << "Enter string: ";
    getline(cin, s);
    
    int result = lengthOfLongestSubstring(s);
    
    cout << "Length of longest substring without repeating characters: " 
         << result << endl;
    
    return 0;
}