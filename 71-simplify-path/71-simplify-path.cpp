class Solution {
public:
    string simplifyPath(string path) {
        vector<string> vec;
        int i = 0;
      while (i < path.size()) {
          while (path[i] == '/' && i < path.size()) ++i;
          if (i == path.size()) break;
          int start = i;
          while (path[i] != '/' && i < path.size()) ++i;
          int end = i - 1;
          string s = path.substr(start, end - start + 1);
          if (s == "..") {
              if (!vec.empty()) vec.pop_back(); 
          } else if (s != ".") {
              vec.push_back(s);
          }
      }
        if (vec.empty()) return "/";
      string ans;
      for (int i = 0; i < vec.size(); ++i) {
          ans+= '/' + vec[i];
      }
        return ans;
      
    }
};