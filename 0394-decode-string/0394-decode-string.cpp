class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<string> str;
        string currStr = "";
        int currNum = 0;
        for (char c : s) {
            if (isdigit(c)) {
                currNum = currNum * 10 + (c - '0');
            }
            else if (c == '[') {
                num.push(currNum);
                str.push(currStr);
                currNum = 0;
                currStr = "";
            }
            else if (c == ']') {
                int repeat = num.top();
                num.pop();
                string prevStr = str.top();
                str.pop();
                string temp = "";
                for (int i = 0; i < repeat; i++) {
                    temp += currStr;
                }
                currStr = prevStr + temp;
            }
            else {
                currStr += c;
            }
        }
        return currStr;
    }
};