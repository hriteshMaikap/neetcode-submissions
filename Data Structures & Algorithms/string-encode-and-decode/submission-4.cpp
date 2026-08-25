class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        for (int i=0; i<strs.size();i++){
            int tempLen = strs[i].size();
            res += to_string(tempLen) + '#' + strs[i];
        }
        return res;
    }

    vector<string> decode(string s) {
        vector<string>resArr;

        int i=0;
        while (i<s.size()){
            int len = 0;
            while(s[i]!='#'){
                len = len*10 + (s[i]-'0');
                i++;
            }
            i++;

            string temp = s.substr(i,len);
            resArr.push_back(temp);

            i+=len;
        }
        
        return resArr;
    }

};
