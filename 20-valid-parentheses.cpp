// Source : https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
  bool isValid(string s) {
    stack<char> S;

    for (auto c : s) {
      switch (c) {
      case '(':
        S.push(c);
        break;
      case '[':
        S.push(c);
        break;
      case '{':
        S.push(c);
        break;
      case ')':
        if (S.empty() || S.top() != '(')
          return false;
        S.pop();
        break;
      case ']':
        if (S.empty() || S.top() != '[')
          return false;
        S.pop();
        break;
      case '}':
        if (S.empty() || S.top() != '{')
          return false;
        S.pop();
        break;
      }
    }
    return S.empty();
  }
};
