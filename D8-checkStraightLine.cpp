// Check If It Is A Straight Line
// https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/

// find the slope of each consecutive pair of points and if any slope if different from other return false
// time: o(n) space: o(1)
bool checkStraightLine(vector<vector<int>>& coordinates) {
    string slope = "";
    for(int i = 0; i < coordinates.size() - 1; i++) {
        float xDiff = coordinates[i + 1][0] - coordinates[i][0];
        float yDiff = coordinates[i + 1][1] - coordinates[i][1];
        string curSlope = "0";
        if(yDiff / xDiff != 0) curSlope = to_string(yDiff / xDiff);
        if(slope == "") slope = curSlope;
        else if(slope != curSlope) return false;
    }
    return true;
}