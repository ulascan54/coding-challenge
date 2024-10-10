class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        vector<int> temp;
        for (int i = 0; i < temperatures.size(); i++)
        {
            int count = 0;
            for (int j = i + 1; j < temperatures.size(); j++)
            {
                count++;
                if (temperatures[i] < temperatures[j])
                {
                    break;
                }
                if (temperatures.size() - 1 == j)
                {
                    count = 0;
                }
            }
            temp.push_back(count);
        }
        return temp;
    }
};
