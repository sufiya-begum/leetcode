bool squareIsWhite(char* coordinates) {
  
    if(coordinates[0] =='a' || coordinates[0] == 'c' || coordinates[0] == 'e'||coordinates[0] == 'g')
    {
        if((coordinates[1]-'0')%2==0)
        return true;
        else
        return false;
    }
    else
    {
        if((coordinates[1]-'0')%2==0)
        {
            return false;
        }
        else
        return true;
    } 
}