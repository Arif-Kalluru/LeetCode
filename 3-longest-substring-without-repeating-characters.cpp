// Source : // https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    // char & index where it was last seen
    unordered_map<char, int> umap;

    int longest = 0;

    int i = 0, j;
    for (j = 0; j < s.size(); j++) {
      if (umap.find(s[j]) != umap.end()) {
        longest = max(longest, j - i);
        if (umap[s[j]] + 1 > i)
          i = umap[s[j]] + 1;
        umap[s[j]] = j;
      } else {
        umap[s[j]] = j;
      }
    }
    return max(longest, j - i);
  }
};

/*
  Start two pointers, increment the right pointer on every character till it
  reaches the end. Keep adding elements to hash table if they aren't already in
  the hash table. Store the character & it's index where it was last seen. If
  the character is already in the string then move left pointer to it's last
  seen index + 1, given that the last seen index + 1 is not less than current
  index. Basically we shouldn't go backwards, only go forwards and shrink the
  window of search. Count will be right pointer index - left pointer index.
 */
