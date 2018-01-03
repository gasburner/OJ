/*请实现一个函数，将一个字符串中的空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。*/
class Solution {
public:
	void replaceSpace(char *str,int length) {
       if (str==nullptr||length<=0)
       {return ;}
        int orignalLength = 0;
        int numberOfBlank = 0;
        int i = 0;
        while (str[i]!='\0')
        {   orignalLength++;
            if (str[i]==' ')
            {numberOfBlank++;}
            i++;
        }
      int newLength= orignalLength  + numberOfBlank *2;
        if (newLength > length)
        {return;}
        int indexOfOriginal = orignalLength ;
        int indexOfNew = newLength;
        while (indexOfOriginal >=0 && indexOfNew > indexOfOriginal)   
        {if (str[indexOfOriginal] == ' ')
        {str[indexOfNew--]='0';
         str[indexOfNew--]='2';
         str[indexOfNew--]='%';            
        }
         else 
         {str[indexOfNew--]=str[indexOfOriginal];
             
         }
         indexOfOriginal--;
         
         
         
        }
        
	}
};
