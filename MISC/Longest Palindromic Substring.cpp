class Solution {
public:
    string longestPalindrome(string a) {
        if(a.size()==1)return a;
        if(a.size()==2){
            if(a[0]==a[1])return a;
            string k = "";
            k+=a[0];
            return k;
        }

         string ans ="";
    int cn=0;
    for(int i=1; i<a.size()-1; i++)
    {
        int l,r;
        l=i-1;
        r=i+1;
       // cout<<a[l]<<" "<<a[r]<<endl;
        while(l>=0 && r<a.size() && a[l]==a[r])
        {
            l--;
            r++;
        }
        if(l<0 || a[l]!=a[r]){
            l++;
            r--;
        }
        if(r-l+1>cn)
        {
            cn=r-l+1;
            while(ans.size()>0)ans.pop_back();
            for(int k=l; k<=r; k++)ans+=(char)(a[k]);
           // cout<<ans<<endl;

        }
    }

    for(int i=0; i<a.size(); i++)
    {
        int l,r;
        l=i;
        r=i+1;
        while(l>=0 && r<a.size() && a[l]==a[r])
        {
            l--;
            r++;
        }
                if(l<0 || a[l]!=a[r]){
            l++;
            r--;
        }
        if(r-l+1>cn)
        {
            cn=r-l+1;
            
            while(ans.size()>0)ans.pop_back();
            for(int k=l; k<=r; k++)ans+=a[k];
        }
    }
    return ans;
    }
};
