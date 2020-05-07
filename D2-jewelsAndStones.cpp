// Jewels and Stones
// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/


// brute force solution
// time: o(J * S) space: o(1)

int numJewelsInStones(string J, string S) {
    int c = 0;
    for(int i = 0; i < S.size(); i++) {
        for(int j = 0; j < J.size(); j++) {
            if(S[i] == J[j]) c++;
        }
    }
    return c;
}


// storing the jewels in map and finding if stones matches any of the jewel
// time: o(S) space: o(J)
// Note: search in unordered_map is o(1)

int numJewelsInStones(string J, string S) {
    unordered_map<char, int> m;
    int c = 0;
    for(int i = 0; i < J.size(); i++) {
        m[J[i]]++;
    }
    for(int j = 0; j < S.size(); j++) {
        if(m.find(S[j]) != m.end()) c++;
    }
    return c;
}