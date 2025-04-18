class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        priority_queue<int> left;
        priority_queue<int, vector<int>, greater<int>> right;
        vector<double> res;
        for (int num : arr) {
            if (left.empty() || num <= left.top()) {
                left.push(num);
            } else {
                right.push(num);
            }
            if (left.size() > right.size() + 1) {
                right.push(left.top());
                left.pop();
            } else if (right.size() > left.size()) {
                left.push(right.top());
                right.pop();
            }
            if (left.size() == right.size()) {
                res.push_back((left.top() + right.top()) / 2.0);
            } else {
                res.push_back(left.top());
            }
        }
        return res;
    }
};
