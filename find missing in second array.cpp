vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    vector<long long>ans;
	    map<int,int>ve;
	    for(long long i=0;i<M;i++){
	        long long a=(B[i]);
	        ve[a]+=1;
	    }
	    for(long long i=0;i<N;i++){
	        long long it=(A[i]);
	        if(ve[it]==0){
	            ans.push_back(it);
	        }      
	    }
	    return ans;
int N,M;
 cin>>N>>M;
long long A[N];
long long B[M];
 for(int i=0;i<N;i++){
     cin>>A[i];
 }
  for(int i=0;i<M;i++){
     cin>>B[i];
 }
  return  findMissing(A[],B[],N,M) 
  
