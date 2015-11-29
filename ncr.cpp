    #include <iostream>
    #include <stdio.h>
    #include <math.h>
    #include <vector>
    using namespace std;
     
    int mod=1000003;

	long long int power(int a, int b, int mod)
{
    long long int x=1,y=a; 
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>mod) x%=mod;
        }
        y = (y*y);
        if(y>mod) y%=mod; 
        b /= 2;
    }
    return x;
}
 

long long int  eulla(int n, int mod)
{
    return power(n,mod-2,mod);
}
 
long long int  C(int n, int r, int mod)
{
    vector<long long int > vct(n + 1,1);
    for (int i=2; i<=n;i++)
        vct[i]= (vct[i-1]*i) % mod;
    return (vct[n]*((eulla(vct[r], mod) * eulla(vct[n-r], mod)) % mod)) % mod;
}
  
    int  main()
    {
    	int t;
    	scanf("%d",&t);
    	while(t--)
    	{
    		long long int l,r,n;
    		long long int basic=0,dif;
    		
    		scanf("%lld%lld%lld",&n,&l,&r);
    		
    		dif=r-l;
    		
    		basic=C(n+dif+1,dif+1,mod)-1;
    				
    		printf("%lld\n",basic);
    	}
     
    	return 0;
    }
    			 


