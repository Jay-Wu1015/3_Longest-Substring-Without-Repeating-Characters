#include<iostream>
#include<vector>
#include <cmath>
#include <unordered_set>
#include<string>
#include<unordered_map>
#include <set>
#include<map>

using namespace std;



class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            unordered_map<char, int> chars;
    
            int left = 0;
            int right = 0;
    
            int res = 0;
            while (right < s.length()) {
                char r = s[right];
                chars[r]++;
    
                while (chars[r] > 1) {
                    char l = s[left];
                    chars[l]--;
                    left++;
                }
    
                res = max(res, right - left + 1);
    
                right++;
            }
    
            return res;
        }
    };
    
    int main(){

        Solution sol;
        string s = "pwwkew";
        sol.lengthOfLongestSubstring(s );
       

        return 0;
    }