class Solution {
	public:
	long long getMaxArea(long long arr[], int n){
		// 0 1 2 3 4 5 6 7 8
		// 6 2 5 4 5 3 4 6 4  


		// 0 1
// 6 8 
// [0,1] i=2
		// i=5 // 
		// currArea = 5
		// maxArea=6
		// st: [1] 
		// tp: 3
		
		// width: 
		// width: 1
// we have the objective that the top element in the stack will be prev_min
		// i-th element will be the next min
		
		if(n == 0) return 0;
		long long maxArea = 0;
		long long currArea;
		int i = 0;
		int tp;
		int width;
		stack<long long> st;
		while(i<n){
			if(st.empty() || arr[i] >= arr[st.top()]
				st.push(i++);
			else{
				tp = st.top();
				st.pop();
				width = st.empty() ? i : i-st.top()-1;
				currArea = width*arr[tp];
				if(maxArea < currArea)
					currArea = maxArea;
}
}
while(!st.empty()){
	tp = st.top();
	st.pop();
	width=st.empty() ? i:i-st.top()-1;
	currArea = width*arr[tp];
	if(maxArea < currArea)
		maxArea = currArea;
}
return maxArea;
}
};
