/*
Absolute Path: "/home/"
Simplified Path: "/home"
Absolute Path: "/../"
Simplified Path: "/"
Absolute Path: "/a/./b/../../c/../d/"
Simplified Path: "/d"
*/
#include <iostream>
#include <string>
#include <stack>
using namespace std;

string simplifyPath(string path)
{
    stack<string> s;

    size_t pos = 0;
    while ((pos = path.find('/')) != string::npos)
    {
        string token = path.substr(0, pos);
        path.erase(0, pos + 1);

        if (token == "..")
        {
            if (!s.empty())
            {
                s.pop();
            }
        }
        else if (token != "." && !token.empty())
        {
            s.push(token);
        }
    }
    if (path == "..")
    {
        if (!s.empty())
        {
            s.pop();
        }
    }
    else if (path != "." && !path.empty())
    {
        s.push(path);
    }
    string result = "/";
    while (!s.empty())
    {
        result = "/" + s.top() + result;
        s.pop();
    }

    return result == "/" ? result : result.substr(0, result.length() - 1);
}

int main()
{
    cout << simplifyPath("/home/") << endl;
    cout << simplifyPath("/../") << endl;
    cout << simplifyPath("/a/./b/../../c/../d/") << endl;
    return 0;
}
