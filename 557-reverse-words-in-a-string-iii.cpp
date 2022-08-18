// Source : https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
public:
  string reverseWords(string s) {
    auto start = s.begin();
    auto end = s.begin();

    while (end != s.end()) {
      if (*end == ' ') {
        reverse(start, end);
        start = ++end;
      }
      end++;
    }

    // for last word which is also the case for a single word
    // no whitespace was encountered
    if (start != end)
      reverse(start, end);

    return s;
  }
};
