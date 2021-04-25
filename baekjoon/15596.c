long long sum(int *a, int n)
{
    long long ans;

    ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans + a[i];
    }
    return ans;
}