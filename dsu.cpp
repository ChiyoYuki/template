class DSU {
public:
  long long dnum,num;
  std::vector<long long> fa;
  DSU(long long n)
  {
    fa.resize(n);
    dnum=n;
    num=n;
  }
  bool merge(long long x,long long y)
  {
    x=find(x);
    y=find(y);
    if(x==y) return false;
    fa[y]=x;
    dnum--;
  }
  long long find(long long x)
  {
    if(x==fa[x]) return x;
    else
    {
      fa[x]=find(fa[x]);
      return fa[x];
    }
  }
  bool same(long long x,long long y)
  {
    return find(x)==find(y);
  }
};
