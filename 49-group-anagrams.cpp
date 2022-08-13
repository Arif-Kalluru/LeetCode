// Source : https://leetcode.com/problems/group-anagrams/

class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    // Base cases, just for speed
    if (strs.size() == 0)
      return {{}};

    if (strs.size() == 1)
      return {{strs[0]}};

    vector<vector<string>> result;
    unordered_map<string, vector<string>> umap;

    for (int i = 0; i < strs.size(); i++) {
      string sorted_word = strs[i];

      sort(sorted_word.begin(), sorted_word.end());
      umap[sorted_word].push_back(strs[i]);
    }

    for (auto i = umap.begin(); i != umap.end(); i++)
      result.push_back(i->second);
    return result;
  }
};
