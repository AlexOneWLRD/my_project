#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Day=");
    scanf("%i",&a);
    printf("Month=");
    scanf("%i",&b);
    printf("Year=");
    scanf("%i",&c);

 {if (c%4)
    {
        printf("nevesokosny ");
    }
    else
    {
      printf("vesokosny");
    }
    }

    switch (c%12)
    {
    case 0: 
    {
        printf("monkey ");
    }    
        break;
     case 1: 
    {
        printf("rooster ");
    }    
        break;
     case 2: 
    {
        printf("dog ");
    }    
        break;
     case 3: 
    {
        printf("boar ");
    }    
        break;
     case 4: 
    {
        printf("rat ");
    }    
        break;
     case 5: 
    {
        printf("bull ");
    }    
        break;
     case 6: 
    {
        printf("tiger ");
    }    
        break;
     case 7: 
    {
        printf("rabbit and cat ");
    }    
        break;
     case 8: 
    {
        printf("dragon ");
    }    
        break;
     case 9: 
    {
        printf("snake ");
    }    
        break;
     case 10: 
    {
        printf("horse ");
    }    
        break;
     case 11: 
    {
        printf("goat and sheep ");
    }    
        break;
    default:
    {
        printf("Not year");
    }
        break;
    }
   
    {
        if ((b==12&&a>22)||(b==1&&a<20))
        {
            printf("kozerog");
        }
        else
        {
            if ((b==1&&a>21)||(b==2&&a<18))
            {
                printf("vodoley");
            }
            else
            {
                if ((b==2&&a>19)||(b==3&&a<20))
                {
                    printf("riby");
                }
                else
                {
                    if ((b==3&&a>21)||(b==4&&a<19))
                    {
                        printf("oven");
                    }
                    else
                    {
                        if ((b==4&&a>20)||(b==5&&a<20))
                        {
                            printf("telets");
                        }
                        else
                        {
                            if ((b==5&&a>21)||(b==6&&a<21))
                            {
                                printf("bliznetsy");
                            }
                            else
                            {
                                if ((b==6&&a>22)||(b==7&&a<22))
                                {
                                    printf("rak");
                                }
                                else
                                {
                                    if ((b==7&&a>23)||(b==8&&a<22))
                                    {
                                        printf("lev");
                                    }
                                    else
                                    {
                                        if ((b==8&&a>23)||(b==9&&a<22))
                                        {
                                            printf("deva");
                                        }
                                        else
                                        {
                                            if ((b==9&&a>23)||(b==10&&a<23))
                                            {
                                                printf("vesy");
                                            }
                                            else
                                            {
                                                if ((b==10&&a>24)||(b==11&&a<22))
                                                {
                                                    printf("scorpion");
                                                }
                                                else
                                                {
                                                    if ((b==11&&a>23)||(b==12&&a<21))
                                                    {
                                                        printf("strelech");
                                                    }
                                                    
                                                }
                                                
                                                
                                            }
                                            
                                            
                                        }
                                        
                                        
                                    }
                                    
                                    
                                }
                                
                                
                            }
                            
                            
                        }
                        
                        
                    }
                    
                    
                }
                
                
            }
            
        }
        
        
    }


}
