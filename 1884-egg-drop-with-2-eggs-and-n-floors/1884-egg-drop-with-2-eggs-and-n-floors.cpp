class Solution
{
public:
    int twoEggDrop(int n)
    {
        double ans = (sqrt(1 + 8 * n) - 1) / 2;
        return (ans - int(ans) == 0) ? ans : ans + 1;
    }
};