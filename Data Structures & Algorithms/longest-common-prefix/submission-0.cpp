class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==1) return(strs[0]);
        string res="";
        int m=INT_MAX;
        for (auto i=0;i<strs.size();i++){
            m=min(m,(int)strs[i].length());
        }
        bool t;
        for (auto i=0;i<m;i++){
            t=true;
            char c=strs[0][i];
            for (auto j=1;j<strs.size();j++){
                if (strs[j][i]!=c){ t=false; break;}
            }
            if (t) res+=c;
            else break;
        }
        return(res);
    }
};