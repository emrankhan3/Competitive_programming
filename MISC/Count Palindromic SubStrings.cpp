class Solution {
public:
    int countSubstrings(string a) {
        if(a.size()==1)return 1;
        if(a.size()==2){
            if(a[0]==a[1])return 3;
            return 2;
        }

         string ans ="";
         int pc=0;
    int cn=0;
    for(int i=1; i<a.size()-1; i++)
    {
        int l,r;
        l=i-1;
        r=i+1;
       // cout<<a[l]<<" "<<a[r]<<endl;
        while(l>=0 && r<a.size() && a[l]==a[r])
        {
            pc++;
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
            pc++;
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
    return pc+a.size();
    }
};
