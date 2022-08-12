// Source : https://leetcode.com/problems/find-all-anagrams-in-a-string/

class Solution {
public:
  vector<int> findAnagrams(string s, string p) {
    if (p.size() > s.size())
      return {};

    vector<int> result;

    vector<int> p_freq(26, 0);
    vector<int> sub_freq(26, 0);

    int i = 0;
    int j = 0;

    while (j < p.size()) {
      p_freq[p[j] - 'a']++;
      sub_freq[s[j] - 'a']++;
      j++;
    }

    while (j < s.size()) {
      if (p_freq == sub_freq) {
        result.push_back(i);
      }
      sub_freq[s[i] - 'a']--;
      i++;
      sub_freq[s[j] - 'a']++;
      j++;
    }

    if (p_freq == sub_freq)
      result.push_back(i);

    return result;
  }
};
