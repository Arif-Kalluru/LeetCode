// Source : https://leetcode.com/problems/permutation-in-string/

class Solution {
public:
  bool checkInclusion(string s1, string s2) {
    if (s2.size() < s1.size())
      return false;

    vector<int> s1_count(26, 0);
    vector<int> sub_count(26, 0);

    int i = 0;
    int j = 0;

    while (j < s1.size()) {
      s1_count[s1[j] - 'a']++;
      sub_count[s2[j] - 'a']++;
      j++;
    }

    while (j < s2.size()) {
      if (sub_count == s1_count) {
        return true;
      }
      sub_count[s2[i] - 'a']--;
      i++;
      sub_count[s2[j] - 'a']++;
      j++;
    }

    return sub_count == s1_count;
  }
};
