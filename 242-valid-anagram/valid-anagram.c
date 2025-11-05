bool isAnagram(char* s, char* t) {
   int sfrq[26]={0};
   int tfrq[26]={0};
   for(int i = 0 ; s[i]!='\0';i++)
   {
        sfrq[s[i]-'a']++;
   } 
   for(int i = 0 ; t[i]!='\0';i++)
   {
        tfrq[t[i]-'a']++;
   }
   for(int i = 0 ; i < 26 ; i++)
   {
    if(sfrq[i]!=tfrq[i]) return 0 ;
   }
   return 1;
}