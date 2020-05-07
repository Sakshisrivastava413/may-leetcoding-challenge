// First Unique Character in a String
// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/

// stored count of each character in map and finding the char whose count is 1
// time: o(n) space: o(n)
int firstUniqChar(string s) {
    unordered_map<char, int> m;
    for(int i = 0; i < s.size(); i++) {
        m[s[i]]++;
    }
    for(int i = 0; i < s.size(); i++) {
        if(m[s[i]] == 1) return i;
    }
    return -1;
}