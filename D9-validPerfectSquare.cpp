// Valid Perfect Square
// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/

// Addition of first n odd numbers is always perfect square
// time: o(sqrt(n)) space: o(1)
bool isPerfectSquare(int num) {
    int a = 1;
    while(num > 0) {
        num = num - a;
        a += 2;    
    }
    return num == 0;
}

// We know sqrt(9) = 3 and 3 ^ 2 = 9
// simple one line solution
bool isPerfectSquare(int num) {
    return num == (int)pow(num, 0.5) + (int)pow(num, 0.5);
}