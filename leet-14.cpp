 string longestCommonPrefix(vector<string>& strs) {
        string output=strs[0];
    for(int i=1;i<=strs.size()-1;i++)
    {
        string temp;
        for (int k=0;k<output.size()|| k<strs[i].size();k++)
        {
            if(k>output.size())
            {
                break;
            }
            //cout<<k;
            if(output[k]==strs[i][k])
            {
                temp.push_back(output[k]);
                continue;
            }
            break;
        }
        output=temp;
        //cout<<temp;
        if(output=="")
        break;
    }

    return output;
    }
