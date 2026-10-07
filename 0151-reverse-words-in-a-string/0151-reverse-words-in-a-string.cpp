class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string>words;
        while(ss >> word){
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        stringstream resultss;
        for(int i=0;i<words.size();i++){
            resultss << words[i];
            if(i<words.size()-1){
                resultss << " ";
            }
        }
        string result = resultss.str();
        return result;
    } 
};