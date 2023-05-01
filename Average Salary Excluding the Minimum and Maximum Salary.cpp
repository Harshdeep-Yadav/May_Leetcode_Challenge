class Solution
{
public:
    double average(vector<int> &s)
    {
        return (accumulate(s.begin(), s.end(), 0.) - *min_element(s.begin(), s.end()) - *max_element(s.begin(), s.end())) / (s.size() - 2);
    }
};
