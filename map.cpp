#include<iostream>
#include<map>
#include<string>
#define myMap map <string, map<string, map<string, map<string, map<string, map<string, int> > > > > >
using namespace std;

int main()
{

	int t, n, it;
	string k1, k2, k3, k4, k5, k6;
	scanf("%d", &t);
	while(t--)
	{
		myMap mp;
		scanf("%d", &n);
		it = n;
		while(it--){
		cin>>k1>>k2>>k3>>k4>>k5>>k6;

		if(mp[k1][k2][k3][k4][k5][k6])
			mp[k1][k2][k3][k4][k5][k6]++;
		else
		mp[k1][k2][k3][k4][k5][k6]= 1;
		}

		for(map <string, map<string, map<string, map<string, map<string, map<string, int> > > > > >::const_iterator it1 = mp.begin(); it1 != mp.end(); ++it1)
		{

			for( map<string, map<string, map<string, map<string, map<string, int> > > > > ::const_iterator it2 = it1->second.begin();
				it2 != it1->second.end(); ++it2)
			{
				for(  map<string, map<string, map<string, map<string, int> > > > ::const_iterator it3 = it2->second.begin();
				it3 != it2->second.end(); ++it3)
				{
					for(  map<string, map<string, map<string, int> > >  ::const_iterator it4 = it3->second.begin();
				it4 != it3->second.end(); ++it4)
					{
						for(  map<string, map<string, int> >   ::const_iterator it5 = it4->second.begin();
				it5 != it4->second.end(); ++it5)
						{
							for(  map<string, int> ::const_iterator it6 = it5->second.begin();
				it6 != it5->second.end(); ++it6)
							{
								cout<< it1->first<< " "<<it2->first<< " "<< it3->first<< " "<< it4->first<< " "<<
									it5->first << " "<<it6->first<< " "<< it6->second<< endl;
							}

						}

					}
				}

			}

		}

	}
	
	return 0;
}
