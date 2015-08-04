int Heron(string a, int p)
{
    int d = 0;
    for(int i = 0; i < a.length(); i++)
        d = p*d + (a.at(i) - '0');
    return d;
}
