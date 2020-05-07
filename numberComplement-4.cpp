// Number Complement
// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3319/


// copied :( will understand it again and add explanation here
int findComplement(int num) {
    int mask = 0, tmp=num;
    while( tmp ) {
        tmp = tmp >> 1;
        mask = mask << 1;
        mask = mask | 1;
    }
    return ~num & mask;
}