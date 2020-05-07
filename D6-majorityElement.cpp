// Majority Element
// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/


// storing the count of each element and then returning whose count id greater then half of array size
// time: o(n) space: o(n)
int majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int, int> m;
    for(int n: nums) {
        m[n]++;
    }
    for(auto i = m.begin(); i != m.end(); i++) {
        if(i->second > (n / 2)) return i->first;
    }
    assert(false);
}

// Moore-Voting Algorithm
// time: o(n) space: o(1)
 int majorityElement(vector<int>& nums) {
    int n = nums.size();   
    int m, mc = 0;
    for(int i = 0; i < n; i++) {
        if(mc == 0) {
            m = nums[i];
            mc++;
        } else if (m == nums[i]) mc++;
            else mc--;
    }
    return m;
}