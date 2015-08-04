int power_modulo_fast(int a, int b, int m)
{
    int i, r = 1, x = a % m;
    for (i=1; i<=b; i<<=1)
    {
        x %= m;
        if ((b&i) != 0) {r *= x; r %= m;}
        x *= x;
    }
    return r;
}
