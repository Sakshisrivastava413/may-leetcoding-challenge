// First Bad Version
// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3316/

// using binary search to find the first bad version.
// Time: o(log(n)) Space: o(1)

int firstBadVersion(int n) {
    int s = 0, e = n;
    while(s <= e) {
        int m = s + (e - s) / 2;
        if(m == 0 && isBadVersion(m)) return m;
        if(m > 0 && !isBadVersion(m - 1) && isBadVersion(m)) return m;
        if(isBadVersion(m)) e = m - 1;
        else s = m + 1;
    }
    assert(false);
}