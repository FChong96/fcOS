//冯冲 @ 2021.09.02
void _strwrite(char* string)
{
    char* p_strdst = (char *)(0xb8000);//指向显存开始地址

    while(*string){
        *p_strdst = *string++;
        p_strdst += 2; //跳过字符串颜色信息 
    }
    return ;
}

void printf(char* fmt, ...)
{
    _strwrite(fmt);
    return ;
}
