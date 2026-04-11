char Stack[100000];
int Top = -1;
void push(char ch)
{
    Stack[Top+1]=ch;
    Top++;
}
char pop()
{
    if(Top == -1)
    {
        return '#';
    }
    char ch = Stack[Top];
    Top--;
    return ch;
}
int Comparision(char open,char close)
{
    if(open == '(' && close == ')') return 1;
    else if(open == '{' && close == '}') return 1;
    else if(open == '[' && close ==']') return 1;
    return 0;
}
bool isValid(char* s) {
    int i;
    Top = -1;
    for(i = 0 ; s[i] != '\0' ; i++)
    {
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '[')
        {
            push(ch);
        }
        else if(ch == ')' || ch == '}' || ch == ']')
        {
            char StackTop = pop();
            if(!Comparision(StackTop,ch))
            {
                return false;
            }
        }
    }
    return(Top == -1);
}