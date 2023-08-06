char *solanxuathien(char *s)
{
	int n=strlen(s);
	int max=0;
	int dem=1;
	for(int i=0;i<n;i++)
	{
		if(s[i]==s[i+1])
		{
			dem++;
				if(dem>max)
				{
					max=dem;
				}	
		}
		else
		{
           dem=1;
		}
	}
	cout<<max<<endl;
}
int main()
{
	char s[maxs];
	solanxuathien(s);
}
