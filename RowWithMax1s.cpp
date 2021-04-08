class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	 pair<int,int> mn=make_pair(INT_MAX,-1);
	 for(int i=0;i<n;i++){
	     if(arr[i][m-1]==0){
	         continue;
	     }
	     for(int j=0;j<m;j++){
	         if(arr[i][j]==1){
	             if(mn.first>j){
	                 mn.first=j;
	                 mn.second=i;
	             }
	             break;
	         }
	     }
	 }
	 return mn.second;
	}

};
