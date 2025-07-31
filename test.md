素数筛

```cpp
vector<long long> sieve(long long n){
    vector<char> isp(n + 1, 1);
    vector<long long> p(1, 2);
    long long i, j, r = sqrt(n);
    // isp[0]=0;isp[1]=0;
    for (i = 4; i <= n; i += 2) isp[i] = 0;
    for (i = 3; i <= r; i += 2){
        if (isp[i] == 1){
            p.push_back(i);
            j = n / i;
            if (j % 2 == 0) j--;
            for (; j >= i; j -= 2) if (isp[j] == 1) isp[i * j] = 0;
        }
    }
    if (++r % 2 == 0) r++;
    for (; r <= n; r += 2) if (isp[r] == 1) p.push_back(r);
    return p;
}

vector<int> pri;
bool not_prime[N];
void pre(int n)
{
    for (int i = 2; i <= n; ++i)
    {
        if (!not_prime[i]) pri.push_back(i);
        for (int pri_j : pri)
        {
            if (i * pri_j > n) break;
            not_prime[i * pri_j] = true;
            if (i % pri_j == 0) break;
        }
    }
}
```

快速幂

```cpp
long long binpow(long long base, long long exp)
{
    long long ans = 1;
    while (exp)
    {
        if (exp & 1LL) ans *= base;
        base *= base;
        exp >>= 1;
    }
    return ans;
}

long long binpow(long long base, long long exp, long long mod)
{
    long long ans = 1;
    base %= mod;
    while (exp)
    {
        if (exp & 1LL) ans = ans * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return ans;
}
```

gcd
```cpp
long long gcd(long long x, long long y)
{
    long long z;
    x = abs(x);
    y = abs(y);
    if (x > y) swap(x, y);
    if (x == 0) return y;
    while (y != 0)
    {
        z = x % y;
        x = y;
        y = z;
    }
    return x;
}
```

杂七杂八

```cpp
#define _USE_MATH_DEFINES
M_PI_2
ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
priority_queue
```