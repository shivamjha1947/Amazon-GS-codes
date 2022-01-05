int getNthUglyNo(int n){
  set<int>s;
  s.insert(1);
  n--;
  while(n--){
      auto it = s.begin();
      int x = *it;
      s.erase(it);
      s.insert(x*2);
      s.insert(x*3);
      s.insert(x*5);
  }
  return *s.begin();
}
