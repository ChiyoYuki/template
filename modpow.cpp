long long modpow(long long base, long long exp, long long mod)
{
    long long ans = 1;
    base %= mod;
    for (; exp; exp >>= 1)
    {
        if (exp & 1LL)
        {
            ans *= base;
            ans %= mod;
        }
        base *= base;
        base %= mod;
    }
    return ans;
}