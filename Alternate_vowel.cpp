/*Given a string S of lowercase english characters. Rearrange characters of the given string
 such that the vowels and consonants occupy alternate positions and the string so formed should
  be lexicographically (alphabetically) smallest. 
Note: Vowels are 'a', 'e', 'i', 'o' and 'u'. 

*/

#include<bits/stdc++.h>
using namespace std;

  class Solution{
    public:
    string rearrange (string s, int n)
    {
        
        vector<int> dictc(26,0), dictv(26,0);
        int l1=0,l2=0;
        char minc='z'+1,minv='z'+1;
        for(char ch: s)
        {
           if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ){
             
                minv = min(minv, ch);
                dictv[ch-'a']++;l1++;
           }
           else{
               minc = min(minc, ch);
               dictc[ch-'a']++;l2++;
           }
        }
            

            
        int i1=0,i2=0;
        string ans="";
        
        if(abs(l1-l2) >1) return "-1";
        
        bool takev = false;
        
        if(l1>l2) takev = true; 
        else if(l2==l1 && minv < minc) takev = true;
        
        while(i1<26 && i2<26){
            if(takev){
                
                while(dictv[i1] ==0) i1++;
                
                if(i1>=26) break;
                
                ans += (i1+'a');
                dictv[i1]--;
                takev = false;
            }
            else{
                
                while(dictc[i2]==0) i2++;
                if(i2>=26) break;
                
                ans += (i2+'a');
                dictc[i2]--;
                takev = true;
            }
        }
        
        
        while(dictv[i1]==0) i1++;
        
        while( dictc[i2]==0) i2++;
        
        if(i1<26) ans += (i1+'a');
        else if(i2<26) ans += (i2+'a');
   
        return ans;
    }
};


//Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
