#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution{
    public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string ans="";
        int n=strs.size();
        string first=strs[0],last=strs[n-1];
        for(int i=0;i<min(first.size(),last.size());i++)
        {
            if(first[i]!=last[i])
            {
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<string> strs={"flower", "flow", "flight"};
    string result= s.longestCommonPrefix(strs);
     cout << "Longest Common Prefix: " << result << endl;
    return 0;
}