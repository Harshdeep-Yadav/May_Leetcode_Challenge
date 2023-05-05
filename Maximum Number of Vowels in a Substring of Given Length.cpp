class Solution
{
public:
    int maxVowels(string st, int k)
    {
        int n = st.size();
        int maxcount = 0;
        int cnt = 0;
        int i = 0, j = 0;

        while (j < n)
        {
            if (st[j] == 'a' || st[j] == 'e' || st[j] == 'i' || st[j] == 'o' || st[j] == 'u')
            {
                cnt++;
            }
            if (j - i == k)
            {
                if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u')
                {
                    cnt--;
                }
                i++;
            }
            maxcount = max(maxcount, cnt);
            j++;
        }
        return maxcount;
    }
};