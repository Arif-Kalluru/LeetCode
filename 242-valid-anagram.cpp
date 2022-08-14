// Source : https://leetcode.com/problems/valid-anagram/

class Solution {
public:
  bool isAnagram(string s, string t) {
    unordered_map<char, int> umap;

    if (s == t)
      return true;
    if (s.length() != t.length())
      return false;

    for (int i = 0; i < s.length(); i++)
      umap[s[i]]++;
    for (int j = 0; j < t.length(); j++) {
      umap[t[j]]--;
      if (umap[t[j]] == 0)
        umap.erase(t[j]);
    }
    return umap.empty() ? true : false;
  }
};
