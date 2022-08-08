// Source : https://leetcode.com/problems/ransom-note/

class Solution {
public:
  bool canConstruct(string ransomNote, string magazine) {
    if (ransomNote.length() > magazine.length())
      return false;

    int freq[26] = {0};
    for (auto c : magazine)
      freq[c - 'a']++;
    for (auto c : ransomNote) {
      if (--freq[c - 'a'] < 0)
        return false;
    }

    return true;
  }
};
