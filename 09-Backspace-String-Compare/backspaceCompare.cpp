#include <iostream>
#include <string>

std::string process(std::string s)
{
    std::string result;
    for (auto i : s)
    {
        if (i == '#')
        {
            if (result.size() > 0)
                result.pop_back();
        }
        else
        {
            result += i;
        }
    }
    return result;
}

bool backspaceCompare(std::string s, std::string t)
{
    return process(s) == process(t);
}

int main(int argc, char const *argv[])
{
    /* code */
    std::string s = "ab#c";
    std::string t = "ad#c";

    std::cout << "backspaceCompare:" << std::boolalpha << backspaceCompare(s, t) << std::endl;
    return 0;
}
