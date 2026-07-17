class MinStack {
    vector<int> st;
    vector<int> minIdx;

public:
    MinStack() {}

    void push(int val) {
        st.push_back(val);
        if (minIdx.empty() || val <= st[minIdx.back()])
            minIdx.push_back(st.size() - 1);
    }

    void pop() {
        if (st.size() - 1 == minIdx.back())
            minIdx.pop_back();
        st.pop_back();
    }

    int top() {
        return st.back();
    }

    int getMin() {
        return st[minIdx.back()];
    }
};