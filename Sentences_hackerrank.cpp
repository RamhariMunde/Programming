/*
HOW MANY SENTENCES?

Given an array of words and an array of sentences, determine which words are anagrams of each other,
 Calculate how many sentences can be created by replacing any word with one of its anagrams


*/

#include<bits/stdc++.h>
using namespace std;
vector<long> solve(vector<string> &words, vector<string> &sentences) {
    unordered_map<string, vector<string>> mpp;
    for(string word: words) {
        string sorted = word;
        sort(sorted.begin(), sorted.end());
        mpp[sorted].push_back(word);
    }
    vector<int> ans;
    for(string sentence: sentences) {
        stringstream s(sentence);
        string tmp;
        int c = 1;
        while(s>>tmp) {
            string key = tmp;
            sort(key.begin(), key.end());
            if(mpp.find(key) != mpp.end()) {
                c *= mpp[key].size();
            }
        }
        ans.push_back(c);
    }
    
    return ans;
};
// this part no use and change the some words according to your quation 
int main() {
    vector<string> words{"listen","silent","it","is"};
	vector<string> sentences{"listen it is silent"};
    for(int i: solve(words, sentences)) {
        cout<<i<<" ";
    }
}