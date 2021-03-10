//import java.util.*;	
//to find the length of the longest substring of a string without any repeating characters
class LongestSubstring
{
	public int lengthOfLongestSubstring(String s) 
	{
		int m=0;
		for(int i=0;i<s.length();i++)
		{
			for(int j=i+1;j<=s.length();j++)
			{	
				int k;
       				for(k=0;k<s.substring(i,j).length();k++)
            				if(s.substring(i,j).indexOf(s.substring(i,j).charAt(k))!=s.substring(i,j).lastIndexOf(s.substring(i,j).charAt(k)))
                				break;
        		        if(k==s.substring(i,j).length() && s.substring(i,j).length()>m)
            				m=s.substring(i,j).length();			
			}
		}	
		return m;
	} 
	public static void main(String args[])
	{
		LongestSubstring ob=new LongestSubstring();
		System.out.println(ob.lengthOfLongestSubstring(args[0])); 
	}
}