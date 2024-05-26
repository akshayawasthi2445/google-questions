class Solution {
	public:
	long long getMaxArea(long long arr[], int n){
		// 6 2 5 4 5 3 7 8
		vector<int> prev(n,-1);
		vector<int> next(n,n);
		stack<int> st;
		// st.top() will always have elements previous element
		st.push(-1);
		int i=0;
		while(i<n){
			while(i<n && st.top()!=-1 && arr[st.top()] < arr[i]){
				prev[i] = st.top();
				st.push(i);
}
if(i>0 && arr[i] == arr[i-1])
	prev[i] = prev[i-1];
while(!st.empty() && st.top()!=-1 && arr[st.top()] > arr[i]){
	next[st.top()] = i;
	st.pop();
}
st.push(i);
prev[i] = st.top();
i++;
}
long long maxArea = 0;
long long currArea;
for(int i=0;i<n;i++){
	// 0 1 2 3 4 5 6, left:-1   (4-0-1)
	int width;
	width = (next[i]-prev[i]-1);
	currArea = (width*arr[i]);	
	if(currArea > maxArea)
		maxArea = currArea;
}
return maxArea;
}
};
