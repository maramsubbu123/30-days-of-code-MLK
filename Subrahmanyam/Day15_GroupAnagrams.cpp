#include <bits/stdc++.h>
using namespace std;

set<set<string>> groupAnagrams(vector<string> const &words)
{
    set<set<string>> anagrams;

    vector<string> list(words);
    for (string &s : list)
    {
        sort(s.begin(), s.end());
    }
    unordered_map<string, vector<int>> map;
    for (int i = 0; i < words.size(); i++)
    {
        map[list[i]].push_back(i);
    }
    for (auto itr : map)
    {
        set<string> anagram;
        for (int index : itr.second)
        {
            anagram.insert(words[index]);
        }
        if (anagram.size() > 1)
        {
            anagrams.insert(anagram);
        }
    }

    return anagrams;
}

int main()
{
    vector<string> words =
        {
            "CARS", "REPAID", "DUES", "NOSE", "SIGNED", "LANE", "PAIRED", "ARCS",
            "GRAB", "USED", "ONES", "BRAG", "SUED", "LEAN", "SCAR", "DESIGN"};
    set<set<string>> anagrams = groupAnagrams(words);

    for (set<string> anagram : anagrams)
    {
        for (string s : anagram)
        {
            cout << s << ' ';
        }
        cout << endl;
    }

    return 0;
}
