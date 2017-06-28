class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int eng[600][2];
        memset(eng,0,sizeof(eng));
        int len=s.length();
        int count=0;
        int ans=0;
        int temp=-1;
        for(int i=0;i<len;i++)
        {
            if(eng[s[i]][0])
            {

                if(ans<count)
                    ans=count;
                if(eng[s[i]][1]>temp)
                    temp=eng[s[i]][1];
                if(temp>eng[s[i]][1])
                    count=i-temp;
                else
                    count=i-eng[s[i]][1];
                eng[s[i]][1]=i;


            }
            else
            {
                eng[s[i]][0]=1;
                eng[s[i]][1]=i;
                count++;
            }
            //cout<<count<<endl;
        }
        if(count>ans)
            ans=count;
        return ans;
    }
};
