// Ransom Note
// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/

// used unordered_map to store the magazine characters count
// then checking for each note character if found decreasing its count by 1
// time: o(n) space: o(m)
bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> m;
    for(char a: magazine) m[a]++;
    for(char a: ransomNote) {
        if(--m[a] < 0) return false;
    }
    return true;
}