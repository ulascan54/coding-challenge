#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'getMax' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts STRING_ARRAY operations as parameter.
 */

vector<int> getMax(vector<string> operations)
{
    std::stack<int> elements;
    std::stack<int> maxStack;
    std::vector<int> result;

    for (const auto &operation : operations)
    {
        char op = operation[0];

        if (op == '1')
        {
            int x = std::stoi(operation.substr(2));
            elements.push(x);

            if (maxStack.empty() || x >= maxStack.top())
            {
                maxStack.push(x);
            }
            else
            {
                maxStack.push(maxStack.top());
            }
        }
        else if (op == '2')
        {
            if (!elements.empty() && !maxStack.empty())
            {
                elements.pop();
                maxStack.pop();
            }
        }
        else if (op == '3')
        {
            if (!maxStack.empty())
            {
                result.push_back(maxStack.top());
            }
        }
    }

    return result;
}

/* first submition correct but slow.

vector<int> getMax(vector<string> operations) //*  1 20
{
    string chars = "0123456789";
    int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    stack<string> s;
    stack<string> s2;
    vector<int> result;
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations.at(i)[0] == '1')
        {
            vector<string> re;
            stringstream ss(operations.at(i));
            string item;
            while (getline(ss, item, ' '))
            {
                re.push_back(item);
            }
            s.push(re.at(1));
        }
        if (operations.at(i)[0] == '2')
        {
            s.pop();
        }
        if (operations.at(i)[0] == '3')
        {
            int max = 0;
            while (!s.empty())
            {
                int num = 0;
                int count = 0;
                for (int i = s.top().length() - 1; i >= 0; i--)
                {

                    int index = 0;
                    for (int j = 0; j < 10; j++)
                    {
                        if (s.top()[count] == chars[j])
                        {
                            index = j;
                            break;
                        }
                    }
                    num += pow(10, i) * nums[index];
                    count++;
                }
                if (max < num)
                {
                    max = num;
                }
                s2.push(s.top());
                s.pop();
            }
            result.push_back(max);
            while (!s2.empty())
            {
                s.push(s2.top());
                s2.pop();
            }
        }
    }
    return result;
}


*/

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<string> ops(n);

    for (int i = 0; i < n; i++)
    {
        string ops_item;
        getline(cin, ops_item);

        ops[i] = ops_item;
    }

    vector<int> res = getMax(ops);

    for (size_t i = 0; i < res.size(); i++)
    {
        fout << res[i];

        if (i != res.size() - 1)
        {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
