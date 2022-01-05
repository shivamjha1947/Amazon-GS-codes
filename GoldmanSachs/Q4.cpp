string encode(string src){     
  char last = '-';
  string ans = "";
  int count = 0;
  for(char c: src) {
      if(c != last) {
          if(count) {
              ans += to_string(count);
          }
          ans += c;
          count = 1;
      }else {
          ++count;
      }
      last = c;
  }
  ans += to_string(count);
  return ans;
}
